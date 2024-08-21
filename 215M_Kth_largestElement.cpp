#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // using  map
    //     map<int, int> mp;
    //     for(int  i = 0 ;i< nums.size() ; i++) {
    //         mp[nums[i]] += 1; 
    //     }
    //     for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
    //         k -= it -> second;
    //         if(k<=0) return it->first;
    // }

    vector<int> arr(k, INT_MIN);

        for(int i = 0; i < nums.size(); i++) {
            int j = k - 1;

            if(nums[i] > arr[j]) {
                while(j > 0 && nums[i] > arr[j - 1]) {
                    arr[j] = arr[j - 1];
                    j--;
                }
                arr[j] = nums[i];
            }
        }
    
        return arr[k - 1];
}
    /*
    for(int i = 0; i< static_cast<int> (nums.size()); i++) {
        int j = k - 1;
        for(auto i: arr)cout<<i<<" ";
        if(arr[0] < nums[i]) j = 0;
        else{
            while(nums[i] > arr[j] && j>0) {
            j --;
            }
        }
        for(int m = k - 1; m > j; m--) {
            arr[m] = arr[m - 1];
        }
        arr[j] = nums[i];
        // cout<<"\n"<< i<< "th itteration: nums["<<i<<"]:"<< nums[i]<<"\n";

        
    }
    // cout<<"\n";
    // for(auto i: arr)cout<<i<<" ";
    // cout<<endl;
    return arr[k - 1];
    }
    */
};
int main() {
    vector<int> nums = {3,2};
    int k = 2;
    Solution ob;
    cout<<ob.findKthLargest(nums, k);

    return 0;

}
