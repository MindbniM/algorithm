#include <iostream>
#include<vector>
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int n1 = s1.size(), n2 = s2.size();
	vector<vector<int>> dp(n2 + 1, vector<int>(n1 + 1));
	for (int i = 1; i <= n2; i++)
	{
		for (int j = 1; j<=n1; j++)
		{
			dp[i][j] = dp[i - 1][j-1] + 1;
			if (j - 1 >= i) dp[i][j] = min(dp[i][j], dp[i][j - 1]);
			if (s1[j - 1] == s2[i - 1]) dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]);
			//cout << dp[i][j] << " ";
		}
		//cout << endl;
	}
	cout << dp[n2][n1];
	return 0;
}
