#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; ++i) cin >> nums[i];
    for(int i = 0; i < n; i++) cout << nums[i] << " ";

    int element;
    cout << "Enter element to know its position: ";
    cin >> element;
    int position = -1;
    for(int i = 0; i < n; i++){
        if(nums[i] == element){
            position = i;
        }
    }
    cout << "Position of the element is " << position;
    return 0;
}