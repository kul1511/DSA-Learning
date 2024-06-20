public class LeetCode_268_Missing_Number{

    public static int missingNumber(int[] nums) {
        int n = nums.length;
        long  sums = n*(n+1)/2;
        long  sum = 0;
        for(long c:nums){
            sum+=c;
        }
        return (int) (sums-sum);
    }

    public static void main(String a[]){
        int arr[] = {3,0,1};
        int num = missingNumber(arr);
        System.out.println("Missing Number: "+num);
    }
}