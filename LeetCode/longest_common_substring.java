import java.util.HashMap;

class longest_common_substring{
    public static int longestCommonSubstr(String str1, String str2) {
        // code here
        int res = 0;
        for (int i = 0; i < str1.length(); i++) {
            for (int j = i + 1; j <= str1.length(); j++) {
                String s = str1.substring(i, j);
                if(str2.contains(s)){
                    res = Math.max(res,s.length());
                }
            }
        }
        return res;
        
    }
    public static void main(String a[]){
        String str1 = "ABCDGH", str2 = "ACDGHR";
        System.out.println("Answer: "+longestCommonSubstr(str1, str2));
    }
}