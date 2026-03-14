/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void f(int a[],int n)
{
    for(int i=n-1; i>=0; i--)
    {
        cout<<a[i]<<" ";
    }
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++) cin>>a[i];
    f(a,n);



}

