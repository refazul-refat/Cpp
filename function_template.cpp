#include <iostream>
using namespace std;

template <typename T>
T factorial(T n)
{
	if(n==0)
		return 1;
	return n*factorial(n-1);
}

/**************************************/
/*	Template Instantiation (Explicit) */
/*
	Useful for creating library files. Uninstantiated template definitions
	are not put into object (.obj) files.
*/
template unsigned long long factorial<unsigned long long>(unsigned long long);
template unsigned __int64 factorial<unsigned __int64>(unsigned __int64);

/****************************/
/*	Template Specialization */
template <> char factorial<char>(char n)
{
	return n;
}

int main(int argc,char* argv[])
{
	cout<<factorial<char>('a')<<endl;					//Template Specialization
	cout<<factorial<int>(10)<<endl;						//Implicit Instantiation
	cout<<factorial<unsigned long long>(20)<<endl;		//Explicit Instantiation
	
	return 0;
}
