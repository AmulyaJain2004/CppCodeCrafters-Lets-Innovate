#include <iostream>
using namespace std;
int main() 
{
  int row1, col1, row2, col2;
  cout << "Enter the number of rows and columns of the first matrix: ";
  cin >> row1 >> col1;
  cout << "Enter the number of rows and columns of the second matrix: ";
  cin >> row2 >> col2;
  
  if (row1 != row2) {
    cout << "The number of rows of the two matrices must be equal." << endl;
    cout << "The 2 matrix could not be horizontal added." << endl;
    return 0;
  }

  int matrix1[row1][col1], matrix2[row2][col2], concat[row1][col1 + col2];

  cout << "Enter the elements of the first matrix: " << endl;
  for (int i = 0; i < row1; i++) {
    for (int j = 0; j < col1; j++) {
      cout << "Enter the [" << i << " " << j << "] element matrix1: ";
      cin >> matrix1[i][j];
    }
  }

  cout << "Enter the elements of the second matrix: " << endl;
  for (int i = 0; i < row2; i++) {
    for (int j = 0; j < col2; j++) {
      cout << "Enter the [" << i << " " << j << "] element matrix2: ";
      cin >> matrix2[i][j];
    }
  }

  for (int i = 0; i < row1; i++) {
    for (int j = 0; j < col1 + col2; j++) {
      if (j < col1) {
        concat[i][j] = matrix1[i][j];
      } else {
        concat[i][j] = matrix2[i][j - col1];
      }
    }
  }

  cout << "The first matrix is: " << endl;
  for (int i = 0; i < row1; i++) {
    for (int j = 0; j < col1; j++) {
      cout << matrix1[i][j] << " ";
    }
    cout << endl;
  }

  cout << "The second matrix is: " << endl;
  for (int i = 0; i < row2; i++) {
    for (int j = 0; j < col2; j++) {
      cout << matrix2[i][j] << " ";
    }
    cout << endl;
  }

  cout << "Diplay the concatenated matrix: " << endl;
  for (int i = 0; i < row1; i++) {
    for (int j = 0; j < col1 + col2; j++) {
      cout << concat[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
