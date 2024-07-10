#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; ++i) cin >> nums[i];
    int maxi = 0, cnt = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 1){
            cnt++;
            maxi = max(maxi, cnt);
        }else {
            cnt = 0;
        }
    }
    cout << "Maximum number of consecutive one " << maxi;

    return 0;
}