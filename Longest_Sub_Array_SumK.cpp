#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        // Complete the function
        // int i = 0;
        // int j = 0;
        // int sum = 0;
        // int len = 0;
        // // for(int i = 0; i < N; i++)
        // while (j < N)
        // {
        //     sum += A[i];
        //     cout << "\n i= " << i << " sum: " << sum;
        //     if (sum > K)
        //     {
        //         sum -= A[j];
        //         j++;
        //         if (i < N)
        //             i++;
        //         continue;
        //     }

        //     else if (sum == K)
        //     {
        //         len = max(len, i - j + 1);
        //         i++;
        //         continue;
        //     }

        //     else
        //     { // sum < K

        //         if (i != N - 1)
        //         {
        //             // i will stop at the last element of the array
        //             i++;
        //         }
        //         else
        //         {

        //             j++;
        //         }
        //     }
        // }

         // Complete the function
        int i = 0;  // left
        int j = 0;  // right
        long int sum = 0;
        int len = 0;
        while(j < N){
            if(j < N) {
                sum += A[j];
            }
            
            while(sum > K && i<=j){
                sum = sum - A[i];
                i++;
            }
            
            if(sum == K){
                len = max(len, j-i+1);
                
            }
            
            j++;
            
            
        }

        return len;
    }
};
int main()
{
    int A[17] = {-13, 0, 6, 15, 16, 2, 15, -12, 17, -16, 0, -3, 19, -3, 2, -9, -6};
    int N = 17;
    int K = 15;
    Solution ob;
    cout << endl
         << ob.lenOfLongSubarr(A, N, K);
}