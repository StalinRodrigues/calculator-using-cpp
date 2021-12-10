#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  cout<<"********CALCULATOR********";
  char op;
  float num1, num2;
  cout<<"*\n Enter operator(+,-,*,/):";
  cin>>op;
  cout<<"\n Enter two operands:";
  cin>>num1>>num2;
  switch(op)
  {
    case '+':
	  cout<<num1<<"+"<<num2<<"="<<num1 + num2;
	  break;
    case '-':
	  cout<<num1<<"-"<<num2<<"="<<num1 - num2;
	  break;
    case '*':
	  cout<<num1<<"*"<<num2<<"="<<num1 * num2;
	  break;
    case '/':
	  cout<<num1<<"/"<<num2<<"="<<num1 / num2;
	  break;
    default:
	  cout<<"Erroe! operator is not correct";
	  break;
  }
cout<<"\n*************************";
  getch();
}
