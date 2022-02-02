class Solution {
public:
    int distributeCandies(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int num : arr)
            mp[num]++;
        return min(arr.size()/2,mp.size());
    }
};