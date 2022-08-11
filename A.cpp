#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    long long int A[N], Sum=0;
    for( int i=0; i<N; i++ )
    {
        cin>>A[i];
        Sum = Sum+A[i];
    }
    Sum = abs(Sum);
    cout<<Sum<<endl;
    return 0;
}
