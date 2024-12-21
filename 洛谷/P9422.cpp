#include <iostream>
#include<vector>
using namespace std;
using ll = long long;
int main()
{
	ios::sync_with_stdio(0);
	int n, m;
	cin >> n >> m;
	vector<ll> arr1(n);
	vector<ll> arr2(m);
	for (int i = 0; i < n; i++)	cin >> arr1[i];
	for (int i = 0; i < m; i++) cin >> arr2[i];
	int i = 0, j = 0;
	ll n1 = arr1[0], n2 = arr2[0];
	int ret = 0;
	while (i < n && j < m)
	{
		if (n1 > n2)
		{
			j++;
			if (j < m)
			{
				n2 += arr2[j];
				ret++;
			}
		}
		if (n1 < n2)
		{
			i++;
			if (i < n)
			{
				n1 += arr1[i];
				ret++;
			}
		}
		else
		{
			i++, j++;
			if (i < n && j < m)
			{
				n1 = arr1[i], n2 = arr2[j];
			}
		}
	}
	cout << ret;
	return 0;
}
