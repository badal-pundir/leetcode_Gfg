#include<iostream>
using namespace std;

class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int ans = -1; 
	    int low = 0, high = n-1;
	    // int count = 0;
	    
	    while(low<=high) {

	        int mid = (low + high) / 2;
	       cout<<"\n"<< "mid: " << mid;
            // if(arr[mid] == x) {
	        //     ans = mid;
            //     high = mid;
	        // }
	        if(arr[mid] >= x) {
                ans = mid;
	            high = mid - 1;
	        }
	        else low = mid + 1;
	        }
	    
	    if(ans == -1) {
	        return 0;
	    }
	    int i = n - 1;
	    for(; i >= ans; i--) {
	        if(arr[i] == x){
	            break;
	        }
	    }
	    
	    return (i - ans + 1);
	    
	}
};

int main() {
    int n = 7;
    int arr[n] = {1, 1, 2, 2, 2, 2, 3};

    Solution ob;
    cout<< "\n Occurrance of 2: "<<ob.count(arr, n, 2);
    return 0;
}