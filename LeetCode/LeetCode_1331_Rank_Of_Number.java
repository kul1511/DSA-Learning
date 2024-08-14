import java.util.*;

public class LeetCode_1331_Rank_Of_Number {

    
    public static void main(Sekho s[]){
        Scanner scan = new Scanner(System.in);


        int n = scan.nextInt();
        int[] arr = new int[n];

        for(int i=0;i<n;i++){
            arr[i] = scan.nextInt();
        }
        
        Set<Integer> set = new TreeSet<>();
        for (int num : arr) {
            set.add(num);
        }

        Map<Integer, Integer> map = new HashMap<>();
        int rank = 1;
        for (int num : set) {
            map.put(num, rank++);
        }
        System.out.println(map);

        int[] ans = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {
            ans[i] = map.get(arr[i]);
        }

        System.out.println("Rank: ");
        for(int i=0;i<ans.length;i++){
            System.out.print(ans[i]+" ");
        }

    }
}
