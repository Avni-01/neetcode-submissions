#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int r=s.length()-1;
        while(l<r){ 
            while(l<r && !isalnum(s[l])){//if its not a number but a space or question mark etc that index is skipped 
                l++;
            }
            while(l<r && !isalnum(s[r])){
                r--;
            }
            if(tolower(s[l])!=tolower(s[r])){
                return false ;
            }
            l++;
            r--;
        
            
        }
        return true ;
        
        
        
    }
};
