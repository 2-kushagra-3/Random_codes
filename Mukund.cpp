#include <bits/stdc++.h>  
using namespace std;  
int digSum(int n)
{
    int sum = 0;
    while(n > 0 || sum > 9)
    {
        if(n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()  
{  
    int t;
    cin>>t;
    while(t--)
    {
        int n,res;
        cin>>n;
        res=pow(2,n);
        res=digSum(res);
        cout<<res<<endl;    
    }
return 0;  
}  