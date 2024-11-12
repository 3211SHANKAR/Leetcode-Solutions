class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
            sort(items.begin(), items.end());
            vector<pair<int, int>> filteredItems;
    int maxBeautySoFar = 0;
    for (const auto& item : items) {
        int price = item[0], beauty = item[1];
        maxBeautySoFar = max(maxBeautySoFar, beauty);
        filteredItems.emplace_back(price, maxBeautySoFar);
    }
     vector<pair<int, int>> sortedQueries;
    for (int i = 0; i < queries.size(); ++i) {
        sortedQueries.emplace_back(queries[i], i);
    }
    sort(sortedQueries.begin(), sortedQueries.end());
     vector<int> answer(queries.size(), 0);
    int i = 0;
    for (const auto& query : sortedQueries) {
        int maxPrice = query.first, idx = query.second;

        while (i < filteredItems.size() && filteredItems[i].first <= maxPrice) {
            ++i;
        }
        if (i > 0) {
            answer[idx] = filteredItems[i - 1].second;
        }
    }
    return answer;

    }
};