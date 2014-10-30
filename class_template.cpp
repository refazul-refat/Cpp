#include <iostream>
using namespace std;

template <typename T,typename U>
class Pair
{
private:
	T x; U y;
public:
	Pair(T,U);
	T getFirst();
	U getSecond();
};
template <typename T,typename U>
Pair<T,U>::Pair(T a,U b)
{
	x=a;y=b;
}
template <typename T,typename U>
T Pair<T,U>::getFirst()
{
	return x;
}
template <typename T,typename U>
U Pair<T,U>::getSecond()
{
	return y;
}

/***************************/
/* Template Specialization */
template <>
class Pair<int,int>
{
private:
	int x,y;
public:
	Pair(int,int);
	int getX();
	int getY();
};
Pair<int,int>::Pair(int a,int b)
{
	x=a;y=b;
}
int Pair<int,int>::getX()
{
	return x;
}
int Pair<int,int>::getY()
{
	return y;
}

/***********************************/
/* Another Template Specialization */
template <>
class Pair<int,char*>
{
private:
	int x;char *y;
public:
	Pair(int,char*);
	int getKey();
	char* getValue();
};
Pair<int,char*>::Pair(int a,char *b)
{
	x=a;y=b;
}
int Pair<int,char*>::getKey()
{
	return x;
}
char* Pair<int,char*>::getValue()
{
	return y;
}


int main()
{
	Pair<int,double> p(2,3.45);
	Pair<double,double> d(5.43,8.76);
	Pair<char*,char*> s("Hello","World");

	cout<<p.getFirst()<<" "<<p.getSecond()<<endl;
	cout<<d.getFirst()<<" "<<d.getSecond()<<endl;
	cout<<s.getFirst()<<" "<<s.getSecond()<<endl;

	Pair<int,int> i(4,5);								//Template Specialization
	cout<<i.getX()<<" "<<i.getY()<<endl;

	Pair<int,char*> a(2,"World");						//Another Template Specializaiton
	cout<<a.getKey()<<" "<<a.getValue()<<endl;
	return 0;
}
