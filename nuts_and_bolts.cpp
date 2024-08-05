#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        // code here
        map<char, int> M;
        M['!'] = 0;
        M['#'] = 1;
        M['$'] = 2;
        M['%'] = 3;
        M['&'] = 4;
        M['*'] = 5;
        M['?'] = 6;
        M['@'] = 7;
        M['^'] = 8; 
        
        for(auto it: M){
            cout<<it.first<<" "<< it.second<<endl;
        }
        // int _nut[n];
        // for(int i = 0; i<n; i++) {
        //     _nut[i] = M[nuts[i]];
        // }
        cout<<"------------------";  
        map<int, int> _nut;
        for (int i = 0; i<n; i++) {
            _nut[i] = M[nuts[i]];
        }

        for(auto it: _nut){
            cout<<it.first<<" "<< it.second<<endl;
        }
        
        for(int i = 0; i<n; i++){
            nuts[i] = _nut[i];
        }

        for(int i = 0; i<n; i++) {
            cout<<nuts[i] << " ";
        }
        
        
    }
};

int main() {
    int n = 5;
    char nuts[n] = {'@', '%', '$', '#', '^'};
    char bolts[n] = {'%', '@', '#', '$', '^'};

    Solution ob;
    ob.matchPairs(n, nuts, bolts);
}