// Problem link: https://www.naukri.com/code360/problems/flip-given-bits_14909571?challengeSlug=7-day-beginners-challenge-7&interviewProblemRedirection=true&count=25&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=SUBMISSION&page=1

#include <bits/stdc++.h> 
int flipSomeBits(int num, vector<int> &arr, int n)
{
    // Write your code here.
    int i=1,ans=0;
    vector<int> nn(33,0);

    while(num>0)
    {
        int x=num%2;
        nn[i]=x;
        num=num/2;
        i++;
    }
    for(int j=0;j<n;j++)
    {
        nn[arr[j]]=1-nn[arr[j]];
    }
    for(int j=1;j<=32;j++)
    {
        ans=ans+nn[j]*pow(2,j-1);
    }
    return ans;
}
