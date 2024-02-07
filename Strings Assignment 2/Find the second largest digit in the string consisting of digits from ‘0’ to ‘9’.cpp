#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter a string:";
    string s;
    getline(cin,s);
    int n=s.length();
    if(n==0) cout<<"the string is empty";
    sort(s.begin(),s.end());
    cout<<s<<endl;
    cout<<"The new string is :"<<s[n-2]<<endl;
    return 0;
}
