#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, i, Min=INT_MAX, pos1, pos2, Max=INT_MIN;
    cin>>N;
    vector<int>A(N);
    for( i=0; i<N; i++ )
    {
        cin>>A[i];
        if( Min>A[i] )
        {
            Min = A[i];
            pos1= i;
        }
        if( Max<A[i] )
        {
            Max = A[i];
            pos2= i;
        }
    }
    int temp = Max;
    A[pos2] = Min;
    A[pos1] = temp;
    for( i=0; i<N; i++ )
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}
