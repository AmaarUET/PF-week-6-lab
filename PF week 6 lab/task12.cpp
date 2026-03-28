#include<iostream>
using namespace std;
main()
{
    string arg;
    cout<<"enter the argument 'a':";
    getline(cin,arg);
    string result = "something"   +  arg;
    cout<<"Result:"<<  result<<endl;
}