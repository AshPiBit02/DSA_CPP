#include<iostream>
using namespace std;
int GCD(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return GCD(b,a%b);
    }
}
int main()
{
    int a,b;
    cout<<"Enter two numbers to find their GCD: "<<endl;
    cin>>a>>b;
    if(a<b)
    {
        swap(a,b);
    }
    cout<<"The GCD of "<<a<<" and "<<b<<" is "<<GCD(a,b)<<endl;
    return 0;
}