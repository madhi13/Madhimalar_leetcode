class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int d[101]{};                
        const int offset = 1950;
        for (auto& log : logs) {
            int a = log[0] - offset;
            int b = log[1] - offset;
            ++d[a];
            --d[b];
        }

        int s = 0, mx = 0;
        int year = 0;
        for (int i = 0; i < 101; ++i) {
            s += d[i];
            if (s > mx) {
                mx = s;
                year = i;
            }
        }

        return year + offset;
    }
};