class Solution {
public:
     void initialize(vector<vector<int>> &m, int n)
    {
        // Initialization: All elements in the diagonal are true (1) (palindromes of size 1)
        // The column index is the letter we start, and the line is the end of the analyzed substring
        // The matrix is lower triangular
        for (int i = 0; i < n; i++)
        {
            vector<int> tmp(i + 1, 0);
            m.push_back(tmp);
            m[i][i] = 1;
        }

        return;
    }

    pair<int, int> DP_Palindrome(string &s)
    {
        // Returns the beginning and end of the largest palindrome
        int n = s.size(), max_size = -1;
        pair<int, int> p = {0, 0};
        vector<vector<int>> memo;
        initialize(memo, n);

        for (int line = 1; line < n; line++)
        {
			// We populate the matrix passing line by line, since the palindrome depends on previous values
            for (int col = 0; col < memo[line].size() - 1; col++)
            {
                if (line - col == 1)
                {
					// consecutive letters -> palindrome of size one
                    memo[line][col] = s[line] == s[col] ? 1 : 0;
                }
                else
                {
					// check if two last letters are equal and if the middle substring is a palindrome (starts at col + 1 and end at line - 1)
                    memo[line][col] = s[line] == s[col] && memo[line - 1][col + 1] == 1 ? 1 : 0;
                }
				// update the maximum size found and save the indexes
                if (line - col + 1 > max_size && memo[line][col] == 1)
                {
                    max_size = line - col + 1;
                    p = {col, line};
                }
            }
        }

        return p;
    }

    string longestPalindrome(string s)
    {
        pair<int, int> coord = DP_Palindrome(s);
        int left = coord.first, right = coord.second;
        string result;

        for (int i = left; i <= right; i++)
            result.push_back(s[i]);

        return result;
    }
};