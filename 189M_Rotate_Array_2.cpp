#include<iostream>
#include<vector>
using namespace std;
    
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> tem;
        int n = nums.size();

        for( int i = 0; i< k; i++) {
            tem.push_back(nums[i]);
        }

        int n2 = tem.size();

        for(int i = 0; i<n2; i++) 
            cout<<tem[i]<<" ";
        cout<<"\n";
        int j = 0;

        for(int i = k+1; i<n; i++){
            nums[j] = nums[i];
            j++;
        }
        j = 0;
        for(int i = n-k; i<n; i++) {
            nums[i] = tem[j];
        }
        for(int i = 0; i<n; i++) cout<<nums[i]<<" ";
        }
    
};




int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int k = 3;
    Solution ob;
    ob.rotate(nums, k);
    return 0;
}
