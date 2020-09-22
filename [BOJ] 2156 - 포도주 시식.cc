#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	int wine[10001] = { 0 };
	int dp[10001] = { 0 };
	int Max = 0;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
		cin >> wine[i];

	dp[1] = wine[1];
	dp[2] = wine[1] + wine[2];

	for (int i = 3; i <= n; i++) {
		dp[i] = max(dp[i - 3] + wine[i - 1] + wine[i], dp[i - 1]);
		dp[i] = max(dp[i], dp[i - 2] + wine[i]);
	}
	cout << dp[n];
}