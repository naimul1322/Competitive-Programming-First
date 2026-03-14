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
    int mxlength=INT_MAX,currentmx=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(mxlength>a[i])
        {
            mxlength=min(mxlength,a[i]);
        }
        currentmx++;
    }
    cout<<mxlength<<endl;


}

