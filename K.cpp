#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, i, Sum=0;
    cin>>N;
    char S[N];
    for( i=0; i<N; i++ )
    {
        cin>>S[i];
        if( S[i]>=48 && S[i]<=57 )
        {
            Sum = Sum+ ( S[i]-48 );
        }
    }
    cout<<Sum<<endl;
    return 0;
}
