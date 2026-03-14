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
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int sz=unique(v.begin(),v.end())-v.begin();
    for(int i=0; i<sz; i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<endl;
    cout<<*v.begin()<<endl;
    cout<<v.back()<<endl;
    cout<<*max_element(v.begin(),v.end())<<endl;
    cout<<max_element(v.begin(),v.end())-v.begin()<<endl;


}

