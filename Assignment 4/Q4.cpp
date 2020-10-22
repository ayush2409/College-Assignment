#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

//class shape
class Shape
{
public:
double height,base;

//constructor to assign initial values to height and base
Shape()
{
height=0;
base=0;
}

//get_data() function to get values of height and base
void get_data()
{
cout<<"\nEnter height and base to compute are :";
cin>>height>>base;
}

//declaration of virtual function display_area()
virtual void display_area()
{
}
};

//class triangle inheriting class Shape
class Triangle : public Shape
{
public:

//redefining function display_area()
void display_area()
{
cout<<height;
cout<<"\nArea of Triangle = "<<(height*base)/2;
}
};

//class Rectangle inheriting class Shape
class Rectangle : public Shape
{
public:

/redefining function display_area()
void display_area()
{
cout<<"\nArea of Rectangle = "<<height*base;
}
};
void main()
{
clrscr();
Shape *s;
Triangle t;
t.get_data();
s=&t;
s->display_area();
Rectangle r;
r.get_data();
s=&r;
s->display_area();
getch();
}
