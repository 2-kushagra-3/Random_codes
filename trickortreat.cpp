#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,m,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    cin>>m;
    int b[m];
    for(i=0;i<m;i++) cin>>b[i];
    for(i=0;i<m;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])c=1;
        }
        if(c==0)cout<<"Tricky!"<<endl;
        else cout<<"Happy Halloween!"<<endl;
    }
}