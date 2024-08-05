#include<iostream>
#include<cmath>
using namespace std;

int main () {
        // Your code goes here 
        long double result;
        result = sqrt(30);

        // Find the nearest greater integer
        long long int nearestGreaterInteger = static_cast<int>(ceil(result));
        long long int nearestSmallestInteger = static_cast<int>(floor(result));
        
        cout<< nearestGreaterInteger<<endl;
        cout<< nearestSmallestInteger;
    }