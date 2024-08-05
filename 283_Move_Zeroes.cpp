#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i=0; // zero yet to found.

        // for(int j = 0; j<n; j++){
        //     if(nums[j] == 0){
        //         i = j;
        //         break;
        //     }
        // }
        if(i == n-1) return;
        for(int j = 0; j< n; j++){
            if(nums[j] && j>i && nums[i] == 0){
                swap(nums[j], nums[i]);
                i++;
            }
            if(nums[j] == 0 && nums[i] != 0){
                i = j;
            }
        }
        
        
        for(int i = 0; i<n; i++) cout<<nums[i]<<" ";
        
    }
};

int main() {
    vector<int> nums= {0, 0, 2, 0, 4, 0};
    Solution ob;
    ob.moveZeroes(nums);
    return 0;
}