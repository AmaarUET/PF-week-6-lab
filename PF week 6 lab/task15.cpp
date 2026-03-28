#include<iostream>
using namespace std;
main()
{
    int n;
    int count=0;
    cout<<"Enter the num of element:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<"number:"<<endl;
    for(int i=0;i<n;i++)
    {cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    if(arr[i] % 2 == 0){
        count++;
    }
}
    cout<<"Total even number:"<<count<<endl;

}