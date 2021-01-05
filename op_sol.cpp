#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int a, b, x, y;
	cin >> a >> b >> x >> y;	
	cout << max(max(x, (a-1-x))*b, a*max(y, (b-1-y))) << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
