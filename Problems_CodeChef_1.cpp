// Problem Link: https://www.codechef.com/START141C/problems/REDUARRAY

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define pii pair<ll, ll>
#define endl "\n"

const ll MAX = LLONG_MAX;
const ll INF = 1e9+7;

bool cmp(int x, int y) 
{ 
    if (x>y) 
        return true; 
    else  
        return false; 
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll test_cases;
    cin>>test_cases;
    // test_cases = 1;
    while(test_cases--)
    {
        int n;
        cin>>n;
        int x,maxx = -1;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
            maxx = max(maxx,x);
        }
        vector<ll> v(maxx+1,0);
        for(int i=0;i<n;i++)
        {
            v[a[i]]++;
        }
        ll mincost=MAX;
        for(int i=1;i<=maxx;i++)
        {
            mincost = min(mincost,(n-v[i])*i);
        }
        cout<<mincost<<"\n";
    }
    return 0;
}