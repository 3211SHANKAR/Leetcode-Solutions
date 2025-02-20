class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        vector<int>v;
        int size=nums[0].size();
        int maxsize=pow(2,size);
        for(int i=0;i<nums.size();i++){
            v.push_back(bitset<32>(nums[i]).to_ulong());
        }
        
        for(int i=0;i<maxsize;i++){
            if(find(v.begin(), v.end(), i) == v.end()){
                return bitset<32>(i).to_string().substr(32-size);
            }
        }
        return " ";
    }
};