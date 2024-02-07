#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter a string:";
    string s;
    getline(cin,s);
    string t;
    t=s;
    reverse(s.begin(),s.end());
    t=t+s;
    cout<<"The new string is :"<<t<<endl;
    return 0;
}
