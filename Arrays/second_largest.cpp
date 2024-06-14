#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array: ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    int largest = arr[0];
    int secondLargest = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }else if(arr[i] < largest && arr[i] > secondLargest) secondLargest = arr[i];
    }
    cout << "Second largest element in an array: " << secondLargest;
    return 0;
}