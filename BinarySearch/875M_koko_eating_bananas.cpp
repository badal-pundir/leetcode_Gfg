#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution {
public:
    
    int calculateTotalHour(vector<int> &v, int hourly) {
        int totalH = 0;
        int n = v.size();
        for(int i = 0; i < n; i++) {
            totalH += ceil((double)v[i] / (double)hourly);
        }
        return totalH;
    }
    
    int findMaxi(vector<int> &v) {
        int maxi = -1;
        int n =  v.size();

        for(int i = 0; i < n; i++) {
            maxi = max(maxi, v[i]);
        }

        return maxi;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findMaxi(piles);
        cout<< high;
        while( low <= high) {
            int mid = (low + high)/2;
            int totalH = calculateTotalHour(piles, mid);
            if(totalH <= h) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }


};
int main() {
    vector<int> pile = {3, 6, 7, 11};
    int h = 8;
    Solution ob;
    cout<< ob.minEatingSpeed(pile, h);
}