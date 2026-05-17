#include <iostream>
#include <string.h>
using namespace std;

class Solution {
public:
    int count =0;
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        for (int i=0; i<s.length(); i++){
            for(int j=0; j<s.length(); j++){
                if (s[i]==t[j]){
                    count++;//counted once but for same letter multiple times it checks the same letter so change it once its found 
                    t[j]='#';
                    break;
                }
            }
        }
        if(count==s.length()){
            return true;
        }
        else{
            return false;
        }

        
    }
};
