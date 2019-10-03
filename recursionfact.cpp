#include<iostream.h>
#include<conio.h>
long fact(int);
int main()
{
int n;
int x;
cout<<"enter the number";
cin>>n;
x=fact(n);
cout<<"the factorial of the number is"<<x;
}
/////////////////////////////////////////////////////////
long fact(long n)
{
if (n==0)
return 1;
else
return n*fact(n-1);
}

