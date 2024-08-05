#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {

        int l = 0, h = nums.size() - 1;
        int min_ = nums[0];
        while(l <= h) {
            int mid = (l + h)/2;

            //if(nums[mid] > nums[l] && nums[mid] < nums[h]) return min_;
            // ^^^^^^^^^^^^^^^^^^^^ same as else contition
            min_ = min(min_, nums[mid]);

            if(nums[mid] >= nums[l] && nums[mid] >= nums[h]) {
                // min_ = min(min_, nums[mid]);
                l = mid + 1;
            }
            else{ // when num[mid] < nums[l] && num[mid] < nums[h]
                // min_ = min(min_, nums[mid]);
                h = mid - 1;
            }
        }

        return min_;
    }
};
int main() {
    vector<int> nums = {6,7,8,1,2,3,4,5};
    Solution ob;
    cout<<ob.findMin(nums);
    return 0;
}