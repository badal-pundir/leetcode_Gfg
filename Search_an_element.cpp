#include<iostream>
using namespace std;


class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       int s = 0;
       int e = N - 1;
       

       while(s<=e){
        int mid =  s + (e - s)/2;
        if(arr[mid] < K) {
            s = mid+1;
        }
        else if(arr[mid] > K) {
            e = mid - 1;
        }
        else return 1;
       }

       return 0;
       
    }
};
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    Solution ob;
    cout<< ob.searchInSorted(arr, 5, 9);

    return 0;
}