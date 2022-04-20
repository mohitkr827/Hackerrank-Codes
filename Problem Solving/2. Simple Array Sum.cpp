#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,s=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s=s+x;
    }
    cout<<s;
    return 0;
}
