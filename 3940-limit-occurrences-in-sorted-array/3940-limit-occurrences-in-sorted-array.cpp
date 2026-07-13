class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> arr;
        int n = nums.size();

        int i = 0;

        while (i < n) {
            int j = i;

            while (j < n && nums[j] == nums[i]) {
                j++;
            }

            int freq = j - i;

           
            for (int x = 0; x < min(freq, k); x++) {
                arr.push_back(nums[i]);
            }

            i = j; 
        }

        return arr;
    }
};