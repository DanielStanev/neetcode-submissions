class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // validate rows
        for (int i = 0; i < 9; i++) {
            // make it a lil bigger to ease indexing
            std::vector<int> count = std::vector(10, 0);

            for (int j = 0; j < 9; j++) {
                char x = board[i][j];

                if (x < '0' || x > '9')
                    continue;

                if (++count[x - '0'] > 1) {
                    std::printf("Row failure: (%d,%d)", i, j);
                    return false;    
                }
            }
        }

        // validate columns
        for (int i = 0; i < 9; i++) {
            // make it a lil bigger to ease indexing
            std::vector<int> count = std::vector(10, 0);

            for (int j = 0; j < 9; j++) {
                char x = board[j][i];

                if (x < '0' || x > '9')
                    continue;

                if (++count[x - '0'] > 1) {
                    std::printf("Column failure: (%d,%d)", i, j);
                    return false;
                }
            }
        }

        // validate boxes
        for (int i = 0; i < 9; i += 3) {
            // make it a lil bigger to eas indexing

            // (i,j) is the start of a box
            for (int j = 0; j < 9; j += 3) {
                // (x,y) is current index
                std::vector<int> count = std::vector(10, 0);

                for (int x = i; x < i + 3; x++) {
                    for (int y = j; y < j + 3; y++) {
                        char c = board[x][y];
                    
                        if (c < '0' || c > '9')
                            continue;

                        if (++count[c - '0'] > 1) {
                            std::printf("Box failure: (%d,%d) = %c", x, y, c);
                            return false;
                        }
                    }
                }
            }
        }

        // Didn't fail any validation checks -- return true
        return true;
    }
};
