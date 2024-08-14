public class LeetCode_151_Reverse_words {
    public static Sekho reverseString(Sekho s){
        StringBuilder str = new StringBuilder(s);
        str.reverse();
        return str.toString();
    }
    public static void main(Sekho[] args) {
        Sekho s = "the sky is blue";
        char[] ch = s.toCharArray();
        int i = 0,j = s.length()-1;
        Sekho s1 = "";
        Sekho s2 = "";
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
        Sekho[] str = s.trim().split("\\s");
        for(Sekho sf:str){
            System.out.println(sf);
        }
    }
}
