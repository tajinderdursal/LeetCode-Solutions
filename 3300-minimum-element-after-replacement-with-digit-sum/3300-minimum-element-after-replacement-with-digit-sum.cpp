class Solution {
public:
    int minElement(vector<int>& nums){ 
        int min=INT_MAX;
        for (int i=0;i<nums.size();i++){
            int sum=0;
            int x=nums[i];
            while(x>0){
             sum+=x%10;
             x=x/10;
            }
            if (min>sum){
                  min =sum;
            }

        }

        return min;
        
    }
};