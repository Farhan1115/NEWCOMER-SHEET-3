#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, row, col;
    cin>>N>>M;
    int A[N][M];
    for( row=0; row<N; row++ )
    {
        for( col=0; col<M; col++ )
        {
           cin>>A[row][col];
        }
    }
    for( row=0; row<N; row++ )
    {
        for( col=M-1; col>=0; col-- )
        {
           cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
