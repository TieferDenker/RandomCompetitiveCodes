//Problem link: https://www.codechef.com/problems/BUDGET25?tab=statement

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
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        int summ=0,index=n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=x)
                summ+=a[i]-x;
        }
        sort(a.begin(),a.end());
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]<x)
            {
                if(x-a[i]<=summ)
                {
                    summ=summ-(x-a[i]);
                    index=i;
                }
            }
            else
            {
                index=i;
            }
        }
        cout<<n-index<<"\n";
    }
    return 0;
}