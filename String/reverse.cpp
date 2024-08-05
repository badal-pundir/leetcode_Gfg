#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void leftrotate(string &s, int d) {
    reverse(s.begin(), s.begin() + d);
    reverse(s.begin() + d, s.end());
    reverse(s.begin(), s.end());
} // O(n)

void rightrotate(string &s, int d) {
    leftrotate(s, s.length() - d);
}
int main() {
    string str1 = "GeeksforGeeks";
    leftrotate(str1, 2);
    cout << "left rotate: " <<str1 << endl;
    rightrotate(str1, 2);
    cout << "right rotate: " <<str1;
}