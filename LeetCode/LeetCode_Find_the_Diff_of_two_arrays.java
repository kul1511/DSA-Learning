import java.util.ArrayList;
import java.util.List;

public class LeetCode_Find_the_Diff_of_two_arrays {

    public static List<List<Integer>> usingApproachOne(int nums1[] , int nums2[]){
        List<Integer> res = new ArrayList<>();
        List<List<Integer>> ans = new ArrayList<>();

        boolean flag = false;

        for(int i = 0 ; i < nums1.length ; i++ ){
            flag=false;
            for( int j = i ; j < nums2.length ; j++ ){
                if( nums1[j] == nums2[i] ){
                    flag = true;
                }   
            }
            if(!flag){
                res.add(nums1[i]);
                System.out.println(nums1[i]);
            }
        }
        ans.add(res);
        for(int i = 0 ; i < nums2.length ; i++ ){
            for( int j = i ; j < nums1.length ; j++ ){
                if( nums2[j] == nums1[i] ){
                    flag = true;
                }   
            }
            if(!flag)res.add(nums2[i]);
        }
        ans.add(res);

        return ans;
    }

    public static boolean binarySearch(int n,int[] arr){
        int s = 0;
        int e = arr.length-1;
        int mid = s + (e - s)/2;

        while(s<=e){
            if(arr[mid] == n){
                return true;
            }
            else if( arr[mid] > n ){
                e = mid - 1;
            }
            else if( arr[mid] < n ){
                s = mid + 1;
            }
            mid = s + ( e - s ) / 2;
        }
        // System.out.println(arr[mid]);
        return false;
    }

    public static List<List<Integer>> secondApproach(int[] nums1, int[] nums2){
        List<Integer> res1 = new ArrayList<>();
        List<Integer> res2 = new ArrayList<>();
        List<List<Integer>> ans = new ArrayList<>();

        for(int a: nums1){
            // System.out.println(a);
            if(!binarySearch(a,nums2)){
                System.out.println(a);
                if(!res1.contains(a)) res1.add(a);
            }
        }
        ans.add(res1);
        System.out.println(res1);

        for(int a: nums2){
            // System.out.println(a);
            if(!binarySearch(a,nums1)){
                System.out.println(a);
                if(!res2.contains(a)) res2.add(a);
            }
        }
        ans.add(res2);
        System.out.println(res2);
        System.out.println("ans: "+ans);
        return ans;

    }
    public static void main(String args[]){
        int nums1[] = {1,2,3,3};
        int nums2[] = {1,1,2,2};
        // int target = 5;
        // List<Integer> res = new ArrayList<>();
        // List<List<Integer>> list = new ArrayList<>();

        // // list = usingApproachOne(nums1,nums2);
        // list = 
        secondApproach(nums1, nums2);
        // System.out.println(list);

    //    System.out.println(binarySearch(1, nums1));
        
    }
}
