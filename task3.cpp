#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

// Function to input elements into a matrix
void inputMatrix(int A[MAX_SIZE][MAX_SIZE], int m, int n) {
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> A[i][j];
        }
    }
}

// Function to display elements of a matrix
void displayMatrix(const int A[MAX_SIZE][MAX_SIZE], int m, int n) {
    cout << "Matrix elements:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to calculate the sum of all elements of a matrix
int sumOfElements(const int A[MAX_SIZE][MAX_SIZE], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += A[i][j];
        }
    }
    return sum;
}

// Function to display row-wise sum of a matrix
void rowWiseSum(const int A[MAX_SIZE][MAX_SIZE], int m, int n) {
    cout << "Row-wise sum:\n";
    for (int i = 0; i < m; ++i) {
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            sum += A[i][j];
        }
        cout << "Row " << i + 1 << ": " << sum << endl;
    }
}

// Function to display column-wise sum of a matrix
void columnWiseSum(const int A[MAX_SIZE][MAX_SIZE], int m, int n) {
    cout << "Column-wise sum:\n";
    for (int j = 0; j < n; ++j) {
        int sum = 0;
        for (int i = 0; i < m; ++i) {
            sum += A[i][j];
        }
        cout << "Column " << j + 1 << ": " << sum << endl;
    }
}

// Function to create the transpose of a matrix
void transposeMatrix(const int A[MAX_SIZE][MAX_SIZE], int m, int n) {
    cout << "Transpose of the matrix:\n";
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    int matrix[MAX_SIZE][MAX_SIZE];

    cout << "Enter the number of rows (m): ";
    cin >> m;

    cout << "Enter the number of columns (n): ";
    cin >> n;

    if (m <= 0 || n <= 0 || m > MAX_SIZE || n > MAX_SIZE) {
        cout << "Invalid matrix size. Exiting program.\n";
        return 1;
    }

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Input elements into matrix\n";
        cout << "2. Display elements of matrix\n";
        cout << "3. Sum of all elements of matrix\n";
        cout << "4. Display row-wise sum of matrix\n";
        cout << "5. Display column-wise sum of matrix\n";
        cout << "6. Create transpose of matrix\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            inputMatrix(matrix, m, n);
            break;
        case 2:
            displayMatrix(matrix, m, n);
            break;
        case 3:
            cout << "Sum of all elements: " << sumOfElements(matrix, m, n) << endl;
            break;
        case 4:
            rowWiseSum(matrix, m, n);
            break;
        case 5:
            columnWiseSum(matrix, m, n);
            break;
        case 6:
            transposeMatrix(matrix, m, n);
            break;
        case 0:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
