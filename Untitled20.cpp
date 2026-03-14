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
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        long long  ans;
        for(int i=0; i<n; i++)
        {
            if(i==0 || i==1) ans=i;
            else
            {
                ans=(i-1)+(i-2);
            }
        }
        cout<<"Fib("<<n<<") = "<<ans<<endl;
    }


}

