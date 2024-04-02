#include <iostream>

using std::cout;

void print_foobar(void) {
	cout << "FOOBAR!!!\n"
}

int main(void) {
	cout << "hello there" << '\n';
	for (int i = 0; i < 10; i++)
		cout << "LINE.\n";
	
	print_foobar();

	return 123;
}
