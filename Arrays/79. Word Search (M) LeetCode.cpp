Code:

class Solution {
public:
    bool search(int i, int j, int n, int m, vector<vector<char>>& board, int k, string word) {
        if (k == word.size()) {
            return true;
        }

        if (i < 0 || i == n || j < 0 || j == m || board[i][j] != word[k]) {
            return false;
        }

        char ch = board[i][j];
        board[i][j] = '#'; // Mark the current cell as visited

        bool opt1 = search(i, j + 1, n, m, board, k + 1, word); // Right
        bool opt2 = search(i, j - 1, n, m, board, k + 1, word); // Left
        bool opt3 = search(i + 1, j, n, m, board, k + 1, word); // Down
        bool opt4 = search(i - 1, j, n, m, board, k + 1, word); // Up

        board[i][j] = ch; // Revert the cell back to its original character

        return opt1 || opt2 || opt3 || opt4;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (search(i, j, n, m, board, 0, word)) {
                    return true;
                }
            }
        }
        return false;
    }
};

TC: O(4^(n*m))
SC: O(K)
