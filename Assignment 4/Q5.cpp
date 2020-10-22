#include<iostream>

using namespace std;

class Base
{ 
    int x;
    public:
    // parameterized constructor
    Base(int i)
    { 
        x = i;
        cout << "Base Parameterized Constructor\n";
    }
};

class Derived : public Base
{ 
    int y;
    public:
    // parameterized constructor
    Derived(int j):Base(j)
    { 
        y = j;
        cout << "Derived Parameterized Constructor\n";
    }
};
class A: public Base, public Derived
{ 
  
}; 
  
class B: public Derived 
{ 
     int w;
     public:
	 B(int k):Derived(k){
	 	w=k;
	 	cout << "B Parameterized Constructor\n";
	 } 
}; 

int main()
{
    B d(10) ;
    return 0;
}
