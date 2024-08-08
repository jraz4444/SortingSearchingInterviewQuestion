/*
You are given two soryed arrays, A and B, where A has a large enough buffer at the end to hold B. 
This is an method to merge B into A in sorted order
*/  

#include <iostream>
using namespace std; 


void mergeArrays(int A[], int m, int B[], int n, int C[]) {
    int i = 0; // Index of A
    int j = 0; // Index of B
    int k = 0; // Index of C

    // Merge A and B into C
    while (i < m && j < n) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } 
        else 
        {
            C[k++] = B[j++];
        }
    }

    //remaining elements in A, copy them to C
    while (i < m) {
        C[k++] = A[i++];
    }

    //remaining elements in B, copy them to C
    while (j < n) {
        C[k++] = B[j++];
    }
}

int main() {
    int A[] = {1, 3, 5, 7, 9, 0, 0, 0}; 
    // Assuming A has enough space for B
    int B[] = {2, 4, 6};
    int m = 5; 
    // Number of elements in A
    int n = 3; 
    // Number of elements in B
    int C[m + n]; 
    // Merged array C
    mergeArrays(A, m, B, n, C);

    //print out the merge array for testing as well as execution
    cout << "Merged Array: ";
    for (int i = 0; i < m + n; ++i) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
