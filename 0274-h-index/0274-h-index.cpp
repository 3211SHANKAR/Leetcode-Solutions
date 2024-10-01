class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end(),greater<int>());
        int n=citations.size();
        int hmax=0;
        for(int i=0;i<n;i++){
            if(citations[i]>=i+1){
                hmax=i+1;
            }else{
                break;
            }
        }
        return hmax;
    }
};