/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(c<b){
            cout<<c<<" "<<b<<" "<<a<<endl;
        }
        else{
            if(c<a)
            {
                cout<<b<<" "<<a<<" "<<c<<endl;
            }
            else cout<<b<<" "<<a<<" "<<c<<endl;
        }
    }



}

