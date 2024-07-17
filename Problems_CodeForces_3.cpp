// Problem link: https://codeforces.com/contest/1988/problem/A

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<ll>
#define pii pair<ll, ll>
#define endl "\n"

const ll MAX = 1e9;
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
        string s;
        cin>>s;
        bool flag=true;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==0 && flag)
            {
                c--;
                flag=false;
            }
            if(s[i]==1)
            {
                c++;
                flag=true;
            }
        }
        if(c>0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}