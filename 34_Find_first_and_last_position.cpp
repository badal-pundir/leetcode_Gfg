#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first_occr = -1;
        int last_occr = -1;
        int low = 0;
        int high = n - 1;
        int ans = -1;
        
        if(n == 0) return {-1, -1};
        // if(n == 1 && nums[0] != target) return {-1, -1};
        while(low <= high) {
            int mid = (low + high)/2;
            if(nums[mid] == target) {
                ans = mid;
                high = mid - 1;
            }
            else if(nums[mid] > target) {
                high = mid -1;
            }
            else low = mid + 1;
        }

        if (ans == -1) {
                return {-1, -1};
            }
        else first_occr = ans;
        
        for (int i = n - 1; i >= ans; i--) {
            if(nums[i] == target ){
                last_occr = i;
                break;
            }            
        }
        return {first_occr, last_occr};

    }
};

int main() {
    vector<int> nums = {};
    vector<int> ans;
    Solution ob;
    ans = ob.searchRange(nums, 6);

    for(auto it: ans) {
        cout<< it<<" ";
    }
    return 0;
}