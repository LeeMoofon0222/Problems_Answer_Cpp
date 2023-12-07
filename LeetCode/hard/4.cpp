class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i = 0; i<nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int h = nums1.size();
        double p;
        if(h%2==1) p=nums1[h/2];
        else{
            p = (nums1[h/2]+nums1[h/2-1])/2.0;
        }
        return p;
    }
};
