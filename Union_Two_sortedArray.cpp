#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    void findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector <int> union_;
        
        // int i = 0;
        int j = 0;
        int k = 0;
        
        while(j<n && k<m) {

            if (j > 0 && arr1[j] == arr1[j - 1]) {
                j++;
                continue;
            }

            if (k > 0 && arr2[k] == arr2[k - 1]) {
                k++;
                continue;
            }


            if(arr1[j] <arr2[k]) {
                
                union_.push_back(arr1[j]);
                j++;
                continue;
                
            }
            else if (arr1[j] > arr2[k]){
                
                union_.push_back(arr2[k]);
                k++;
                continue;
                
            }
            else {  // both are equal
                union_.push_back(arr1[j]);
                j++;
                k++;
            }
            // i++;
            
        }
        
        while(j<n) {
            if( j > 0 && arr1[j]!=arr1[j - 1] ) {
                union_.push_back(arr1[j]);
                }else if (j == 0) {
                union_.push_back(arr1[j]);
            }
            j++;
        }
        
        while(k<m){
            if( k > 0 && arr2[k]!=arr2[k - 1]) {
                union_.push_back(arr2[k]);
                }else if (k == 0) {
                union_.push_back(arr2[k]);
            }
            k++;
            }
        
        // int x = union_.size();
        for(int i = 0; i < union_.size(); i++){
            cout<<union_[i] << " ";
        }
        // return union_;
    }
};


int main() {
    int arr2[6] = {1, 1, 3, 5, 5, 7} ;
    int arr1[3] = {-3, -1, 1};

    Solution ob;

    // vector<int> res = ob.findUnion(arr1, arr2, 5, 5);
    
    ob.findUnion(arr1, arr2, 3, 6);
    // for(int i = 0; i < 5; i++){
    //     cout<<res[i] << " ";
    // }

}