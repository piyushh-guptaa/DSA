class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> matrix(m, vector<int>(n, -1));
        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;
        ListNode* current = head;
        
        while (top <= bottom && left <= right && current != nullptr) {
            for (int j = left; j <= right && current != nullptr; ++j) {
                matrix[top][j] = current->val;
                current = current->next;
            }
            ++top;
            
            for (int i = top; i <= bottom && current != nullptr; ++i) {
                matrix[i][right] = current->val;
                current = current->next;
            }
            --right;
            
            for (int j = right; j >= left && current != nullptr; --j) {
                matrix[bottom][j] = current->val;
                current = current->next;
            }
            --bottom;
            
            for (int i = bottom; i >= top && current != nullptr; --i) {
                matrix[i][left] = current->val;
                current = current->next;
            }
            ++left;
        }
        
        return matrix;
    }
};
