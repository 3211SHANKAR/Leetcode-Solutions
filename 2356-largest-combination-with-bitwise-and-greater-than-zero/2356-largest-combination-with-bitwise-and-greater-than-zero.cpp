class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int rescount=0,bit=32;
        while(bit--){  
            int count=0;
            for(auto a:candidates){
                if((a & (1<<bit))!=0)count++;
            }
            rescount=max(rescount,count); 
        }
        return rescount;
    }
};