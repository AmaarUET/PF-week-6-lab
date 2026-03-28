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
    int largest=arr[0];
    int smallest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
cout<<"Largest number:"<<largest<<endl;
cout<<"Smallest number:"<<smallest<<endl;
    }
