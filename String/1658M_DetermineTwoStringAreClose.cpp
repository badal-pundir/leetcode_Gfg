#include<bits/stdc++.h>
using namespace std;
/*
According to the problem description, two strings are close if they meet the following two conditions simultaneously:

The strings word1 and word2 must contain the same types of letters.
The arrays obtained by sorting the counts of all characters in word1 and word2 must be the same.
Therefore, we can first use an array or hash table to count the occurrences of each letter in word1 and word2 respectively, and then compare whether they are the same. If they are not the same, return false early.

Otherwise, we sort the corresponding counts, and then compare whether the counts at the corresponding positions are the same. If they are not the same, return false.

At the end of the traversal, return true.

The time complexity is O(m + n + C * logC ), and the space complexity is 
. Here, m and n are the lengths of the strings word1 and word2 respectively, and C
 is the number of letter types. In this problem, C = 26.
.
*/
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int cnt1[26]{};
        int cnt2[26]{};
        for (char& c : word1) {
            ++cnt1[c - 'a'];
        }
        for (char& c : word2) {
            ++cnt2[c - 'a'];
        }
        for (int i = 0; i < 26; ++i) {
            if ((cnt1[i] == 0) != (cnt2[i] == 0)) {
                return false;
            }
        }
        sort(cnt1, cnt1 + 26);
        sort(cnt2, cnt2 + 26);
        return equal(cnt1, cnt1 + 26, cnt2);
    }
};

int main() {
    Solution ob;
    cout<<ob.closeStrings("abbcc", "abcc");
    return 0;
}