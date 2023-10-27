//22070123020
#include <iostream>
using namespace std;
int main()
{
    int i;
    int f;
    int d;
    int arr[5]={1,2,3,4,5};
    cout<<"The array is:\n";
    f=arr[0];
    for(i=0;i<=4;i++)
    cout<<"  \n"<<arr[i]<<"\n";
    for (i=0;i<=4;i++)
    {
        if(arr[i]<f)
        f=arr[i];
    }
    cout<<"The smallest element in the given array is:"<<f;
}


