class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> mp;
        int ans=0;
        for(int x:nums3){
            for(int y:nums4)
                mp[x+y]++;
        }
        for(int x:nums1){
            for(int y:nums2){
                if(mp.find(-(x+y))!=mp.end())
                    ans+=mp[-(x+y)];
            }
        }
        return ans;
    }
};