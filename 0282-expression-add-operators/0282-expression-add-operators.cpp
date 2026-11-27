class Solution {
    vector<string> result;
    map<int, char> mp = {
    {0, '+'},
    {1, '-'},
    {2, '*'} 
};
    



   void function(int start,string& num,string& cur , int target,  long long value, long long last){
    if(start==num.size()){
        if(value==target)
        result.push_back(cur);
        return;
    }
    
    long long current=0;
    for(int i=start;i<num.size();i++){
        if(i>start&&num[start]=='0'){
            break;
        }

        current=current*10+(num[i]-'0');
        string part=num.substr(start,i-start+1);
        if(start==0){
            cur+=part;
            function(i+1,num,cur,target,current,current);
            cur.resize(cur.size()-part.size());
        }
        else{
        for(auto j:mp){
            char op=j.second;
            cur.push_back(op);
            cur+=part;
            if(op=='+'){
                 function(i+1,num,cur,target,value+current,current);
            }
            else if(op=='-'){
                 function(i+1,num,cur,target,value-current,-current);
            }
            else if(op=='*'){
                 function(i+1,num,cur,target,value-last+last*current,last*current);
            }
             cur.resize(cur.size()-part.size()-1);
            
        }
        }
    }
         


   }



public:
    vector<string> addOperators(string num, int target) {
         string cur = "";

        function(0, num, cur,target, 0, 0);

        return result;


    }
};