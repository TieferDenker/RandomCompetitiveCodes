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
        vector<int> v(n); 
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int m = *max_element(v.begin(),v.end());
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(m==v[i])
                c++;
        }
        if(c%2==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        
    }
    return 0;
}