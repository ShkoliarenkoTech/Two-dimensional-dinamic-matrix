#include<iostream>
#include<string>
#include<time.h>
using namespace std;

int main() 
{
	srand(time(NULL));

	int ROWS = 0;
	int COLUMNS = 0;

	cout << "Enter the count of the rows: ";
		cin >> ROWS;
	cout<<endl;
	cout << "Enter the count of the columns: ";
		cin >> COLUMNS;

	int **arr = new int*[ROWS];

	////////////////////////////////////////creating the matrix;

	for (int i = 0; i < ROWS; i++) 
	{
		arr[i] = new int[COLUMNS];
	}

	///////////////////////////////////////filling the matrix

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++) 
		{
			arr[i][j] = rand() % 100;
		}
	}

	/////////////////////////////////////printing the matrix

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout<<endl;
	}
	/////////////////////////////////////deleting the matrix 

	for (int i = 0; i < ROWS; i++)
	{
		delete[] arr[i];
	}

	delete[]arr;
}