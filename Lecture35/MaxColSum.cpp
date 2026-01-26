// Maximum col sum
#include <iostream>
using namespace std;
int getMaxSum(int mat[3][3],int rows,int cols){
   int maxColSum = INT16_MIN;

   for (int i = 0; i < rows; i++)
   {
      int colSumI = 0;
      for (int j = 0; j < cols; j++)
      {
         colSumI += mat[j][i];
      }
      maxColSum = max(maxColSum,colSumI);
      
   }
   return maxColSum;
   
}
int main()
{
   int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
   int rows = 3;
   int cols = 3;

   cout << getMaxSum(matrix, rows, cols) << endl;

   return 0;
}