#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, row, col;
    cin>>N;
    int A[N][N], d1, d2;
    d1=d2=0;
    for( row=0; row<N; row++ )
    {
        for( col=0; col<N; col++ )
        {
            cin>>A[row][col];
            if( row==col )
            {
                d1 = d1+A[row][col];
            }
            if( row+col==N-1 )
            {
                d2 = d2+A[row][col];
            }
        }
    }
    cout<<abs(d1-d2);
    return 0;
}
