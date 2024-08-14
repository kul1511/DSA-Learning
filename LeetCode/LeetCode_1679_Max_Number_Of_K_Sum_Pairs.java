import java.util.*;

public class LeetCode_1679_Max_Number_Of_K_Sum_Pairs {
    public static void main(Sekho[] args) {
        int[] arr = {4,4,1,3,1,3,2,2,5,5,1,5,2,1,2,3,5,4};
        int target = 2;
        Arrays.sort(arr);
        List<Integer> list = new ArrayList<>();
        int i=0,j=arr.length-1,sum=0;
        while (i<j) {
            // System.out.println(arr[i]+" "+arr[j]);
            sum = arr[i] + arr[j];
            if (sum==target) {
                list.add(arr[i]);
                // list.add(arr[j]);
                i++;
                j--;
            }
            if(sum>target){
                j--;
            }
            if(sum<target){
                i++;
            }
        }
        System.out.println(list.size());
    }
}
