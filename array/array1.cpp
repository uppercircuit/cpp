#include <iostream>
using namespace std;
int main(){
//     int arr[]={1,5,4,8,3};
//    int brr[5]={1,5,4,8,3};
//    int crr[2]={1,5,4,8,3};
//    int drr[7]={1,5,4,8,3};
    //    int arr[5]={5,6,8,9,4};
    //    cout<<arr[2]<<endl;
    //  int arr[5];
    //      int n=5;
    //      for(int i=0;i<n;i++){
    //         cout<<"enter the value for index "<<i<<endl;
    //         cin>>arr[i];
    //         cout<<endl;
    //      }
    //      cout<<"printing the array"<<endl;
    //      for(int i=0; i<n;i++){
    //         cout<<arr[i]<<" ";
    //      }
         
        //  int arr[5];
        //  int n=5;
        //  for(int i=0;i<n;i++){
        //     cin>>arr[i];
        //  }
        //  int sum=0;
        //  for(int i=0;i<n;i++){
        //     sum =sum+arr[i];
        //  }
        //  cout<<"print the sum of an input "<<sum<<endl;

        int arr[5]={2,4,6,8,10};
        int target=10;
        int n=5;
         bool  flag =0;
        for (int i =0 ;i<n;i++){
            if (arr[i]=target){
                   flag=1;
                break;
            }

        }
        if(flag==1){
            cout<<"target found"<<endl;
        }
}