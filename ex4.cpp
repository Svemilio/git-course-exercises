#include<iostream>

using namespace std;

int main() {
int a;
cout<<" enter month number(1-12)<<endl;
cin>>a;
if(a>12 || a<0)
{
  cout<<"invalid input"<<endl;
  a=0;
}
else
 {
 	if(a==1 || a==3 || a==5 ||a==7||a==10||a==12) 
	{
	   cout<<"31 days"<<endl;
	}
	else if(a==2)
	{
	   cout<<"28/29 days"<<endl;
	}
	else if(a==4||a==6||a==9||a==11)
	{
	   cout<<"30 days"<<endl;
	}
}

