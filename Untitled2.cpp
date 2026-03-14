/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    int a=n/100;
    int b=(n-(a*100))/50;
    int c=((n-(a*100))-50)/20;
    int d=(((n-(a*100))-50)-20)/10;
    int e=((((n-(a*100))-50)-20)-10)/5;
    int f=(((((n-(a*100))-50)-20)-10)-5)/2;
    int g=((((((n-(a*100))-50)-20)-10)-5)-2)/1;

    cout<<a<<" nota(s) de R$ 100,00"<<endl;
    cout<<b<<" nota(s) de R$ 50,00"<<endl;
    cout<<c<<" nota(s) de R$ 20,00"<<endl;
    cout<<d<<" nota(s) de R$ 10,00"<<endl;
    cout<<e<<" nota(s) de R$ 5,00"<<endl;
    cout<<f<<" nota(s) de R$ 2,00"<<endl;
    cout<<g<<" nota(s) de R$ 1,00"<<endl;




}

