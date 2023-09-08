#include <iostream>
using namespace std;
  
int search(int arr[], int N, int x)
{
    for(int i=0;i<N;i++)
    if(arr[i]==x)
    return i;
    return -1;

}
int main (void)
{
    int arr[]={2,3,4,5,6,7};
    int x=6;
    int N= sizeof(arr)/sizeof(arr[0]);
    int result =search(arr,N,x);
    (result==-1)
    ?cout<<"element is not present in array"
    :cout<<"element is present at index "<<result;
} 