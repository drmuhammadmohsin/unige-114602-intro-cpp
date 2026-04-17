#include <iostream>
using namespace std;

// Function to fill the matrix
void fillMatrix(int m[][4], int rows)
{
    int cols = sizeof(m[0]) / sizeof(m[0][0]);

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> m[i][j];
        }
    }
}

// Function to print the matrix
void printMatrix(int m[][4], int rows)
{
    int cols = sizeof(m[0]) / sizeof(m[0][0]);

    cout << "\nMatrix:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

// Function to compute the sum of a specific row
int rowSum(int m[][4], int cols, int row)
{
    int sum = 0;

    for(int j = 0; j < cols; j++)
    {
        sum += m[row][j];
    }

    return sum;
}

// Function to find the maximum value in the matrix
int findMax(int m[][4], int rows, int cols)
{
    int maxVal = m[0][0];

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(m[i][j] > maxVal)
            {
                maxVal = m[i][j];
            }
        }
    }

    return maxVal;
}

int main()
{
    int rows = 3;
    int cols = 4;

    int matrix[3][4];

    // Fill the matrix
    fillMatrix(matrix, rows);

    // Print the matrix
    printMatrix(matrix, rows);

    // Compute row sums
    cout << "\nRow sums:\n";
    for(int i = 0; i < rows; i++)
    {
        cout << "Sum of row " << i << " = " << rowSum(matrix, cols, i) << endl;
    }

    // Find maximum value
    cout << "\nMaximum value in the matrix = " << findMax(matrix, rows, cols) << endl;

    return 0;
}