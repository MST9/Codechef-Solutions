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
#define mod1			998244353
#define inf             1e18
#define f(i,n)          for(int i=0;i<n;i++)
#define w(x)            int x; cin>>x; while(x--)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zerobits(x)     __builtin_ctzll(x)
#define PI              3.1415926535
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
		int n;
		cin >> n;
		int a[n];
		f(i, n)
		{
			cin >> a[i];
		}

		sort(a, a + n);

		int sum = 0;
		f(i, n - 1)
		{
			sum += a[i];
		}
		if (a[n - 1] >= sum)
		{
			cout << a[n - 1] << endl;
		}
		else
		{
			int ans = 0;

			if (n == 3)
			{
				ans += a[1];
				ans += a[0];


			}
			else if (n == 4)
			{
				if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3])
				{
					ans = 2 * a[0];
				}
				else
				{
					ans += a[2];
					if (a[3] - a[2] > a[1])
					{
						ans += a[1];
						ans += a[0];
					}
					else
					{
						ans += a[1];
						int g = a[1] + a[2] - a[3];
						if (g < a[0])
						{
							ans += a[0] - g;
						}

					}

				}
			}

			cout << ans << endl;



		}





	}



}





