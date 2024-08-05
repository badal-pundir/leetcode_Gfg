#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        // int flag = 0;
        size_t i = 0;
        size_t j = 0;
        string prefix = "";
        // cout<< arr[0].length();
        while(i < arr[0].length() && j < arr[1].length()){
            if(arr[0][i] == arr[1][j]) {
                prefix += arr[0][i];
            }
            else break;
            i++;
            j++;
        }
        // cout<< prefix;
        if(prefix.length() == 0) {
            return "-1";
        }
        for( size_t i = 2; i< arr.size(); i++) {
            string tem = "";
            size_t p = 0;
            size_t w = 0;
            while(p < prefix.length() && w < arr[i].length()) {
                if(prefix[p] == arr[i][w]) {
                    tem += prefix[p];
                }
                else break;
                p++;
                w++;
            }
            prefix = tem;
            if(prefix.length() == 0) return "-1";
        }
        
        return prefix;
        
    }
};
int  main() {
    vector<string> arr = {"geeksforgeeks", "tgeeks", "geek", "geezer"};
    Solution ob;
    cout<< ob.longestCommonPrefix(arr);

    return 0;
}