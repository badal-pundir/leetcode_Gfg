#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> H(0, n+1);
        for(int i = 0 ;i< n+1; i++) {
            cout<<H[i]<< " ";
        }
        vector<int> missing;

        for(int i = 0; i< n; i++) {
            H[nums[i]] = 1;
        }
        for(int i = 0 ;i< n+1; i++) {
            cout<<H[i]<< " ";
        }
        for(int i = 1; i<=n; i++) {
            if(H[i] == 0){
                missing.push_back(i);
            }
        }

        return missing;
    }
};


int main() {
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> ans;
    Solution ob;
    ans =  ob.findDisappearedNumbers(nums);
    int n = static_cast<int>(nums.size());
    for(int i = 0 ;i < n; i++){
        cout<<ans[i]<<" ";
    }
}