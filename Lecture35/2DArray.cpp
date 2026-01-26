// 2D Array in cpp
#include <iostream>
using namespace std;
int main()
{
   // int matrix[4][3] = {
   //     {1, 2, 3},
   //     {4, 5, 6},
   //     {7, 8, 9},
   //     {10, 11, 12}};
   int matrix[4][3];
   int rows = 4;
   int cols = 3;
   cout<<"Enter the elements of a matrix\n";
   //input
   for (int i = 0; i < 4; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cin >> matrix[i][j];
      }
      cout << endl;
   }
   //output
   for (int i = 0; i < 4; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cout << matrix[i][j] << " ";
      }
      cout << endl;
   }

   return 0;
}