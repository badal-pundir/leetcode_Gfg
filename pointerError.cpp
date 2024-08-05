#include <stdio.h>
#include <string>
using namespace std;
int main() {
    int x = 10;
    int &ref = x;
    ref++;
    cout<< x ;
    return 0;
}