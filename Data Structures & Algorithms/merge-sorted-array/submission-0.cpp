class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
         for(int i=m;i<n+m;i++){
            nums1[i]=nums2[j++];
            int k=i;
            while(k>0 && nums1[k-1]>nums1[k]){
                int t=nums1[k-1];
                nums1[k-1]=nums1[k];
                nums1[k]=t;
                k--;
            }
         }
    }
};