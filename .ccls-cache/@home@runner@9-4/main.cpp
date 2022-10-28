#include <iostream>
#include <iomanip>
using namespace std;

void printMatrix_3col(int matrix[10][3], int N_ROWS, int N_COLUMNS);
int CountUnhealthySensitive(int matrix[10][3], int N_ROWS, int city_col);
int meanAirQualityIndex(int matrix[][3], int N_ROWS, int city_col);

int main() {
int city_col;
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

cout << "Air qualities in Grand Junction, Fort Collins and Denver/Boulder from 10/04/2020-10/13/2020" << endl;
  
  printMatrix_3col(AirQuality_Index, NUM_ROWS, NUM_COLUMNS);

cout <<"During this time, the air quality was unnhealthy for sensitive groups in:"<<endl;

  for (city_col =0; city_col<NUM_COLUMNS; city_col++){
     if (city_col == 0)
       cout << "Grand Junction: " << CountUnhealthySensitive(AirQuality_Index, NUM_ROWS, city_col) << " times." << endl;
if (city_col == 1)
       cout << "Fort Collins: " << CountUnhealthySensitive(AirQuality_Index, NUM_ROWS, city_col) << " times."<< endl;
    if (city_col == 2)
       cout << "Denver/Boulder: " << CountUnhealthySensitive(AirQuality_Index, NUM_ROWS, city_col) << " times."<< endl;
  }
  cout<< endl;
  cout<<"During this time, the average air quality in: "<< endl;
   for (city_col =0; city_col<NUM_COLUMNS; city_col++){
     if(city_col ==0)
      cout <<"Grand Junction was " << meanAirQualityIndex(AirQuality_Index, NUM_ROWS, city_col) << endl;
     if(city_col ==1)
      cout <<"Fort Collins was " << meanAirQualityIndex(AirQuality_Index, NUM_ROWS, city_col) << endl;
     if(city_col ==2)
      cout <<"Denver/Boulder was " << meanAirQualityIndex(AirQuality_Index, NUM_ROWS, city_col)  << endl;
}
return 0;
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
//function to find the mean
int meanAirQualityIndex(int matrix[][3], int N_ROWS, int city_col)
{
  int sum = 0;
  int row,avg;

  for (row = 0; row<N_ROWS; row++)
    avg = sum / N_ROWS;

    return avg;
}
//function to count unhealthy days
int CountUnhealthySensitive(int matrix[][3], int N_ROWS, int city_col){
int days = 0;
int unhealthy_level = 101;
int row;

  for (row = 0; row< N_ROWS; row++){
     if (matrix[row][city_col] >= unhealthy_level)
       days++;
  }
   return days; 
}
