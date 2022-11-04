/*205. Isomorphic Strings
Easy

5263

989

Add to List

Share
Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

Example 1:

Input: s = "egg", t = "add"
Output: true
Example 2:

Input: s = "foo", t = "bar"
Output: false
Example 3:

Input: s = "paper", t = "title"
Output: true
 

Constraints:

1 <= s.length <= 5 * 104
t.length == s.length
s and t consist of any valid ascii character.*/


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
            return false;
        unordered_map<char,char> m;
        unordered_map<char,bool> copy;
        string iso="";
        vector<int> v;
        for(int i=0;i<s.size();i++){
            if(m.count(s[i])==0){
                m[s[i]]=t[i];
                v.push_back(i);
            }
        }
        for(int i=0;i<m.size();i++){
            if(copy.count(m[s[v[i]]])>0)
                return false;
            else
                copy[m[s[v[i]]]]=true;
        }
        
        for(int i=0;i<s.size();i++)
            iso+=m[s[i]];
        if(iso==t)
            return true;
        return false;
    }
};
