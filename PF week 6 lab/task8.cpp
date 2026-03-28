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
    cout<<"number in reverse order:";
    for(int i=n-1 ;i>=0;i--){
        cout<<arr[i]<<"";
    }

    }


