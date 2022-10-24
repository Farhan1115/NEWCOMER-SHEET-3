#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, N, C=0, O=0;
    cin>>N;
    vector<int> A(N);
    for( i=0; i<N; i++ )
    {
        cin>>A[i];
        if( A[i]%2==0 )
        {
            C++;
        }
    }
    while( C==N )
    {
        C=0;
        O++;
        for( i=0; i<N; i++ )
        {
            A[i] = A[i]/2;

            if( A[i]%2==0 )
            {
                C++;
            }
            else
                break;
        }
    }
    cout<<O<<endl;
    return 0;
}
