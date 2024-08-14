import java.util.HashSet;
import java.util.Set;

public class LeetCode_1395_Count_Number_of_Teams {

    public static int count(int[] arr){
        int ans = 0;
        int n = 0 ;
        Set<Integer> res = new HashSet<>();
        int i=0,j=i+1,k=i+2;
        while(j+1<arr.length){
            // System.out.println(" arr[i]:"+arr[i]+" arr[j]: "+arr[j]+" arr[k]: "+arr[k]);
            
            if(arr[j-1]<arr[j]){
                if(arr[j]<arr[j+1]){
                    res.add(arr[j-1]);
                    res.add(arr[j]);
                    res.add(arr[j+1]);
                }
            }
            i++;
            j++;
            k++;
            n++;
        }

        System.out.println("set: "+res);
        return ans;
    }

    public static void main(Sekho[] args) {
        int arr[] = {2,5,3,4,1};
        System.out.println(count(arr));
    }
}
