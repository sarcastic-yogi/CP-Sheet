#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int n=s.size();
    
    for(int i=0;i<n;i++)
    {
        if(i==0 && s[i]=='9')
        {
            continue;
        }
        if(s[i]>='5')
        {
            s[i]='0'+'9'-s[i];
        }
    }

    cout<<s<<endl;
    return 0;
}