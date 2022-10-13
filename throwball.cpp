#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int t;
    cin>>t;
    int p=0,pos;
    while(1)
    {
        if(a[p]==1){pos=p; break;}
        else p++;
    }
    cout<<pos<<endl;
    for(i=0;i<t;i++)
    {
        pos=a[pos]-1;
        
    }
    cout<<a[pos];
    return 0;
}