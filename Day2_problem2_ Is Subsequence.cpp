/*392. Is Subsequence
Easy

6154

346

Add to List

Share
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false
 

Constraints:

0 <= s.length <= 100
0 <= t.length <= 104
s and t consist only of lowercase English letters.*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        vector<int> index;
        int k,j;
        for(int i=0;i<s.size();i++){
            if(index.size()!=0)
                j=index.back()+1;
            else
                j=0;
            for(;j<t.size();j++){
                if(s[i]==t[j]){
                    index.push_back(j);
                    break;
                }
            }
         }
        if(index.size()==s.size())
            return true;
        return false;
    }
};
