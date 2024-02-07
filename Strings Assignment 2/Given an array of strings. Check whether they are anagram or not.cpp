#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter a  1st string:";
    string s;
    getline(cin,s);
     cout<<"Enter a  2nd string:";
    string t;
    getline(cin,t);
    int n=s.length();
    int m=s.length();
    if(n!=m)
    cout<<"false";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i])
        cout<<"false";
        break;
    }
    cout<<"true";
}
