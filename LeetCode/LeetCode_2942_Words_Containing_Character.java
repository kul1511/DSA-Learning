import java.util.*;
public class LeetCode_2942_Words_Containing_Character {
    public static void main(String sd[]){
        String[] words = {"abc","bcd","aaaa","cbc"};
        char c = 'z';
        List<Integer> res = new ArrayList<>();
        for(int i = 0 ; i < words.length ; i++){
            if(words[i].contains(String.valueOf(c))){
                res.add(i);
            }
        }
        if(res.isEmpty()){
            System.out.println("Empty");
        }
        else{
            for(int d : res){System.out.print(d+" ");}
        }
    }
}
