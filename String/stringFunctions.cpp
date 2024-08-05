#include<iostream>
using namespace std;

string add_string (string str1, string str2) {
    string result = str1 + str2;
    cout<<" &result: "<< &result<<endl;
    return result;
}

int main () {
    string str_result = add_string("hello", " world");
    cout<<"&str_result: "<< &str_result <<endl;
    cout<<"str_result: "<< str_result <<endl;

}