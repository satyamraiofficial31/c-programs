#include <iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"Enter three numbers"<<endl;
  cin>>a>>b>>c;
  cout<<"the numbers are "<<a<<b<<c<<endl;
  if(a>b && a>c)
  cout<<a<<" is the greater number .";
  if(b>a && b>c)
  cout<<b<<" is a greater number .";
  if(c>b && c>a)
  cout<<c<<" is a greater number .";
  return 0;
}