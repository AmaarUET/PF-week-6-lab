#include<iostream>
using namespace std;
main()
{
  string student[5];
  cout<<"Enter the name of 5 student:";
  for(int i=0;i<5;i=i+1){
    cout<<"students"<<i+1<<":"<<endl;
    getline(cin,student[i]);
  }
  cout<<"\nstudents names are:"<<endl;
  for(int i=0;i<5;i=i+1){
  cout<<student[i]<<endl;}

}