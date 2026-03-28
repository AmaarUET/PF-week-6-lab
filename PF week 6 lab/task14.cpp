#include<iostream>
using namespace std;
main()
{
    int n;
    int sum=0;
    cout<<"Enter the num of element:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<"number:"<<endl;
    for(int i=0;i<n;i++)
    {cin>>arr[i];
    }
    int sumarr;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
cout<<"sum of all elements:"<<sum<<endl;
    }