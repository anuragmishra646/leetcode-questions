class Solution {
public:
    static const int MOD = 1000000007;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {

        int n = s.size();

        vector<int> digit;
        vector<int> pos;

        // Store all non-zero digits and their positions
        for (int i = 0; i < n; i++) {
            if (s[i] != '0') {
                digit.push_back(s[i] - '0');
                pos.push_back(i);
            }
        }

        int m = digit.size();

        // powers of 10
        vector<long long> pow10(m + 1, 1);
        for (int i = 1; i <= m; i++)
            pow10[i] = (pow10[i - 1] * 10) % MOD;

        // Prefix concatenated number
        vector<long long> prefNum(m + 1, 0);

        // Prefix digit sum
        vector<int> prefSum(m + 1, 0);

        for (int i = 0; i < m; i++) {
            prefNum[i + 1] = (prefNum[i] * 10 + digit[i]) % MOD;
            prefSum[i + 1] = prefSum[i] + digit[i];
        }

        // beforeNZ[i] = non-zero digits before index i
        vector<int> beforeNZ(n);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            beforeNZ[i] = cnt;
            if (s[i] != '0')
                cnt++;
        }

        // nextNZ[i] = first non-zero digit index in compressed array
        vector<int> nextNZ(n, -1);
        int p = 0;

        for (int i = 0; i < n; i++) {
            while (p < m && pos[p] < i)
                p++;
            if (p < m)
                nextNZ[i] = p;
        }

        vector<int> ans;

        for (auto &q : queries) {

            int l = q[0];
            int r = q[1];

            int L = nextNZ[l];
            int R = beforeNZ[r] + (s[r] != '0') - 1;

            if (L == -1 || L > R) {
                ans.push_back(0);
                continue;
            }

            int len = R - L + 1;

            long long x =
                (prefNum[R + 1] -
                 (prefNum[L] * pow10[len]) % MOD +
                 MOD) % MOD;

            long long sum = prefSum[R + 1] - prefSum[L];

            ans.push_back((x * sum) % MOD);
        }

        return ans;
    }
};