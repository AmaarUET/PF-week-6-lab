#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter the num of element:";
    cin>>n;
    if(n<=0){
        cout<<"invalid input"<<endl;
    }
    int arr[n];
    cout<<"Enter "<<n<<"number , one per line:"<<endl;
    for(int i=0;i<n;i++)
    {cin>>arr[i];
    }
    int maxnum=arr[0];
    for(int i=1; i< n ;i++){
        if(arr[i]>maxnum){
            maxnum=arr[i];
        }
    }
    cout<<"the largest num enter is:"<<maxnum<<endl;
    }

    