// class Solution {
// public:
//     bool checkPossibility(vector<int>& arr) {
          
   
//     for(int i=0;i<arr.size()-1;i++){
//         if(arr[i]>=arr[i+1]){
//             arr.erase(arr.begin()+i);
//             break;
//         }
//     }
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]>=arr[i+1]){
//             return false;
//         break;
//     }
//     }
//     return true;
// }
// };



class Solution {
public:
    bool checkPossibility(vector<int>& arr) {
        int count = 0;
        
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                count++;
                
                if (count > 1) {
                    return false;
                }
                
                if (i > 0 && arr[i - 1] > arr[i + 1] && i + 2 < arr.size() && arr[i] > arr[i + 2]) {
                    return false;
                }
            }
        }
        return true;  
    }
};
