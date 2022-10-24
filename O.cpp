#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, i;
    cin>>N;
    vector<long long int>A(N);
    A[0] = 0;
    A[1] = 1;
    for( i=2; i<N; i++ )
    {
        A[i] = A[i-1] + A[i-2];
    }
    cout<<A.back()<<endl;
    return 0;
}
