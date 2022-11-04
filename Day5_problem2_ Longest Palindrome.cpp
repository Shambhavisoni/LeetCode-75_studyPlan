/*409. Longest Palindrome
Easy

3876

224

Add to List

Share
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

 

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
Example 2:

Input: s = "a"
Output: 1
Explanation: The longest palindrome that can be built is "a", whose length is 1.
 

Constraints:

1 <= s.length <= 2000
s consists of lowercase and/or uppercase English letters only.*/


class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++){
            if(m.count(s[i])==0)
                m[s[i]]=1;
            else
                m[s[i]]++;
        }
        unordered_map<char,int>::iterator it=m.begin();
        int c=0;
        bool c_one=false;
        while(it!=m.end()){
            if(it->second%2==0)
                c+=it->second;
            if(it->second%2!=0 && it->second!=1)
                c+=(it->second)-1;
            if(it->second%2!=0)
                c_one=true;
            it++;
        }
        if(c_one)
            c++;
        return c;
    }
};
