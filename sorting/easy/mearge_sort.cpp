#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int idx = m + n - 1, i = m - 1, j = n - 1;
        
        while (i >= 0 && j >= 0) {
            if (A[i] >= B[j]) {
                A[idx--] = A[i--];
            } else {
                A[idx--] = B[j--];
            }
        }

        while (j >= 0) {
            A[idx--] = B[j--];
        }
    }
};

int main() {
    Solution sol;

    vector<int> A = {1, 3, 5, 0, 0, 0}; // size = m + n
    vector<int> B = {2, 4, 6};

    int m = 3; // valid elements in A
    int n = 3; // elements in B

    sol.merge(A, m, B, n);

    cout << "Merged array: ";
    for (int x : A) {
        cout << x << " ";
    }

    return 0;
}