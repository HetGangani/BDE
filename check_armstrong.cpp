#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int temp=n;
    while(n>0)
    {
        int ld=n%10;
        sum+=pow(ld,3);
        n=n/10;
    }

    if(sum==temp)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Not an Armstrong Number"<<endl;
    }
    return 0;

}