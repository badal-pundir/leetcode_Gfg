#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        if(nums[0] > nums[1]) return 0; // return first element's index
        if(nums[n - 1] > nums[n - 2]) return n - 1;  // return last element's index
        /* first solution Brute
        for(int i = 1; i < n -1  ; i++){
            if(nums[i] > nums[i+1] && nums[i] < nums[i - 1]) {
                return i;
            }
        }
        */
       // second soloution Optimal by using BINARY SEARCH.
       int low = 1;
       int high = n - 2;
       while(low <= high) {
            int mid = (low + high) / 2;
            if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]){
                return mid;
            }
            else if(nums[mid] > nums[mid + 1]){
                high = mid - 1;
            }
            else low = mid + 1;
       }


        return -1;
    }
};

int main() {
    vector<int> nums = {11, 22, 33, 55 , 10};
    Solution ob;
    cout<<ob.findPeakElement(nums);
}