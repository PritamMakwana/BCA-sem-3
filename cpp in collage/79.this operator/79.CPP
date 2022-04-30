#include<stdio.h>
#include<iostream.h>
class person
{
	float age;
	public:
	person()
	{

	}
	person(float x)
	{
		age=x;
	}
	void display()
	{
		cout<<"age="<<age;
	}
	person max(person);
};
person person::max(person p2)
{
	if(age>p2.age)
	{
		cout<<"person 1 is older";
		return * this;
	}
	else
	{
		cout<<"person 2 is older";
		return p2;
	}
}
void main()
{

	int age;
	cout<<"enter age at person 1";
	cin>>age;
	person p1(age);
	cout<<"enter age of person 2";
	cin>>age;
	person p2(age),p3;
	p1.display();
	p2.display();
	p3=p1.max(p2);
	p3.display();

}