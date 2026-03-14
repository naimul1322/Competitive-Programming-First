/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    int n;
    cin>>n;
    int a[n+1],f[n+1]={};
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
       f[a[i]]++;
    }
    for(int i=1; i<=n; i++)
    {
        if(f[i+1]-f[i]==1){
            cout<<f[i]<<" ";
        }
        cout<<endl;
    }



}

