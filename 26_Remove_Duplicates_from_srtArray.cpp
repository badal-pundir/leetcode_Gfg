#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        if(n==1) return 1;
        k = 1;
        for(int i = 1; i<n; i++) {
            if(nums[i] != nums[i-1]){
                nums[k] = nums[i];
                k++;
            }           
            
        }
        for(int i = 0; i<n; i++) cout<<nums[i]<<" ";
        return k;
    }
};

// removeDuplicate::removeDuplicate(/* args */)
// {
// }

// removeDuplicate::~removeDuplicate()
// {
// }

int main() {
    vector<int> nums = {-1, -1, -1, -2, 3, 3, 3, 4};
    Solution ob;
    cout<<"\n"<< ob.removeDuplicates(nums);
}