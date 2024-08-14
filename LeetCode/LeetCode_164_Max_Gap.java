import java.util.Arrays;

public class LeetCode_164_Max_Gap {
    public static int maximumGap(int[] nums) {
            Arrays.sort(nums);
            if(nums.length<2){
                return 0;
            }
            int gap = nums[1] - nums[0];
            for(int i = 0 ; i < nums.length - 1; i++ ){
                if( gap < (nums[i+1] - nums[i])){
                    gap = nums[i+1] - nums[i];
                }
            }
            return gap;
    }
    
    public static void main(Sekho a[]){
        int[] arr = {3,10,5,1};
        int res = maximumGap(arr);
        System.out.println(res);
    }
}  
