/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int  a[5]={1,2,3,4,5};
    reverse(a,a+3);
    for(int i=0; i<5; i++)
    {
        cout<<&a[i]<<" ";
    }


}
