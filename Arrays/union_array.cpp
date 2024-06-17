#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, n2;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter the elements: ";
    for(int i = 0; i < n; ++i) cin >> nums[i];

    cout << "Enter the number of elements for 2nd array: ";
    cin >> n2;
    vector<int> nums2(n2);

    cout << "Enter the elements for 2nd array: ";
    for(int i = 0; i < n2; ++i) cin >> nums2[i];

    set<int> st;
    for(int i = 0; i<n; i++){
        st.insert(nums[i]);
    }

    for(int i = 0; i<n2; i++){
        st.insert(nums2[i]);
    }

    for(auto i : st) cout << i << " ";
    cout << endl;
    // Optimal approch, two pointer (considering with different size of both array)

    int i = 0;
    int j = 0;
    vector<int> unionArr;

    while(i<n && j<n2){
        if(nums[i] <= nums2[j]){
            if(unionArr.size() == 0 || unionArr.back() != nums[i]){
                unionArr.push_back(nums[i]);
            }
            i++;
        }else {
            if(unionArr.size() == 0 || unionArr.back() != nums2[j]){
                unionArr.push_back(nums2[j]);
            }
            j++;
        }
    }
    while(j<n2){
        if(unionArr.size() == 0 || unionArr.back() != nums2[j]){
            unionArr.push_back(nums2[j]);
        }
        j++;
    }
    while(i<n){
        if(unionArr.size() == 0 || unionArr.back() != nums[i]){
            unionArr.push_back(nums[i]);
        }
        i++;
    }
    for(auto i : unionArr) cout << i << " ";
    return 0;
}