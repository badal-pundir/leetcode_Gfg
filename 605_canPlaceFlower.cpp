#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0)
            return true;
        if (flowerbed.size() == 1 && n >= 1)
            return false;
        int count = 0;
        for(size_t i = 0; i< flowerbed.size(); i++) {
            if (i == 0 && flowerbed[i] == 0) {
                if (flowerbed[i + 1] != 1) {
                    flowerbed[i] = 1;
                    count++;
                }
            }
              else if ((flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) && flowerbed[i] == 0) {
                flowerbed[i] = 1;
                count++;
            }
            if (count >= static_cast<int>(n))
                return true;

        }
        return false;
    }
};

int main() {
    int n  = 1;
    vector<int> flower = {0, 0, 1};
    Solution ob;
    cout<<ob.canPlaceFlowers(flower, n);
    return 0;
}