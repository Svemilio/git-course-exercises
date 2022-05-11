#include<iostream>
#include<cstdlib>

using namespace std;

void number_generate(int a) {
int b=rand()%a;
cout<<"the number is="<<b<<endl;
}

int main()
{
  number_generate(4);
}
