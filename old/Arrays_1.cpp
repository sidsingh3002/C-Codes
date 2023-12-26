#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,4,6,8,10}; 

    for(int i=0; i<10;i++)
    {
        cout<<A[i]<<endl;
    }
    
    cout<<sizeof(A)<<endl;
    cout<<A[1]<<endl;
    printf("%d",A[2]);
    return 0;
}