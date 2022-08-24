#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, i, j;
    cin>>N;
    int A[N];
    for( i=0; i<N; i++ )
    {
        cin>>A[i];
    }
    for( j=0; j<N; j++ )
    {
        for( i=0; i<N-1; i++ )
        {
            if( A[i]>A[i+1] )
        {
            int temp = A[i+1];
            A[i+1] = A[i];
            A[i] = temp;
        }
        }
    }
    for( i=0; i<N; i++ )
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
