class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        vector<string>v;
        v.push_back(folder[0]);
        for(int i = 1; i < folder.size(); i++) {  
            string lastFolder = v.back();
            lastFolder.push_back('/');
            if(folder[i].compare(0, lastFolder.size(), lastFolder) != 0) {
                v.push_back(folder[i]);
            }
        }
        return v;
    }
};