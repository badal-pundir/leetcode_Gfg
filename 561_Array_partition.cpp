#include<bits\stdc++.h>
using namespace std;
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max_sum = 0;
        int n = static_cast<int>(nums.size());
        for(auto i = 0; i < n; i+=2) {
            max_sum += nums[i]; 
        }
        
        return max_sum;
    }
};
int main() {
    vector<int> nums = {6,2,6,5,1,2};
    Solution ob;
    cout<<ob.arrayPairSum(nums);
    
}