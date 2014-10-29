#include <iostream>
using namespace std;

int add(int a,int b)
{
	return a+b;
}
int subtract(int a,int b)
{
	return a-b;
}
int multiply(int a,int b)
{
	return a*b;
}
int operate(int a,int b,int (*f)(int,int))
{
	return (*f)(a,b);
}

int main(int argc,char* argv[])
{
	int x,y;
	cin>>x>>y;

	int (*f1)(int,int),(*f2)(int,int);
	
	f1=add;
	f2=subtract;

	int (*f3)(int,int)=multiply;

	cout<<operate(x,y,f1)<<" "<<operate(x,y,f2)<<" "<<operate(x,y,f3)<<endl;

	int (*fx[3])(int,int)={add,subtract,multiply};

	cout<<operate(x,y,fx[0])<<" "<<operate(x,y,fx[1])<<" "<<operate(x,y,fx[2])<<endl;

	int (*fy[3])(int,int);

	fy[0]=add;
	fy[1]=subtract;
	fy[2]=multiply;

	cout<<operate(x,y,fy[0])<<" "<<operate(x,y,fy[1])<<" "<<operate(x,y,fy[2])<<endl;
	return 0;
}
