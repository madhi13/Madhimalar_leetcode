#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Binary Search helper function
    bool bs(vector<int>& vec, int l, int h, int k) {
        while (l <= h) {
            int mid = (l + h) / 2;
            if (vec[mid] == k) 
                return true;
            else if (vec[mid] < k) 
                l = mid + 1;
            else 
                h = mid - 1;
        }
        return false;
    }

    // Main function
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());  
        int ans = original;
        
        while (true) {
            if (bs(nums, 0, nums.size() - 1, ans))
                ans = ans * 2;
            else
                return ans;
        }
    }
};

