#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int cnt[26];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		int len = (int)str.size();
		bool hash[26];
		fill(hash, hash + 26, false);
		for (int j = 0; j < len; j++)
			hash[str[j] - 'a'] = true;
		for (int j = 0; j < 26; j++)
			if (hash[j])
				cnt[j]++;
	}
	int ans = 0;
	for (int i = 0; i < 26; i++)
		if (cnt[i] == n)
			ans++;
	cout << ans << endl;
    return 0;
}

