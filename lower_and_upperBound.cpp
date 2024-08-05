#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 9};
    auto it = lower_bound(nums.begin(), nums.end(), 5);
    auto it2 = upper_bound(nums.begin(), nums.end(), 5);
    cout<< "Lower bound of 5 is: "<<(*it);
    cout<< "Upper bound of 5 is:" << (*it2);

    return 0;
}