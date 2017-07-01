#include<iostream.h>
#include<conio.h>
int fact(int n)
{
cout<<n<<"called"<<endl;
if(n==1)
{
cout<<"1 returned"<<endl;
return 1;
}
else
{
int a=fact(n-1)*n;
cout<<n<<"returned"<<endl;
return a;
}
}
void main(){
clrscr();
int n;
cin>>n;
cout<<endl<<fact(n);
getch();
}