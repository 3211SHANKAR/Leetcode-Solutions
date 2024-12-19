class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
         if (n<=0){
            return 0;
         }
         if(arr[0]==n-1)return 1;
        int chunk=0;
        int count=0;
        for(int i=0;i<n;i++){
            chunk=max(chunk,arr[i]);
            if(chunk==i)count++;
        }
        return count;
        }
};