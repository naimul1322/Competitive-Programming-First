/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //cout<<fixed<<setprecision(2);

    vector<int> v(100);
    for(int i=0; i<100; i++)
    {
        cin>>v[i];
    }
    cout<<*max_element(v.begin(),v.end())<<endl;
    cout<<(max_element(v.begin(),v.end())-v.begin())+1<<endl;
}

