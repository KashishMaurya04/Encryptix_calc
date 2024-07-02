#include <iostream>
using namespace std;
int main()
{
    double a,b;
    char op;
 cout<<"CALCULATOR"<<endl;
  cout<<"Enter the 1st number :";
  cin>>a;
  cout<<"Enter the 2nd number :";
  cin>>b;
  cout<<"Enter the operator(+ , - , * , /) :";
  cin>>op;
  switch(op)
  {
  case '+':
  cout<<a <<op<< b <<" = " << a+b<<endl;
  break;
  case '-':
  cout<<a <<op<< b <<" = " << a-b<<endl;
  break;
  case '*':
  cout<<a <<op<< b<<" = "<< a*b<<endl;
  break;
  case '/':
  if(b==0.0)
  {
cout<<"Cannot divide by zero";
  }
  else
  {
      cout<<a<< op<< b  <<" = "<< a/b;
  }
  break;
  default:
  cout<<"Invalid Operaator";
  }
    return 0;
}
