#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n-1);
    cout << "Enter the elements: ";
    for(int i = 0; i < n - 1; ++i) cin >> nums[i];
    
    // Brute force approach
    int result, flag = 0;
    for(int i = 1; i <= n; i++){
        flag = 0;
        for(int j = 0; j < n-1; j++){
            if(nums[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            result = i;
        }
    }

    // Better approach - Hashing
    vector<int> hash(n);
    for(int i = 0; i < n-1; i++){
        hash[nums[i]] = 1;
    }
    for(int i = 0; i < n; i++){
        if(hash[i] == 0){
            result = i;
        }
    }

    // Optimal approach - Sum and XOR
    // Sum
    int sum = n * (n + 1)/2, sum2 = 0;
    for(int i = 0; i < n-1; i++){
        sum2 += nums[i];
    }
    result = sum - sum2;

    // XOR
    int xor1 = n, xor2 = 0;
    for(int i = 1; i <= n; i++){
        xor1 = xor1 ^ i;
    }
    for(int i = 0; i < n-1; i++){
        xor2 = xor2^nums[i];
        // If we dont want to run 2 loop
        xor1 = xor1^(i+1);
    }
    result = xor1^xor2;

    cout << "Missing value " << result;
    return 0;
}