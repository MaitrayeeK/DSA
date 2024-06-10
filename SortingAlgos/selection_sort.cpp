#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i = 0; i<=n-2; i++){
        int mini = i;
        for(int j = i; j<=n-1; j++){
            if(arr[j]<arr[mini]) mini = j;
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    selection_sort(arr, n);
    return 0;
}

/* Algorithm steps

for example array [9, 5, 7, 3, 6, 1]

1. select the minimum from the array(1) and swap with the first element(9).
--> now array is [1, 5, 7, 3, 6, 9]

Now, first element is sorted so,

2. select the minimum(3) from remaining array([5, 7, 3, 6, 9]) and swap with the first element(5).
--> now array is [1, 3, 7, 5, 6, 9]

Now, first 2 elements is sorted so,

3.select the minimum(5) from remaining array([7, 5, 6, 9]) and swap with the first element(7).
--> now array is [1, 3, 5, 7, 6, 9]

Now, first 3 elements is sorted so,

4.select the minimum(6) from remaining array([7, 6, 9]) and swap with the first element(7).
--> now array is [1, 3, 5, 6, 7, 9]

Now, first 4 elements is sorted so,

5.select the minimum(7) from remaining array([7, 9]) and swap with the first element(7).
--> now array is [1, 3, 5, 6, 7, 9]

Now, array is sorted.

Time complexity - O(n^2)
*/