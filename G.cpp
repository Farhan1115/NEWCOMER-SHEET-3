#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, i, j, count=0;
    cin>>N;
    int A[N];
    for( i=0; i<N; i++ )
    {
        cin>>A[i];
    }
    for( i=0, j=N-1; i<N, j>=0; i++ , j-- )
    {
        if( A[i]==A[j] )
        {
            count++;
        }
    }
    if( count==N )
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
