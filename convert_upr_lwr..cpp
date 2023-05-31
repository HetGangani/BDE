#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str="bduhcundwdwiiwn";

    //convert into uppercase.
    for(int i=0;i<=str.size();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }
    cout<<str;
    cout<<endl;

    //convert into lowercase.

    for(int i=0;i<=str.size();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    cout<<str;
    cout<<endl;

    //Inbuilt Function.

    string s="hujbvcrd";

    transform(s.begin(),s.end(),s.begin(),::toupper);

    cout<<s;
    cout<<endl;

    transform(s.begin(),s.end(),s.begin(),::tolower);

    cout<<s;
    return 0;
}