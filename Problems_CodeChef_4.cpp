// Problem link: https://www.codechef.com/problems/DIVCOL

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

    ll test_cases;
    cin>>test_cases;
    // test_cases = 1;
    while(test_cases--)
    {
        int n;
        cin>>n;
        vector<int> answer(n+1,2);
        answer[0]=0;
        answer[1]=1;
        int z=3;
        for(int i=4;i<=n;i++)
        {
            if(!prime[i] && answer[i]==2)
            {
                answer[i]=z;
                for(int j=i+1;j<=n;j++)
                {
                    if(j%i != 0 && prime[j]==false)
                        answer[j]=z;
                }
                z++;
            }
        }
        cout<<*max_element(answer.begin(),answer.end())<<"\n";
        for(int i=1;i<=n;i++)
        {
            cout<<answer[i]<<" ";
        }
        cout<<"\n";
        
    }
    return 0;
}