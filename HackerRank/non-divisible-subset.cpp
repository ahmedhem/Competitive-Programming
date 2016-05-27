#include <iostream> 
#include <cstdio>
#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <bitset>
#include <numeric>
#include <iterator>
#include <algorithm>
#include <cmath>
#include <chrono>
#include <cassert>

using namespace std;
using ll = long long;
using ld = long double;
using ii = pair<ll, ll>;
using vi = vector<ll>;
using vb = vector<bool>;
using vvi = vector<vi>;
using vii = vector<ii>;
using vvii = vector<vii>;

const int INF = 2000000000;
const ll LLINF = 9000000000000000000;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, K;
	cin >> N >> K;
	vi A(K, 0LL);
	for (int i = 0; i < N; ++i) {
		int v;
		cin >> v;
		A[v%K]++;
	}
	
	ll ans = 0LL;
	for (int i = 0; i <= K - i; ++i)
		if (i != (K - i) % K)
			ans += max(A[i], A[K - i]);
		else	ans += min(A[i], 1LL);
	cout << ans << endl;
	
	return 0;
}