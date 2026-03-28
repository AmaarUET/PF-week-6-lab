#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter the name of customers:";
    cin>>n;
    cin.ignore();
    string name[n];
    for(int i=0;i<n;i++){
        cout<<"enter the name of customer"<<i+1<<":";
        getline(cin,name[i]);}
        for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        if(name[i]>name[j])
        swap(name[i],name[j]);
        cout<<"students in alphabatic order:"<<endl;
        for(int i=0;i<n;i++){
            cout<<name[i]<<endl;
        }
    }