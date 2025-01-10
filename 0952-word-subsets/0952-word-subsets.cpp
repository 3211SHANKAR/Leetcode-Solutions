class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> result; 
        map<char, int> maxFrequency;
        for (string word : words2) {
            map<char, int> currentFrequency;
            for (char c : word) {
                currentFrequency[c]++; 
            }
            for (auto entry : currentFrequency) {
                char character = entry.first;
                int count = entry.second;
                maxFrequency[character] = max(maxFrequency[character], count); 
            }
        }

        for (string word : words1) {
            map<char, int> wordFrequency;
            for (char c : word) {
                wordFrequency[c]++; 
            }

            bool isUniversal = true;
            for (auto entry : maxFrequency) {
                char character = entry.first;
                int requiredCount = entry.second;

                if (wordFrequency[character] < requiredCount) {
                    isUniversal = false; 
                    break;
                }
            }
            if (isUniversal) {
                result.push_back(word);
            }
        }

        return result; 
    }
};
