#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSafe(int row, int col, vector<string> &board, int n)
    {
        int duprow = row;
        int dupcol = col;

        // Upper Diagonal
        while (row >= 0 && col >= 0)
        {
            if (board[row--][col--] == 'Q')
                return false;
        }

        // Row
        row = duprow;
        col = dupcol;
        while (col >= 0)
        {
            if (board[row][col--] == 'Q')
                return false;
        }

        // Left diagonal
        col = dupcol;
        while (row < n && col >= 0)
        {
            if (board[row++][col--] == 'Q')
                return false;
        }
        return true;
    }

    void fun(int col, vector<string> &board, vector<vector<string>> &ans, int n)
    {
        if (col == n)
        {
            ans.push_back(board);
            return;
        }

        for (int row = 0; row < n; row++)
        {
            if (isSafe(row, col, board, n))
            {
                board[row][col] = 'Q';
                fun(col + 1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }

    void fun(int col, vector<string> &board, vector<vector<string>> &ans, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal, int n)
    {

        if (col == n)
        {
            ans.push_back(board);
            return;
        }

        for (int row = 0; row < n; row++)
        {
            if (leftRow[row] == 0 && upperDiagonal[row + col] == 0 &&
                lowerDiagonal[n - 1 + col - row] == 0)
            {

                board[row][col] = 'Q';
                leftRow[row] = 1;
                upperDiagonal[row + col] = 1;
                lowerDiagonal[n - 1 + col - row] = 1;

                fun(col + 1, board, ans, leftRow, upperDiagonal, lowerDiagonal, n);

                board[row][col] = '.';
                leftRow[row] = 0;
                upperDiagonal[row + col] = 0;
                lowerDiagonal[n - 1 + col - row] = 0;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for (int i = 0; i < n; i++)
        {
            board[i] = s;
        }

        vector<int> leftRow(n, 0), upperDiagonal(2 * n - 1, 0), lowerDiagonal(2 * n - 1, 0);

        fun(0, board, ans, leftRow, upperDiagonal, lowerDiagonal, n);
        fun(0, board, ans, n);
        return ans;
    }

    void print()
    {
        cout << 'Hello, Abhay';
    }
};

int main()
{
    Solution s;
    s.print();
    return 0;
}