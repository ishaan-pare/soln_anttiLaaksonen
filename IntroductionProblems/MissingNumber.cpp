// You are given all numbers between 1,2,…,n
//  except one. Your task is to find the missing number.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;scanf("%d", &n);
    int arr[n];memset(arr, -1, sizeof(arr));

    for (int i=0;i<n-1;i++) {
        int x;cin >> x;
        arr[x-1]=1;
    }
    int temp=-1;
    for (int i=0;i<n;i++) {
        if (arr[i]==-1) {
            temp = i+1;
            break;
        }
    }
    

    printf("%d\n", temp);
}