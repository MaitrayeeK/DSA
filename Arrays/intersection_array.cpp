#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, n2;

    cout << "Enter the number of elements for 1st array: ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter the elements(In sorted order): ";
    for(int i = 0; i < n; ++i) cin >> nums[i];

    cout << "Enter the number of elements for 2nd array: ";
    cin >> n2;
    vector<int> nums2(n2);

    cout << "Enter the elements for 2nd array(In sorted order): ";
    for(int i = 0; i < n2; ++i) cin >> nums2[i];

    vector<int> ans;
    int vis[n];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n2; j++){
            if(nums[i] == nums2[j] && vis[j] == NULL){
                ans.push_back(nums[i]);
                vis[j] = 1;
                break;
            }
            if(nums2[j]>nums[i]) break;
        }
    }

    for(auto i : ans) cout << i << " ";

    // Optimal solution, two pointers
    int i = 0;
    int j = 0;
    vector<int> ans;
    while(i<n && j<n2){
        if(nums[i] < nums2[j]){
            i++;
        }
        else if(nums2[j] < nums[i]){
            j++;
        }
        else{
            ans.push_back(nums[i]);
            i++;
            j++;
        }
    }

    for(auto i : ans) cout << i << " ";
    return 0;
}