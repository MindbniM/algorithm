#include <iostream>
#include<string>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	long long n, t, x = 1;
	string str;
	cin >> n >> t;
	cin >> str;
	while (x < n) x <<= 1;
	t %= x;
	for (int i = 0; i < t; i++)
	{
		for (int j = n-1; j>0; j--)
		{
			str[j] = (str[j - 1] - '0') ^ (str[j] - '0') + '0';
		}
	}
	cout << str;
	return 0;
}
