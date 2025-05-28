class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        
        int total = accumulate(arr.begin(), arr.end(), 0);
        
        if (total % 3 != 0) return false;
        
        int sum1 = total / 3;
        int sum2 = sum1 * 2;
        
        int prefix = 0;
        bool foundFirst = false;
        
        for (int i = 0; i < arr.size() - 1; i++) {
            prefix += arr[i];
            if (prefix == sum1 && !foundFirst) {
                foundFirst = true;
            } else if (prefix == sum2 && foundFirst) {
                return true;
            }
        }
        
        return false;
    }
};