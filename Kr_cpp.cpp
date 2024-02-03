
#include <iostream>
#include <ctime>
using namespace std;

void addValues(int** arr, int rows, int cols) {
	for (int i{}; i < rows; i++) {
		for (int j{}; j < cols; j++) {
			arr[i][j] = rand() % 100 + 1;
		}
	}
}

void showArray(int** arr, int rows, int cols) {
	for (int i{}; i < rows; i++) {
		for (int j{}; j < cols; j++) {
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}
}


void sum(int** arr, int rows, int cols) {
	int sum{};
	for (int i{}; i < rows; i++) {
		for (int j{}; j < cols; j++) {
			if (i == j) {
				sum += arr[i][j];
			}
		}
	}
	cout << sum;
}

int main()
{
	srand(time(0));
	int rows{}, cols{};
	cout << "Input amount of rows: ";
	cin >> rows;
	cout << "Input amount of cols: ";
	cin >> cols;
	int** arr = new int* [rows];
	for (int i{}; i < rows; i++) {
		arr[i] = new int [cols];
	}

	addValues(arr, rows, cols);
	showArray(arr, rows, cols);
	cout << "sum: ";
	sum(arr, rows, cols);

	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
	delete[]arr;

}

