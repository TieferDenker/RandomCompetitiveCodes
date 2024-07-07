#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<ll>
#define pii pair<ll, ll>
#define endl "\n"
 
const ll MAX = 1e9;
const ll INF = 1e9+7;
 
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
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}