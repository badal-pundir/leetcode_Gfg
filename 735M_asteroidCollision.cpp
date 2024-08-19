#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for(size_t i = asteroids.size() - 1; i >= 0; i--) {
            int aster = asteroids[i];
            if(aster > 0){
                if(st.empty()){
                    st.push(aster);
                }

                else{
                    // while(true) {
                        int temp = st.top();
                        if(abs(temp) < abs(aster)) {
                            if(!st.empty()) 
                                st.pop();
                        }
                        else {
                            st.push(aster);
                        }
                    //  }
                }
            }
            else{
                st.push(aster);
            }
                // st.push(asteroids[i]);
        }

        stack<int> st2;
        while(!st.empty()){
            int temp = st.top();
            st.pop();
            st2.push(temp);
        }

        
        vector<int> ans;
        while(!st2.empty()) {
            int temp = st2.top();
            ans.push_back(temp);
            st2.pop();
        }

        return ans;
    }
};

int main() {
    Solution ob;
    vector<int> asteroids = {5, 10, -5};
    vector<int> ans = ob.asteroidCollision(asteroids);

    for(auto aster: ans) {
        cout<<aster<<" ";
    }
    return 0;
}