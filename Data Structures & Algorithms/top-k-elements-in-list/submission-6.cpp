#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;


class Solution {
public:
    unordered_map<int,int> map1;
    vector<int> vec;
    static bool compare(pair<int,int> a, pair<int,int> b){
        return a.second>b.second;//.second accesses the values of the keys and the larger one is returned this is called comparator 
    }//A comparator is a function that tells sort() which element should come first.BY TRUE OR FALSE if right or wrong and according to that it sorts 
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            map1[nums[i]]++;
            
        }
        vector<pair<int,int>> v(map1.begin(),map1.end());
        sort(v.begin(),v.end(),compare);//sort(start,end,comparator)
        for(int j=0; j<k; j++){
            vec.push_back(v[j].first);//.first gives key of the values with highest freuquency
        }
        return vec;


    }
};
