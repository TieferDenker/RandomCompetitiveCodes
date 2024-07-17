// Problem link: https://www.codechef.com/problems/MAXCOIN

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

        int n,x;
        cin>>n>>x;
        int answer=0;
        for(int i=1;i<=n;i++)
        {
            if(i<=(n-x))
                answer -= pow(2,i);
            else
                answer += pow(2,i);
        }
        cout<<answer<<"\n";
    }
    return 0;
}