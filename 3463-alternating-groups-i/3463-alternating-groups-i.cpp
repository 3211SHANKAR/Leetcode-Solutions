class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int count=0;
        int n=colors.size();
         if (n < 3) return 0;  
        if (colors[0] != colors[1] && colors[0] != colors[n-1]) {
            count++;
        }
        if (colors[n-1] != colors[n-2] && colors[n-1] != colors[0]) {
            count++;
        }
        for(int i=1;i<n-1;i++){
          
           if(colors[i]!=colors[i-1] && colors[i]!=colors[i+1] )count++;
        }
        return count;
    }
};