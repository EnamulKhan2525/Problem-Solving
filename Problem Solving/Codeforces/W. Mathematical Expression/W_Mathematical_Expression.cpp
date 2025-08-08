#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    char s,q;
    cin>>a>>s>>b>>q>>t;
    if (s=='+')
    {
        if (a + b == t)
        {
            cout<<"Yes";
        }
        else
        {
            int at=a+b;
            cout<<at;
        }
        
    }
    else if (s == '*')
    {
         if (a * b == t)
        {
            cout<<"Yes";
        }
        else
        {
            int at=a*b;
            cout<<at;
        }
    }
    else if (s == '-')
    {
         if (a - b == t)
        {
            cout<<"Yes";
        }
        else
        {
            int at=a-b;
            cout<<at;
        }
    }
    
    
    return 0;
}