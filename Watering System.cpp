#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair <ll, ll> pll;

const int Max = 2e6 + 10;
const int Mod = 1e9 + 7;
const ll Inf = 1LL << 62;

ll ar[Max];
ll br[Max];
ll cnt[Max];

int main() {
	#ifdef Mr_Emrul
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif ///Mr_Emrul

	//ios_base::sync_with_stdio(false);
	//cin.tie(0);

	ll n, a, b;

	while( cin >> n >> a >> b ) {
		multiset <ll> st;
		for( int i=1; i<=n; i++ ) {
			cin >> ar[i];
			br[i] = br[i-1] + ar[i];
			cnt[ar[i]]++;
			st.insert( -ar[i] );
		}
		ll mn = Inf;
		ll lagbena = 0;
		//for( int i=1; i<=n; i++ ) {
			ll cur = br[n];// - br[i-1];
			double tmp = (ar[1] * a) / (double) cur;
			if( tmp >= b ) {
				mn = min(mn, lagbena);
				//break;
			}
			ll sum = 0;
			st.erase( st.find( -ar[1] ));
			for( ll x : st ) {
				cur += x;
				double tmp = (ar[1] * a) / (double) cur;
				sum++;
				if( tmp >= b ) {
					mn = min( mn, lagbena + sum );
					break;
				}
			}
			//lagbena++;
		//}
		cout << mn << endl;
		cerr << "--------------------" << endl;
	}
	return 0;
}
