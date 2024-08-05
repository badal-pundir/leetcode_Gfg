#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    void reverse(vector<int>& arr, int start, int end) {
        while(start <= end) {
            int tem = arr[start];
            arr[start] = arr[end];
            arr[end] = tem;
            start ++;
            end --;
        }
        cout<<"\n";
        for(auto it: arr) {
            cout<< it << " ";
        }
    }
    int search(vector<int>& arr, int target) {
        int k = 0;
        int n = arr.size();

        for(int i = 1; i<n ; i++) {
            if(arr[i] < arr[i - 1]){
                k =  n - i;
                break;
            }
        }
        cout<<endl;
        cout<< k <<endl;        
        reverse(arr, 0, k);
        cout<<endl;  
        reverse(arr, k + 1, n-1);
        cout<<endl;  
        reverse(arr, 0, n-1);
        cout<<endl;  
        cout<<"\n";
        for(auto it: arr) {
            cout<< it << " ";
        }
        /*
        // Binary Search
        int low = 0;
        int high = n - 1;
        int ans = -1;
        
        while(low<=high) {

	        int mid = (low + high) / 2;
	        if(arr[mid] >= target) {
                ans = mid;
	            high = mid - 1;
	        }
	        else low = mid + 1;
	    }

        if(ans == -1) {
	        return -1;
	    }
        return ans;
        */
    }
};
int main() {
    vector<int> arr = {4,5,6,7,0,1,2};
    Solution ob;
     for(auto it: arr) {
            cout<< it << " ";
        }
    cout<< ob.search(arr, 0);
    return 0;
}