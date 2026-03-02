# include <bits/stdc++.h>
using namespace std; 
    int search(vector<int>& A, int tar) {
        int st = 0 ,end = A.size()-1;
        while(st<= end){
            int mid = st+(end - st)/2;
            if(A[mid] == tar){
                return mid;
            }
            if(A[st]<= A[mid]){
                if(A[st] <= tar && tar <= A[mid]){
                    end = mid-1;

                }
                else{
                    st = mid + 1;
                }

            }
            else{
                if(A[mid]<= tar && tar<= A[end]){
                    st = mid +1;
                }
                else{
                    end = mid-1;
                }
            }
        }
        return -1;
    }

    int main(){
    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements of rotated sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target value: ";
    cin >> target;


    int result = search(arr, target);

    if (result != -1)
        cout << "Target found at index: " << result << endl;
    else
        cout << "Target not found." << endl;

    return 0;
}