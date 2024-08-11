// Problem link: https://codeforces.com/contest/1999/problem/B

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
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        int first=0,sec=0,round=0;
        if(a1>b1)   first++;
        else if(a1<b1)  sec++;
        if(a2>b2)   first++;
        else if(a2<b2)  sec++;
        if(first>sec)
            round++;
        first=0,sec=0;
        if(a1>b2)   first++;
        else if(a1<b2)  sec++;
        if(a2>b1)   first++;
        else if(a2<b1)  sec++;
        if(first>sec)
            round++;
        cout<<2*round<<"\n";
    }
}