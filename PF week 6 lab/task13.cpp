#include<iostream>
using namespace std;
main()
{
    string str,out;
    cout<<"Enter a string:";
    getline(cin,str);
    for(char c : str){
        if(c !='a'&& c!='e' && c!='i' && c!='o' && c!='u' &&c !='A'&& c!='E' && c!='I' && c!='O' && c!='U'){
            out += c;

        }   }
        cout<<"string with vowel removed:"<<out<<endl;
}
