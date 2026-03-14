/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x,y;
    cin>>x>>y;
    int cnt=0;
    for(int i=y; i>=x; i-=2)
    {
        if(x<0)x*=-1;
        if(y<0)y*=-1;
        cnt++;
    }
    cout<<cnt<<endl;



}

