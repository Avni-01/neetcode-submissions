#include <iostream>
#include <unordered_map>
#include <string.h>
using namespace std;

class Solution {
public:
    unordered_map<char,int> s1;
    unordered_map<char,int> s2;
   
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0; i<s.length(); i++){
            s1[s[i]]++;//s1 has frequency map of string s 
            s2[t[i]]++;//s2 has frequency map of string t
            
        }
        for(int j=0; j<s.length(); j++){
            if(s1[s[j]]!=s2[s[j]]){//checks is frequency stored in s1 (of s) is same as that of s2 (of t) but write s1[s[i]] and s2[s[i]] as we are checking frequency of same element in both s and t so s1[s[i]] and s2[t[i]] will be wrong cuz that means s1[a] and s2[b] if s=abb and t=bab
                return false;
            }
        }
        return true;    
           

    }
};   