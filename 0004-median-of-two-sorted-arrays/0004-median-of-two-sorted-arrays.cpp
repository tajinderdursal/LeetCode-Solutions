class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> nums3;
        double mid;

        int i = 0, j = 0;

        while(i < nums1.size() && j < nums2.size()) {

            if(nums1[i] < nums2[j]) {
                nums3.push_back(nums1[i]);
                i++;
            }
            else {
                nums3.push_back(nums2[j]);
                j++;
            }
        }

      
        for(; i < nums1.size(); i++) {
            nums3.push_back(nums1[i]);
        }

        for(; j < nums2.size(); j++) {
            nums3.push_back(nums2[j]);
        }

        
        if(nums3.size() % 2 == 1) {

            int indx = nums3.size()/2;
            mid = nums3[indx];
        }

        
        else {

            int indx = nums3.size()/2;

            mid = (nums3[indx] + nums3[indx-1]) / 2.0;
        }

        return mid;
    }
};