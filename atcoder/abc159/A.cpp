#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(cin.failbit);

	int n,m; cin >> n >> m;

	cout << n * (n-1)/2 + m * (m-1)/2 << endl; // we only need to check whetther the numbers are both odd or both even -> also can expressed with the formula written before

}
 