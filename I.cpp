#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, N, T;
    cin>>T;
    for( int j=1; j<=T; j++ )
    {
        cin>>N;
        vector<int> A(N);
        for( i=0; i<N; i++ )
        {
            cin>>A[i];
        }
        int sum = 0, Min=INT_MAX;
        for( i=0; i<N; i++ )
        {
            for( int k=i+1; k<N; k++ )
            {
                sum = A[i] + A[k] + k - i;
                //cout<<sum<<endl;
                if( Min>sum )
                {
                    Min = sum;
                }
            }
        }
        cout<<Min<<endl;
    }
    return 0;
}
