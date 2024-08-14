class LeetCode_643_Max_Avg_SubArray {
    public static void main(Sekho s[]) {
        int[] nums = {4433,-7832,-5068,4009,2830,6544,-6119,-7126,-780,-4254,-8249,-9168,9492,402,5789,6808,8953,5810,-7353,7933,4766,5182,-3230,-1989,5786,6922,-4646,4415,-9906,807,-6373,3370,2604,8751,-9173,-2668,-6876,9500,3465,-1900,4134,-1758,-1453,-5201,-9825,4469,-1999,-1108,1836,3923,6796,-5252,9863,-5997,-3251,9596,-3404,-540,2826,-1737,3341,-3623,-9885,2603,-5782,8174,2710,6504,-4128 };
        int k = 59;
        double avg = 0, res = 0, sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        avg = sum / k;
        res = avg;
        for (int i = 1; i <= nums.length-k ; i++) {
            sum=0;
            for (int j = i; j < k+i; j++) {
                sum += nums[j];
                avg = sum / k;
                // System.out.println("sum: "+sum+"avg: "+avg+"res: "+res);
                res = Math.max(avg, res);
            }
        }
        System.out.println(res);
    }
}

// class LeetCode_643_Max_Avg_SubArray {
//     public static void main(String[] args) {
//         int[] nums = {4433,-7832,-5068,4009,2830,6544,-6119,-7126,-780,-4254,-8249,-9168,9492,402,5789,6808,8953,5810,-7353,7933,4766,5182,-3230,-1989,5786,6922,-4646,4415,-9906,807,-6373,3370,2604,8751,-9173,-2668,-6876,9500,3465,-1900,4134,-1758,-1453,-5201,-9825,4469,-1999,-1108,1836,3923,6796,-5252,9863,-5997,-3251,9596,-3404,-540,2826,-1737,3341,-3623,-9885,2603,-5782,8174,2710,6504,-4128};
//         int k = 59;
//         double maxAvg = getMaxAverage(nums, k);
//         System.out.println(maxAvg);
//     }

//     public static double getMaxAverage(int[] nums, int k) {
//         double maxSum = Double.MIN_VALUE;
//         double currSum = 0;

//         // Calculate the sum of the first k elements
//         for (int i = 0; i < k; i++) {
//             currSum += nums[i];
//         }
//         maxSum = currSum;

//         // Slide the window and update the maximum sum
//         for (int i = k; i < nums.length; i++) {
//             currSum = currSum - nums[i - k] + nums[i];
//             maxSum = Math.max(maxSum, currSum);
//         }

//         return maxSum / k;
//     }
// }
