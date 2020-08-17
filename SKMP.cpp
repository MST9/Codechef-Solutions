#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ff              first
#define ss              second
#define int             long long int
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define maxheap         priority_queue<int>
#define minheap         priority_queue<int,vi,greater<int> >
#define mod             1000000007
#define inf             1e18
#define f(i,n)          for(int i=0;i<n;i++)
#define w(x)            int x; cin>>x; while(x--)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zerobits(x)     __builtin_ctzll(x)
#define PI 3.1415926535
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;



int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	w(t)
	{
		string s, p;
		cin >> s >> p;
		int a[26] = {}, b[26] = {};
		f(i, s.length())
		{
			int z = s[i] - 'a';
			a[z]++;
		}
		f(i, p.length())
		{
			int z = p[i] - 'a';
			b[z]++;
		}
		int cmp = 0;
		char qq = p[0];
		for (int i = 1; i < p.length(); i++)
		{
			int f = p[i] - 'a';
			int g = p[0] - 'a';
			if (f < g)
			{
				cmp = 1;
				break;
			}
			else if (f > g)
			{
				break;
			}
		}
		string r = "";
		f(i, 26)
		{

			char c = i + 'a';
			if (c == p[0])
			{

				int u = a[i] - b[i];
				if (cmp == 0)
				{
					f(k, u)
					{
						r += c;
					}
					r += p;
				}
				else
				{
					r += p;
					f(k, u)
					{
						r += c;
					}

				}

			}
			else
			{
				int u = a[i] - b[i];
				//cout << u;
				f(k, u)
				{
					r += c;
				}
			}

		}
		cout << r << endl;
	}







}

