#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];

        map<int, int> M;
        int min_ = nums[0];
        int max_ = nums[0];
        
        for (int i = 0; i < n; i++) {            
            min_ = min(nums[i], min_);
            max_ = max(nums[i], max_);
        }
        //assingning each value in map zero
        for (int i = min_; i <=max_; i++) {
            M[i] = 0;
        }
        // if the number is present in the nums then increase the correspoinding value in map
        for (int i = 0; i < n; i++) {
            M[i] += 1;
        }

        // finding the key having value 1 i.e appears only one time.
        for (auto it : M) {
            if (it.second == 1)
                return it.first;
        }          

        return 0;
    }
};


int  main() {
    vector<int> nums = {2, 2, 1};
    Solution ob;
    cout<< ob.singleNumber(nums);
}