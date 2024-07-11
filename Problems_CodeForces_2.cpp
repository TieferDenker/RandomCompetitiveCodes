// Problem link: https://codeforces.com/contest/1992/problem/B

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
        // string s;
        // getline(cin,s);
        // istringstream is(s);
        // vi v((istream_iterator<int>(is) ),istream_iterator<int>());

        int n,k;
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<k;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        if(k==1)
        {
            cout<<0<<"\n";
        }
        else
        {
            int count1=0,count2=0;
            for(int i=0;i<k-1;i++)
            {
                if(v[i]==1)
                    count1++;
                else
                {
                    count1+=v[i];
                    count2+=v[i]-1;
                }
            }
            cout<<count1+count2<<"\n";
        }
    }
    return 0;
}