#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& nums, int n) {
        // int n = 4;
        vector<int> hashh(n + 1, 0); // n =  size of (nums + 1)
        
        // for(int i = 0; i<=n; i++){
        //     hashh[i] = 0;      
        // }
        for(int i = 0; i<n ; i++){
            hashh[nums[i]] = 1;      
        }
        int i;
        for(i = 0; i<=n; i++) {
            if(hashh[i] == 0){ 
                return i;
            }
        }
        return -1;
    //     for (int i = 1; i <= N; i++) {

    //     // flag variable to check
    //     //if an element exists
    //     int flag = 0;

    //     //Search the element using linear search:
    //     for (int j = 0; j <= N - 1; j++) {
    //         if (nums[j] == i) {

    //             // i is present in the array:
    //             flag = 1;
    //             break;
    //         }
    //     }

    //     // check if the element is missing
    //     //i.e flag == 0:

    //     if (flag == 0) return i;
    // }

    // // The following line will never execute.
    // // It is just to avoid warnings.
    // return -1;
    // }
    }
};


int main() {
    vector<int> nums = {1,2, 3, 0};
    Solution ob;
    int n = nums.size();
    cout<< ob.missingNumber(nums, n);
}