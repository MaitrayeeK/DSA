#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array: ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    bool isSorted = true;
    for(int i = 0; i < n-1; i++){
        if(arr[i] <= arr[i+1]){}
        else{
            isSorted = false;
        }
    }
    cout << "Array is sorted or not: " << (isSorted ? "Yes" : "No");
    return 0;
}