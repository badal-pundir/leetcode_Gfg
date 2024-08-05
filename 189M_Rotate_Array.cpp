#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int current_num;
        int start = 0;
        // int flag = 1; 
        int i = 0;
        int count = 0;
        do{
            int pos = (i + k) % n;
            current_num = nums[pos];
            nums[pos] = nums[i];
            i = pos;   
            count++;  
            if(i == start) {
                i++;     
                start = i;
            }  
        }while (count < n);
        // nums[n] = current_num;
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