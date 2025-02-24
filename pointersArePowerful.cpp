#include <iostream>

int main() {
	int a;
	a = 80;
	int *p;
	p = &a;
	std::cout <<  "The address of stored in pointer p is: " << p << "\n";
	std::cout << "The value of integer a, whose address is stored in pointer p is: " << *p << "\n";
	*p = 443;
	std::cout << "The new value of integer a, using pointer p is: " << a << "\n";
	return 0;
}