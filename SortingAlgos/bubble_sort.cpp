#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i = n - 1; i >= 0; i--){
        int didSwaps = false;
        for(int j = 0; j <= i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didSwaps = true;
            }
        }
        if(!didSwaps) break;
        cout << "runs\n";
    }
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}

int main(){
    int n;
    cout << "Enter the number of elemnts: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array: ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    bubble_sort(arr, n);
    return 0;
}