class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        // Directions for the adjacent swaps based on the zero's position
        vector<vector<int>> directions = { {1, 3}, {0, 2, 4}, {1, 5}, {0, 4}, {1, 3, 5}, {2, 4} };
        
        string target = "123450";
        string startState;
        for (const auto& row : board) {
            for (int num : row) {
                startState += to_string(num);
            }
        }

        unordered_set<string> visited;
        queue<string> queue;
        queue.push(startState);
        visited.insert(startState);

        int moves = 0;
        while (!queue.empty()) {
            int size = queue.size();
            while (size-- > 0) {
                string current = queue.front();
                queue.pop();

                if (current == target) return moves;

                int zeroPos = current.find('0');
                for (int newZeroPos : directions[zeroPos]) {
                    string nextState = current;
                    swap(nextState[zeroPos], nextState[newZeroPos]);

                    if (visited.count(nextState)) continue;
                    visited.insert(nextState);
                    queue.push(nextState);
                }
            }
            moves++;
        }
        return -1;
    }
};
