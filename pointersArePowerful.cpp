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
	
	int arr[5] = {21,22,23,25,110};
	int *arrp = arr;
	for (int i =0; i <5; i++) {
		std::cout << "The address of arr[" << i << "] is: " << (arrp + i) << "\n";
		std::cout << "The value of arr[" << i << "] is: " << *(arrp + i) << "\n";
	}
	
	return 0;
}