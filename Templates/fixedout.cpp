#include <bits/stdc++.h>
#define pub push_back
#define pob pop_back
typedef long long ll;
using namespace std;
#define debug() cerr
template<typename A, typename B> ostream& operator<<(ostream &cerr, pair<A, B> const &p) { 
	return cerr << "(" << p.first << ", " << p.second << ")"; 
}
template<typename A> ostream& operator<<(ostream &cerr, vector<A> const &v) {
	cerr << "["; for(unsigned ll int i = 0; i < v.size(); i++) {if (i) cerr << ", "; cerr << v[i];} return cerr << "]";
}
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
// debug & operator << (debug & dd, P p) { dd << "(" << p.x << ", " << p.y << ")"; return dd; }

//========================================================================



void solve_problem() {
	
}

int32_t main() {
	int T = 1;
	cin >> T;
	for (int i = 1; i <= T; ++i) {
		printf("Case #%d: ", i);
		solve_problem(); 
	}
	return 0;
}
