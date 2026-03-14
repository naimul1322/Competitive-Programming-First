/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int f(int a,int b)
{
    int res=1;
    for(int i=1; i<=b; i++)
    {
        res*=a;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int a,b;
    cin>>a>>b;
    cout<<f(a,b)<<endl;


}

