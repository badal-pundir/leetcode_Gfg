#include<iostream>
using namespace std;

int main() {
    int n = 4;
    for (int k = 1; k<=n; k++) {
        int i = n - k;

        for( ; i > 0; i--){
            cout<<" ";
        }

        for(int j = k; j > 0; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}