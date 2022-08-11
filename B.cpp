#include<iostream>
using namespace std;

int main()
{
    int N, position;
    cin>>N;
    long long int A[N], X;
    for( int i=0; i<N; i++ )
    {
        cin>>A[i];
    }
    cin>>X;
    for( int i=0; i<N; i++ )
    {
        if( X==A[i] )
        {
            cout<<i<<endl;
            position = i;
            break;
        }
        else
        {
            position = -1;
        }
    }
    if( position==-1 )
    {
        cout<<position<<endl;
    }
    return 0;
}
