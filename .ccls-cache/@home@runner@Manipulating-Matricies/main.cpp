#include <iostream>
#include <iomanip>
using namespace std;
void printMatrix_3col(int matrix[10][3], int N_ROWS, int N_COLUMNS);
int CountUnhealthySensitive(int matrix[10][3], int N_ROWS, int N_COLUMNS);
int main() {
  
const int NUM_ROWS = 10;
const int NUM_COLUMNS = 3;
 int AirQuality_Index[NUM_ROWS][NUM_COLUMNS] = {
  {50,68,58},
  {58,115,78},
  {62,110,81},
  {66,124,110},
  {64,152,121},
  {46,143,90},
  {46,143,90},
  {25,91,91},
  {27,19,59},
  {17,13,27},
 };
  printMatrix_3col(AirQuality_Index, NUM_ROWS, NUM_COLUMNS);
}
// function to print the matrix in a matrix with 3 columns
void printMatrix_3col(int matrix[10][3], int N_ROWS, int N_COLUMNS)
{
    int row, col;
    for (row = 0; row < N_ROWS; row++)
    {
        for(col = 0; col < N_COLUMNS; col++)
            cout << setw(6) << matrix[row][col] << " ";
        
        cout << endl;    
    }
}

