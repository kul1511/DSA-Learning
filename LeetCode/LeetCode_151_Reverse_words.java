public class LeetCode_151_Reverse_words {
    public static String reverseString(String s){
        StringBuilder str = new StringBuilder(s);
        str.reverse();
        return str.toString();
    }
    public static void main(String[] args) {
        String s = "the sky is blue";
        char[] ch = s.toCharArray();
        int i = 0,j = s.length()-1;
        String s1 = "";
        String s2 = "";
        while(i<j){
            if(ch[i]!=' ')s1+=ch[i];
            // else{
            //     continue;
            // }
            if(ch[j]!=' ')s2+=ch[j];
            // else{
            //     continue;
            // }
            i++;
            j--;
        }
        System.out.println(s1);
        System.out.println(s2);
        String[] str = s.trim().split("\\s");
        for(String sf:str){
            System.out.println(sf);
        }
    }
}
