// Problem link: https://www.naukri.com/code360/problems/reverse-only-letters_1235236?kunjiRedirection=true&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h> 
string reverseOnlyLetters(string & s) {
    // Write your code here.
    int i=0,j=s.size()-1;
    while(i<j)
    {
        int x = int(s[i]);
        int y = int(s[j]);
        if((x>=65 && x<=90)||(x>=97 && x<=122))
        {
            if((y>=65 && y<=90)||(y>=97 && y<=122))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else
            {
                j--;
            }
        }
        else
        {
            i++;
        }
    }
    return s;
}
