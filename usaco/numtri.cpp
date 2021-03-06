/*
ID: fromod1
PROG: numtri
LANG: C++
*/

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
	
using namespace std;



int main() {
	ifstream fin;
	ofstream fout;
	fin.open("numtri.in");
	fout.open("numtri.out");

	ll r;
	fin >> r;

	vector<vector<ll> > tri(r, vector<ll>(r, 0));

	for(int i = 0; i < r; ++i) {
		for(int j = 0; j <= i; ++j) {
			fin >> tri[i][j];
		}
	}
	for(int i = r - 2; i >= 0; --i) {
		for(int j = 0; j <= i; ++j) {
			tri[i][j] = max(tri[i][j] + tri[i + 1][j], tri[i][j] + tri[i + 1][j + 1]);
		}
	}
	

	fout << tri[0][0] << endl;

	
	fout.close();
	fin.close();
	return 0;
}