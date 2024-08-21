class Solution {
    public int longestConsecutive(int[] nums) {
        TreeSet<Integer> set = new TreeSet<>();
        for(int i:nums)set.add(i);
        Integer[] arr = set.toArray(new Integer[0]);
        int count=1,res=0;

        if(nums.length==1||arr.length==1)return 1;

        for(int i=1;i<arr.length;i++){
            if(arr[i]-arr[i-1]==1){
                count++;
            }
            else{
                count=1;
            }
            res = Math.max(res,count);
        }
        return res;
    }
}
