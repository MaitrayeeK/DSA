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

    // Rotate by d place

    return 0;
}