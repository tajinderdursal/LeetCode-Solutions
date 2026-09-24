class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int threshold=(nums.size())/2;
        unordered_map<int, int > frequencies;
        for(int i :nums){
            frequencies[i]++;
            if(frequencies[i]>threshold){
                return i;
            }

        }
        return -1;
        
    }
};