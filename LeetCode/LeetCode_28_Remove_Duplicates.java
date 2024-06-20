import java.util.*;

class LeetCode_28_Remove_Duplicates{
    public static void main(String s[]){
        Set<Integer> res = new HashSet<>();
        int[] num = {1,1,2,3};
        for(int i : num){
            res.add(i);
        }
        System.out.println(res.size());
    }
}