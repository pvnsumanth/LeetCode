import java.util.Scanner;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        int i,j;
        int count=0;
        int arr[]={0,0};
        for(i=0;i<nums.length;i++){
            for(j=i+1;j<nums.length;j++){
                if(nums[i]+nums[j]==target){
                    arr[0]=i;
                    arr[1]=j;
                    count+=1;
                    break;
                }
            }
            if(count==1){
                break;
            }
        }
        
        return arr;  
    }
}