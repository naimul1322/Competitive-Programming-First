/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int sum2(int a,int b)
{
    if(a<b) return b;
    else return a;
}
int sum3(int a,int b,int c)
{
    return a+b+c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //cout<<fixed<<setprecision(2);
    int a,b;
    cin>>a>>b;
    cout<<sum2(a,b)<<endl;
    cin>>a>>b;
    cout<<sum2(a,b)<<endl;
    int c;
    cin>>a>>b>>c;
    cout<<sum3(a,b,c)<<endl;


}

