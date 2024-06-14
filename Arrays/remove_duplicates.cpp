#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array(In sorted manner): ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    // Brute force approch
    // set<int> st;
    // for(int i = 0; i<n-1; i++){
    //     st.insert(arr[i]);
    // }
    // int index = 0;
    // for(auto it:st){
    //     arr[index] = it;
    //     index++;
    // }

    // 2 pointer approch
    int p1 = 0;
    int p2 = p1+1;
    while(p2<=n){
        if(arr[p2]!=arr[p1]){
            arr[p1+1] = arr[p2];
            p1++;
        }
        p2++;
    }
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}