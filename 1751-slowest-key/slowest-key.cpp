class Solution {
public:
    char slowestKey(vector<int>& time , string key) {
        pair <int,char> ans = {time[0] , key[0]};
        for(int i = 1 ; i < time.size() ; i++)
            ans = max(ans , {time[i] - time[i - 1] , key[i]});
        return ans.second;
    }
};