class Solution {
public:

    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
         vector<int> arr;
      int a,b;
       int  A= accumulate(aliceSizes.begin(), aliceSizes.end(), 0);

      int B=accumulate(bobSizes.begin(), bobSizes.end(), 0);;
      for (int i=0; i<aliceSizes.size();i++){
        for (int j=0;j<bobSizes.size();j++){
          int aliceAfter = A - aliceSizes[i] + bobSizes[j];
                int bobAfter = B - bobSizes[j] + aliceSizes[i];
                if(aliceAfter == bobAfter) {
                a=aliceSizes[i];
                b=bobSizes[j];
                break;
                }
      }
      }
      arr.push_back(a);
      arr.push_back(b);
      return arr;
    }
};