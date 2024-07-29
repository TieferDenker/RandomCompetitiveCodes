// Problem link: https://codeforces.com/contest/1991/problem/A

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
        vector<int> b(n+1);
        vector<int> a(n+1);
        for(int i=1;i<n;i++)
        {
            cin>>b[i];
        }
        b[0]=b[n]=0;
        for(int i=1;i<=n;i++)
        {
            a[i]=b[i]|b[i-1];
        }
        bool flag=true;
        for(int i=1;i<n;i++)
        {
            if((a[i]&a[i+1])!=b[i])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<a[i]<<" ";
            }
        }
        else
        {
            cout<<-1;
        }
        cout<<"\n";
    }
}