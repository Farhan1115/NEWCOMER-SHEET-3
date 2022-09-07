#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, row, col, found=0;
    cin>>N>>M;
    int A[N][M], X;
    for( row=0; row<N; row++ )
    {
        for( col=0; col<M; col++ )
        {
            cin>>A[row][col];
        }
    }
    cin>>X;
    for( row=0; row<N; row++ )
    {
        for( col=0; col<M; col++ )
        {
            if( X==A[row][col] )
            {
                found = found+1;
            }
        }
    }
    if( found>0 )
    {
        cout<<"will not take number\n";
    }
    else
    {
        cout<<"will take number\n";
    }
    return 0;
}
