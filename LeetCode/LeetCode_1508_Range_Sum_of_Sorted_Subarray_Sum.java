import java.util.*;

class LeetCode_1508_Range_Sum_of_Sorted_Subarray_Sum{

    public static void rangeSum(int[] arr,int n, int left, int right){
        int size = n*(n+1/2);
        int sum=0,res=0;
        List<Integer> subarr = new ArrayList<>(size);
        // Object[] subarray = new Object[size];
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=i;j<n;j++){
                sum+=arr[j];
                subarr.add(sum);
            }
        }
        int[] subarray = subarr.stream().mapToInt(i -> i).toArray();
        // subarray = subarr.toArray();
        Arrays.sort(subarray);
       for(int i=left-1;i<right;i++){
            res+=subarray[i];
            // System.out.println(subarray[i]);
       }
       System.out.println(res);
    }
    public static void main(String s[]){
        int arr[] = {1,2,3,4};
        rangeSum(arr,4,1,5);
    }
}