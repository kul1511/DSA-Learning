public class LeetCode_1456_Max_Vowels_In_Substring {

    //Bruteforce
    public static int maxVowels(char[] sArray, int k){
        int count = 0, res = 0 ;
        for (int i = 0; i < sArray.length; i++) {
            count = 0;
            for ( int j = i ; j <= i+k-1 ; j++ ){
                if(j <= sArray.length-1){
                    if(sArray[j] == 'a' || sArray[j] == 'e' || sArray[j] == 'i' || sArray[j] == 'o' || sArray[j] == 'u')count++;
                }
                if(count > res){
                    res = count;
                }
            }
            // System.out.println();
        }
        return res;
    }

    //Two Pointers
    public static int count(char[] sArray, int k){
        int i = 0, j = 0;   
        int res = 0 , count = 0;
         
        while (j<sArray.length) {
            if(sArray[j] == 'a' || sArray[j] == 'e' || sArray[j] == 'i' || sArray[j] == 'o' || sArray[j] == 'u')count++;
            if( j-i+1 == k ){
                res = Math.max(count,res);
                if(sArray[i] == 'a' || sArray[i] == 'e' || sArray[i] == 'i' || sArray[i] == 'o' || sArray[i] == 'u')count--;
                i++;
            }
            j++;
        }
        return res;
    }
    public static void main(String[] args) {
        String s = "aeiou";
        int k = 2;
        char[] sArray = s.toCharArray();
        System.out.println("Max Count: "+maxVowels(sArray, k));
        System.out.println("Max Count using two pointers: "+count(sArray, k));
    }
}
