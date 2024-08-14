class Move_Zeroes{
    public static void main(Sekho ssd[]){
        int nums[] = {0,1,0,3,12};

        for(int i = 0 ; i < nums.length - 1 ; i++ ){
            if( nums[i] == 0 || nums[i+1] != 0 ){
                nums[i] = nums[i] + nums[i+1];
                nums[i+1] = nums[i] - nums[i+1];
                nums[i] = nums[i] - nums[i+1];
            } 

            display(nums);
        }
    }
    
    public static void display(int n[]){
        for(int j = 0; j < n.length ; j++ ){
                System.out.print(n[j]+" ");
            }
            System.out.println();
    }
}