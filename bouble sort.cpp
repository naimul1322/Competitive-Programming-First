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
    int a[n+1];
    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
//                int tmp=a[j+1];
//                a[j+1]=a[j];
//                a[j]=tmp;
            swap(a[j],a[j+1]);
            }
        }
    }
    for(auto u: a)
    {
        cout<<u<<" ";
    }
    cout<<endl;


}

