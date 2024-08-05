#include<iostream>
#include<vector>
using namespace std;

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        int max_ind = 0;
        vector<int> leader;
        for(int i = 0;i < n; i++) {
            if(a[i] > a[max_ind]){
                max_ind = i;
            }
        }
        leader.push_back(a[max_ind]);

        int k = n-1;
        if(max_ind != k){
            leader.insert(leader.begin()+1, a[n-1]);
        }
        
        for(int i = n-2; i>max_ind; i--) {
            if(a[i] >= a[k]){
                k = i;
                leader.insert(leader.begin()+1, a[k]);
            }
        }
        
        return leader;
    }
};

int main() {
    int n = 1;
    int nums[n] = {1};//10, 4, 2, 4, 1};

    Solution ob;
    vector<int> res = ob.leaders(nums, n);

    for(auto i: res) {
        cout<<" "<< i;
    }
    return 0;
}