#include <iostream>
#include <vector>
using namespace std;


    int peakIndexInMountainArray(vector<int>& A) {
        int st = 1, end = A.size() - 2;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1]) {
                return mid;
            }
            else if (A[mid - 1] < A[mid]) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return -1;
    }


int main() {
  

    // Example mountain array
    vector<int> A = {1, 3, 5, 7, 6, 4, 2};

    int peakIndex = peakIndexInMountainArray(A);

    if (peakIndex != -1) {
        cout << "Peak index: " << peakIndex << endl;
        cout << "Peak value: " << A[peakIndex] << endl;
    } else {
        cout << "No peak found!" << endl;
    }

    return 0;
}