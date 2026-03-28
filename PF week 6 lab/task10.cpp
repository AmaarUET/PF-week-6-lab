#include<iostream>
using namespace std;
main()
{
    int n;
    float total_resistance=0,resistance;
    cout<<"Enter the num of resistors in series:";
    cin>>n;
    cout<<"Enter "<<n<<" resistance of resistors , one per line:"<<endl;
    for(int i=0;i<n;i++)
    {cin>>resistance;   
    total_resistance += resistance;}
    cout<<"the total resistance in series is :"<<total_resistance<<endl;
}

    