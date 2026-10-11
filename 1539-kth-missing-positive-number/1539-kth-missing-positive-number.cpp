class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
         vector<int> arr1;
         for(int i=1;i<=arr[arr.size()-1]+k;i++){
            int found=0;
           for(int j=0;j<arr.size();j++){
            if(i==arr[j]){
                found=1;
            }
           } 
           if(found){
            found=0;
           }
           else{
            arr1.push_back(i);
           }       
   
         }
         return arr1[k-1];
         
    }
};