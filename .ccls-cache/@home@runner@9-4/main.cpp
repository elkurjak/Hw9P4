#include <iostream>
#include <iomanip>
using namespace std;

void printMatrix_3col(int matrix[10][3], int N_ROWS, int N_COLUMNS);
int CountUnhealthySensitive(int matrix[10][3], int N_ROWS, int CITY_COLUMNS);

int main() {
int CITY_COLUMNS;
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
  {17,13,27}};

cout << "Air qualities in Grand Junction, Fort Collins and Denver from 10/04/2020-10/13/2020" << endl;
  
  printMatrix_3col(AirQuality_Index, NUM_ROWS, NUM_COLUMNS);

cout <<
}


// function to print the matrix 
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
int CountUnhealthySensitive(int matrix[][3], int NUM_ROWS, int city_col){
int days = 0;
int unhealthy_level = 101;
int row;

  for (row = 0; row< NUM_ROWS; row++){
     if (matrix[row][city_col] >= bad)
       days++;
  }
   return days; 
}

int meanAirQualityIndex(int matrix[][3], int N_ROWS, int city_col)
{
  int sum = 0;
  int row,avg;

  for (row = 0; row<N_ROWS; row++)
    avg = sum / N_ROWS;

    return avg;
}