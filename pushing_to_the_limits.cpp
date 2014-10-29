#include <iostream>
using namespace std;

//ULLONG_MAX = 2^64 - 1 = 18446744073709551615

int main(int argc,char* argv[])
{
	unsigned __int64 x=ULLONG_MAX;
	_ULONGLONG xx=ULLONG_MAX;			//#define _ULONGLONG unsigned __int64

	unsigned long long y=ULLONG_MAX;
	_ULonglong yy=ULLONG_MAX;			//typedef unsigned long long _ULonglong
	
	cout<<x<<endl;
	cout<<y<<endl;

	cout<<xx<<endl;
	cout<<yy<<endl;
	return 0;
}
