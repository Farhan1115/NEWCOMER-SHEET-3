#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, i, Low, position=1;
    scanf("%d", &N);
    int A[N];
    for( i=0; i<N; i++ )
    {
        scanf("%d", &A[i] );
    }
    Low = A[0];
    for( i=0; i<N; i++ )
    {
        if( Low>A[i] )
        {
            Low = A[i];
        }
    }
    for( i=0; i<N; i++ )
    {
        if( Low==A[i] )
        {
            position = position+i;
            break;
        }
    }
    printf("%d %d\n", Low, position );
    return 0;
}
