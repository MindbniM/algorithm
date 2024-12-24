#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	int n, m;
	cin >> n >> m;
	string s1, s2;
	cin >> s1 >> s2;
	sort(s2.begin(), s2.end());
	string ret;
	int i = 0, j = 0;
	while (i < n && j < m)
	{
		if (s1[i] <= s2[j])	ret += s1[i++];
		else ret += s2[j++];
	}
	while (i < n) ret += s1[i++];
	while (j < m) ret += s2[j++];
	cout << ret << endl;
}
