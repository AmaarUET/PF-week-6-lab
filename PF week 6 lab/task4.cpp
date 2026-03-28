#include<iostream>
using namespace std;
main()
{
    int sum=0;
    float avg=0;
    int num[5]={1,2,3,4,5};
    for(int indx=0;indx<5;indx=indx+1){
        sum=sum+num[indx];
    }
        avg=sum/5;
        cout<<"sum:"<<sum<<endl;
        cout<<"average:"<<avg<<endl;
    }
