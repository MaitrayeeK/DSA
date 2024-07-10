#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; ++i) cin >> nums[i];

    // Brute force
    int num, cnt, result;
    for(int i = 0; i < n; i++){
        num = nums[i];
        cnt = 0;
        for(int j = 0; j < n; j++){
            if(nums[j] == num){
                cnt++;
            }
        }
        if(cnt == 1) result = num;
    }

    // Better solution - hashing
    int maxi = nums[0];
    for(int i = 0; i < n; n++){
        maxi = max(maxi, nums[i]);
    }
    vector<int> hash(maxi+1);
    for(int i = 0; i < n; i++){
        hash[nums[i]]++;
    }

    for(int i = 0; i < maxi+1; i++){
        if(hash[i] == 1){
            result = i;
        }
    }

    // Optimal solution
    int xor1 = 0;
    for(int i = 0; i < n; i++){
        xor1 = xor1^nums[i];
    }
    result = xor1;

    cout << "Number that appear only once " << result;
    return 0;
}