#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, i, Min=INT_MAX, C=0;
    cin>>N;
    vector<int>A(N);
    for( i=0; i<N; i++ )
    {
        cin>>A[i];
        if( Min>A[i] )
        {
            Min = A[i];
        }
    }
    for( i=0; i<N; i++ )
    {
        if( A[i]==Min )
        {
            C++;
        }
    }
    if( C%2!=0 )
    {
        cout<<"Lucky"<<endl;
    }
    else
    {
        cout<<"Unlucky"<<endl;
    }
    return 0;
}
