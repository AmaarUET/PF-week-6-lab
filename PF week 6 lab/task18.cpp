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
        char letter;
        cout<<"enter the letter to check:";
        cin>>letter;
        int count=0;
        for(int i=0;i<n;i++){
            if(name[i][0] == letter )
            count++;
        }
        cout<<"total names starting with"<<letter<<":"<<count<<endl;

    
}
    