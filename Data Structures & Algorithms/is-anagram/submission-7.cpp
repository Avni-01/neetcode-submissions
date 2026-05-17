#include <iostream>
#include <string.h>
using namespace std;

class Solution {
public:
    int flag =0;
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for (int i=0; i<s.length(); i++){
            if (s[i]==t[i]){
                flag=1;
            }
            else{
                flag=0;
                return false;
            } 
                   
        }
        if(flag==1){
            return true;
        }           
    }
};
