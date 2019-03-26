// Example program
#include <iostream>
#include <string>

class A {
	public:
	A() {
		std::cout << "A:constructor\n";
	}
};

class B : public A {
	public:
	B() {
		std::cout << "B:constructor\n";
	}
};

class C {
	public:
	C() {
		std::cout << "C:constructor\n";
	}
};

class D : public A, C {
	public:
	D() {
		std::cout << "D:constructor\n";
	}
};

class E : public B, C, D {
	public:
	E() {
		std::cout << "E:constructor\n";
	}
};



int main()
{
	E e;
  	//std::cout << "Hello, !\n";
}