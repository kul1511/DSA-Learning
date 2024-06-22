    public class Printing_All_Possible_SubArrays{
        // public static void subArray(int[] arr, int start, int end){
        //     if(start==end){
        //         return;
        //     }
        //     if(start > end){
        //         subArray(arr, 0, end+1);
        //     }

        // }
        public static void main(String s[]){
            int[] ar = {2,5,3,7,5};

            for(int i=0 ; i<ar.length ; i++ ){
                for(int j=i ; j<ar.length ; j++ ){
                    for(int k=i ; k<=j;k++){
                        System.out.print(ar[k]+ "");
                    }
                    System.out.println();
                }
            }
        }
    }