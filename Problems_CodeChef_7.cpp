//Problem link: https://www.codechef.com/problems/MEBA?tab=statement

/*========================================= 
░█████╗░███╗░░██╗░██████╗░█████╗░██████╗░
██╔══██╗████╗░██║██╔════╝██╔══██╗██╔══██╗
███████║██╔██╗██║██╚████░███████║██   ██║
██╔══██║██║╚████║██═══██╗██╔══██║██╔══██║
██║░░██║██║░╚███║███████║██║░░██║██████ ║
╚═╝░░╚═╝╚═╝░░╚══╝╚══════╝╚═╝░░╚═╝╚═╝░░╚═╝
==========================================*/

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

void primesieve(void)
{
    int n=200000;
    vector<bool> prime(n+1,true);
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                prime[j]=false;
            }
        }    
    }
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
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int m=*max_element(a.begin(),a.end());
        int mcount=count(a.begin(),a.end(),m);
        int zcount=count(a.begin(),a.end(),0);
        if(mcount+zcount==n)
            cout<<"YES\n";
        else if(mcount==n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}