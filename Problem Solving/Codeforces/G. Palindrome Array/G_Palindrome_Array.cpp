#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool ispal=true;
    for (int i = 0; i < n/2; i++)
    {
        if (a[i] != a[n-1-i])
        {
            ispal=false;
        }
        
    }
    if (ispal)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}