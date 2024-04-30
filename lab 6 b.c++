
#include <iostream>

using namespace std;

int main() {
    int rows, cols;

   cout << "Enter number of rows (max 3): ";
    cin >> rows;
    cout << "Enter number of columns (max 3): ";
    cin >> cols;

    if(rows > 3 || cols > 3) {
        cout << "Dimensions must not exceed 3." << endl;
        return 1;
    }

    double** array = new double*[rows];
    for(int i = 0; i < rows; ++i)
        array[i] = new double[cols];

    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << "Enter value for arr[" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    cout << "Array elements are:" << endl;
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << "arr[" << i << "][" << j << "] = " << array[i][j] << endl;
        }
    }

       for(int i = 0; i < rows; ++i)
        delete [] array[i];
    delete [] array;

    return 0;
}
