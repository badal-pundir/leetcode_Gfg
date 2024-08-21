#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin>> n;
    int arr[n];
    for(int i = 0; i< n; i++) {
        cin>> arr[i];
    }

    // int count = 0;
    
    if(n == 1) {
        if(arr[0] == 1) cout<< 1;
        else cout<< 0;
        return 0;
    }

    long zero_count = 0;
    int i = 0;
    while(arr[i]!=1 && i<n){
        i++;
    }
    if(i == n-1) {
        cout<< 1;
        return 0;
    }
    if(i == n){
        cout<< 0;
        return 0;
    }
    long long pieces = 1;
    for(int j = i+1; j < n; j++) {
        if(arr[j] == 1){
            pieces *= (zero_count + 1);
            zero_count = 0;
        }
        else{
            zero_count++;
        }
    }
    // pieces *= (zero_count + 1);
    cout<< pieces;
    return 0;
}