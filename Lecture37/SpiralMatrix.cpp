#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int m = matrix.size();        // number of rows
    int n = matrix[0].size();     // number of columns
    int top = 0, left = 0;        // starting row and column
    int bottom = m - 1, right = n - 1; // ending row and column

    vector<int> result;

    while (top <= bottom && left <= right)
    {
        // Traverse top row (left to right)
        for (int j = left; j <= right; j++)
            result.push_back(matrix[top][j]);

        // Traverse right column (top+1 to bottom)
        for (int i = top + 1; i <= bottom; i++)
            result.push_back(matrix[i][right]);

        // Traverse bottom row (right-1 to left)
        if (top < bottom)
        {
            for (int j = right - 1; j >= left; j--)
                result.push_back(matrix[bottom][j]);
        }

        // Traverse left column (bottom-1 to top+1)
        if (left < right)
        {
            for (int i = bottom - 1; i > top; i--)
                result.push_back(matrix[i][left]);
        }

        // Move to the inner spiral
        top++;
        bottom--;
        left++;
        right--;
    }

    return result;
}

int main()
{
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the elements:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    vector<int> spiral = spiralOrder(matrix);

    cout << "\nSpiral order: ";
    for (int val : spiral)
    {
        cout << val << " ";
    }
    cout << "\n";

    return 0;
}
