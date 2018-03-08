#include <iostream>
#include <string>
using namespace std;

void quarters(int x) {
	cout << x / 25 << " quarters" << endl;
	cout << ((x % 25) / 10) << " dimes" << endl;
	cout << (((x % 25) % 10) / 5) << " nickles" << endl;
	cout << ((((x % 25) % 10) % 5) / 1) << " pennies" << endl;
}

int main() {
	int cents;
	char stay;

	cout << "How many cents do you have?" << endl;
	cin >> cents;

	cout << "You have " << cents << " cents" << endl;
	quarters(cents);
	

	cin >> stay;

	return 0;

}
