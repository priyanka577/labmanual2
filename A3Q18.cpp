/*Write a function int gcd(int a,int b) that calculates the greatest common divisor of two numbers using recursion.*/
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is: "<<gcd(a,b)<<endl;
    return 0;
}