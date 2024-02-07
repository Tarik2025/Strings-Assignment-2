#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter a string:";
    string s;
    getline(cin,s);
    stringstream ss(s);
    int temp;
    while(ss>>temp)
    {
        cout<<temp;
    }
}