#include<iostream>
#include<streambuf>
using namespace std;
int main() {
    string s1, s2;
    cin>> s1>> s2;

    int l1 = s1.length();
    int l2 = s2.length();

    if(l1 != l2) cout<< "NO";
    
    string temp = s1 + s1;

    if(temp.find(s2) != string::npos) {
        cout<< "YES";
    }
    else cout<< "NO";

    return 0;
}