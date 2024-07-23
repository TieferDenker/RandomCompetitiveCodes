// Problem link: https://codeforces.com/contest/1995/problem/B1

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
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            if(a[0]<=m)
                cout<<a[0]<<"\n";
            else
                cout<<0<<"\n";
        }
        else
        {
            sort(a.begin(),a.end());
            if(a[n-1]<=m)
            {
                int petals=0,i=n-1,j;
                while(1)
                {
                    if(a[i]==a[n-1])
                    {
                        m-=a[i];
                        if(m>=0)
                        {
                            petals+=a[i];
                            i--;
                        }
                        else
                        {
                            cout<<petals<<"\n";
                            break;
                        }
                        j=i;
                    }
                    else
                    {
                        if(a[j]==a[i])
                        {
                            m-=a[j];
                            if(m>=0)
                            {
                                petals+=a[j];
                                j--;
                            }
                            else
                            {
                                cout<<petals<<"\n";
                                break;
                            }
                        }
                        else
                        {
                            cout<<petals<<"\n";
                            break;
                        }
                    }
                }
            }
            else
            {
                int index;
                for(int i=0;i<n;i++)
                {
                    if(a[i]<=m)
                    {
                        index = i;
                    }
                }

                int petals=0,i=index,j;
                while(1)
                {
                    if(a[i]==a[index])
                    {
                        m-=a[i];
                        if(m>=0)
                        {
                            petals+=a[i];
                            i--;
                        }
                        else
                        {
                            cout<<petals<<"\n";
                            break;
                        }
                        j=i;
                    }
                    else
                    {
                        if(a[j]==a[i])
                        {
                            m-=a[j];
                            if(m>=0)
                            {
                                petals+=a[j];
                                j--;
                            }
                            else
                            {
                                cout<<petals<<"\n";
                                break;
                            }
                        }
                        else
                        {
                            cout<<petals<<"\n";
                            break;
                        }
                    }
                }
            }

        }
        
        // distance(a.begin(),max_element(a.begin(), a.end()));
        
    }
    return 0;
}