public class Find_First_and_Last_Index_of_Target {

    public static int firstIndex(int[] arr,int target){
        int res = -1;
        int s=0;
        int e=arr.length-1;
        int mid = s + (e - s)/2;

        while(s<=e){
            if(arr[mid] == target){
                res = mid;
                e = mid - 1;
            }
            else if(arr[mid] < target){
                s = mid + 1;
            }
            else if(arr[mid] > target){
                e = mid - 1;
            }
            mid = s + (e - s)/2;
        }
        return res;
    }

    public static int secondIndex(int[] arr,int target){
        int res = -1;
        int s=0;
        int e=arr.length-1;
        int mid = s + (e - s)/2;

        while(s<=e){
            if(arr[mid] == target){
                res = mid;
                s = mid + 1;
            }
            else if(arr[mid] < target){
                s = mid + 1;
            }
            else if(arr[mid] > target){
                e = mid - 1;
            }
            mid = s + (e - s)/2;
        }
        return res;
    }

    public static void main(Sekho ar[]){
        int num[] = {1,4,6,6,6,7,8};
        int target = 6;
        int first = firstIndex(num, target);
        int second = secondIndex(num, target);
        System.out.println("First Index of '"+target+"' : "+first);
        System.out.println("Second Index of '"+target+"' : "+second);
    }
}
