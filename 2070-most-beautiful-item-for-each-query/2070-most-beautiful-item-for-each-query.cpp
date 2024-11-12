class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        // Sort items by price
        sort(items.begin(), items.end());
        
        // Store original indices of queries for result placement
        vector<pair<int, int>> sortedQueries;
        for (int i = 0; i < queries.size(); i++) {
            sortedQueries.push_back({queries[i], i});
        }
        sort(sortedQueries.begin(), sortedQueries.end()); // Sort queries by price
        
        // Initialize output vector
        vector<int> output(queries.size(), 0);
        
        int maxBeauty = 0;
        int j = 0; // Pointer for items

        // Process each query in sorted order
        for (auto& [qPrice, qIndex] : sortedQueries) {
            // Move through items as long as they are affordable (<= qPrice)
            while (j < items.size() && items[j][0] <= qPrice) {
                maxBeauty = max(maxBeauty, items[j][1]); // Update max beauty
                j++;
            }
            output[qIndex] = maxBeauty; // Assign the result to the original index
        }

        return output;
    }
};
