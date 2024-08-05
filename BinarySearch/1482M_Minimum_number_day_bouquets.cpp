#include <iostream>
#include <vector>
#include <climits>
#include <limits>
using namespace std;

class Solution
{
public:
    int noOfBouquets(vector<int> &v, int m, int k, int mid)
    {
        int bouquets = 0;
        int j = 0;
        int n = v.size();


        for (int i = 0; i < n; i++)
        {
            if (v[i] <= mid)
            {
                j++;
            }
            else
            {
                j = 0;
            }
            if (j == k)
            {
                bouquets++;
                j = 0;
            }
        }

        return bouquets >= m;
    }
    int minDays(vector<int> &bloomDay, int m, int k)
    {
        /*
          int n_bloom = 0, flower_count = 0, bouquet_count = 0, n_days = 0;
          int n = bloomDay.size();
          while (n_bloom < n) {
              n_days++;
              for (int i = 0; i < n; i++) {
                  if (bloomDay[i] != 0) {
                      bloomDay[i] -= 1;

                      if (bloomDay[i] == 0) {
                          n_bloom++;
                      }
                  }
                  bouquet_count = 0;
                  flower_count = 0;
                  for (int i = 0; i < n; i++) {
                      if (bloomDay[i] == 0) {
                          flower_count++;
                          if (flower_count == k) {
                              bouquet_count++;
                              flower_count = 0;

                              if (bouquet_count == m)
                                  return n_days;
                          }
                      }
                      else {
                          flower_count = 0;
                      }
                  }
              }

          }
          return -1;
          */
        //    better solution

        int n = bloomDay.size();
        int l = INT_MAX;
        int h = INT_MIN;
        // <limits>, <algorithm>
        // int min = std::numeric_limits<int>::min();
        // int max = std::numeric_limits<int>::max();

        if( m * k > n) return -1;

        for (int i = 0; i < n; i++)
        {
            l = min(l, bloomDay[i]);
            h = max(h, bloomDay[i]);
        }

        while (l <= h)
        {
            int mid = (l + h) / 2;
            bool bouquets = noOfBouquets(bloomDay, m, k, mid);
            if(bouquets) {
                h = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return l;
    }
};
int main()
{
    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3;
    int k = 1;
    Solution ob;
    cout << ob.minDays(bloomDay, m, k);
}