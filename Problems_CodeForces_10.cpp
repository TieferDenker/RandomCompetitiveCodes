// Problem link: https://codeforces.com/contest/1993/problem/B

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
        vector<int> odd;
        vector<int> even;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                even.push_back(a[i]);
            else
                odd.push_back(a[i]);
        }
        if(even.size()==n || odd.size()==n)
        {
            cout<<0<<"\n";
        }
        else
        {
            long long int count=0;
            sort(even.begin(),even.end());
            long long int m = *max_element(odd.begin(),odd.end());
            for(int i=0;i<even.size();i++)
            {
                if(m>even[i])
                {
                    m=m+even[i];
                    count++;
                }
                else
                {
                    m=m+2*even[i];
                    count+=2;
                }
            }
            cout<<count<<"\n";
        }
    }
}