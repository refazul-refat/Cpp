#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void eat()
	{
		cout<<"Eating Generic Food"<<endl;
	}
};
class Dog : public Animal
{
public:
	void eat()
	{
		cout<<"Eating Dog Food"<<endl;
	}
};
class Cat : public Animal
{
public:
	void eat()
	{
		cout<<"Eating Cat Food"<<endl;
	}
};

void action(Animal *a)
{
	a->eat();
}

int main(int argc,char* argv[])
{
	Animal *a=new Animal();
	Dog *d=new Dog();
	Cat *c=new Cat();

	action(a);
	action(d);
	action(c);

	/* Existence of virtual keyword before Animal::eat() function causes
	its subclasses to use their own eat() function [if they have one] */
	return 0;
}
