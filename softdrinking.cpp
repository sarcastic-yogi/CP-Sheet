#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int totaldrink=(k*l)/nl;
    int totallime=c*d;
    int totalsalt=p/np;

    cout<<min({totalsalt,totaldrink,totallime})/n;
    return 0;
}