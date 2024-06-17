#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    // Rotated by 1 place
    int temp = arr[0];
    for(int i = 0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    for(int i = 0; i < n; i++) cout << arr[i] << " ";

    // Rotate by k place - 2 approches

    int k = k % n;
    if(k==0) return;

    // int temp[k];
    // for(int i = 0; i < k; i++) temp[i] = arr[n - k + i];
    // for(int i = 0; i < n; i++) cout << arr[i];
    // for(int i = n - k - 1; i >= 0; i--) arr[(i + k)] = arr[i];
    // for(int i = 0; i < k; i++) arr[i] = temp[i];

    reverse(arr[0], arr[n-1]);
    reverse(arr[0], arr[0 + k]);
    reverse(arr[0 + k], arr[n-1]);

    return 0;
}