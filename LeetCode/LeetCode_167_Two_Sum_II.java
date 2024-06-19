class LeetCode_167_Two_Sum_II{
    public static void main(String a[]){
        int[] res = new int[2];
        int arr[] = {3,4,7,9,10,32};
        int target = 11;

        int i = 0, j = arr.length-1;
        while(i <= j){
            // System.out.println(i+" "+j);
            int sum = arr[i] + arr[j];
            // System.out.println("Sum: "+sum);
            if(sum == target){
                res[0] = i+1;
                res[1] = j+1;
                break;
            }
            else if(sum > target){
                j--;
            }
            else if(sum < target){
                i++;
            }
        }
        System.out.println("Result: "+res[0] +" "+ res[1]);
    }
}