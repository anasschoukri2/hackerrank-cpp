#include<bits/stdc++.h>
#define foreach(v, i) for(int i=0;i<v.size();i++)
#define INF INT_MAX
#define io(v) cin>>v
#define FUNCTION(f,q) void f(int &a,int &b){a=(a)q(b)?a:b;}
#define toStr(s) #s
#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}
