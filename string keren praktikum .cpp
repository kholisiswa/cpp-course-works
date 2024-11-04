#include <iostream>
#include <vector>

using namespace std;

int countSubsequences(const string& S, const string& T) {
    int m = T.length();
    int n = S.length();

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int j = 0; j <= n; ++j) {
        dp[0][j] = 1;
    }

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            dp[i][j] = dp[i][j - 1] + (T[i - 1] == S[j - 1] ? dp[i - 1][j - 1] : 0);
        }
    }

    return dp[m][n];
}

int main() {
    string S, T;
    getline(cin, S);
    getline(cin, T);

    int result = countSubsequences(S, T);

    cout << result << endl;

    // Output repeated strings
    for (int i = 0; i < result; ++i) {
        cout << T << endl;
    }

    return 0;
}
