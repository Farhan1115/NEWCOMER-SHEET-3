#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, i, C=0;
    string S;
    cin>>A>>B>>S;
    //cout<<S<<endl;
    int x = S.size();
    for( i=0; i<x; i++ )
    {
        if( S[i]>=48 && S[i]<=57 )
        {
            C++;
        }
    }
    //cout<<C<<endl;
    if( S[A]=='-' && C==(x-1) )
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
