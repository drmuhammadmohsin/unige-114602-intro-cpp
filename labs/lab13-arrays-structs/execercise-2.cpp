#include <iostream>
using namespace std;

int main() {
    int m, n, p;

    // Input dimensions
    cout << "Enter rows and columns of Matrix A (m n): ";
    cin >> m >> n;

    cout << "Enter columns of Matrix B (p): ";
    cin >> p;

    // Declare matrices
    int A[m][n], B[n][p], C[m][p];

    // Input Matrix A
    cout << "\nEnter elements of Matrix A:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Input Matrix B
    cout << "\nEnter elements of Matrix B:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }

    // Initialize Matrix C
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Matrix A
    cout << "\nMatrix A:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    // Print Matrix B
    cout << "\nMatrix B:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    // Print Matrix C
    cout << "\nProduct Matrix C (A x B):\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}