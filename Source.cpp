#include <iostream>


// Swaps the number via pointers! 
// A pointer is declared by using * or &.
void swap(int* ptr, int* number);

int a = 100;
int b = 50;

int main() {

	std::cout << "Before Swap" << std::endl;
	std::cout << "A: " << a << std::endl;
	std::cout << "B: " << b << std::endl;
	std::cout << "\nAfter Swap" << std::endl;
	swap(&a, &b);
	std::cout << "A: " << a << std::endl;
	std::cout << "B: " << b << std::endl;
}

void swap(int* ptr, int* number) {
	int temp = *number;
	*number = *ptr;
	*ptr = temp;
}