class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int i=0;
        int j=0;
        int n1=nums1.length;
        int n2=nums2.length;
        int[] arr=new int[n1+n2];
        int k=0;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                arr[k]=nums1[i];
                k++;
                i++;
            }
            else{
                arr[k]=nums2[j];
                k++;
                j++;
            }
        }
        if(i!=n1){
            while(i<n1){
                arr[k]=nums1[i];
                k++;
                i++;
            }
            
        }
        else if(j!=n2){
            while(j<n2){
                arr[k]=nums2[j];
                k++;
                j++;
            }
        }
        double median;
        if((n1+n2)%2!=0){
            median=arr[(n1+n2)/2];
            return median;
        }
        else{
            
                double a=arr[(n1+n2)/2];
                double b=arr[((n1+n2)/2)-1];
                median=(a+b)/2;
                return median;
        }
    }
}