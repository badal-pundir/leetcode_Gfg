#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1 = "Badal";
    string s2 = "Pundir";
    // using + operator
    string result = s1 + " " + s2;
    cout<<"Using '+' Operator: "<< result;
    // using append() function.
    string result2 = s1.append(" " + s2);
    cout<<"\nUsing append() function: "<< result2;
}