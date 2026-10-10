#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b;
    string s;
    cin>>a>>b>>s;
    if(s == "+") cout<<a+b;
    else if(s == "-") cout<<a-b;
    else if(s == "*") cout<<a*b;
    else if(s == "/") cout<<a/b;
    return 0;
}
