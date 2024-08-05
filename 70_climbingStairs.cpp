#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int climbStairs(int n)
{
    int count = 0; // there is always one solution possible.
    int steps = 2; // initial step 2;
    int curr_ = 0;
    if (n == 1)
        return 1;
    while (steps <= n)
    {
        // curr_ += n - steps + 1;
        // if(steps == n) {
        //     count += 1;
        //     break;
        // }
        if (steps < n)
            curr_ = 1;
        count += (fact(n) / (fact(steps) * fact(n - steps)) + curr_);
        // count += (fact(curr_) / (fact(steps) * fact(n - steps)));
        steps += 2;
        curr_ = 0;
    }

    // if( n % 2 != 0 && n > 3) count++; // it will ocour when n is odd;
    return count;
}
int main()
{
    int n = 4;
    cout<< climbStairs(n);

    return 0 ;

}