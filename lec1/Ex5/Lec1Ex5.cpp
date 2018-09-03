// Lec1Ex5.cpp      Demonstrates simple use of string, and more
#include "std_lib_facilities.h"
int main() {
	cout << "Enter your name (followed by return/enter)\n";
	string name = ""; // string object name initialized to empty string // TODO needed?, is there default initializer?
	cin >> name; // read a string from cin (= console in, keyboard)
	string s1 = "Hello"; // sets s1 to Hello
	string s2(",have a nice day!"); // sets s2 to a longer text-string, containing blanks. Also alternative syntax () instead of =
	string s3 = s1 + " " + name + s2; // + is defined as a concatenate operator for string
	cout << "1) " << s3 << endl;

	// We want to insert a blank after the comma, what is its position?
	int pos = s1.length() + 1 + name.length() + 1;
	s3.insert(pos, " ");
	cout << "2) " << s3 << "\n";

	/*** TODO; supplement with what is needed for exercise 1 and 2
	- access to char ?
	- substr ... TODO Not listed in PPP at page 851?
	*/

	keep_window_open();
	keep_window_open(); // TODO far from elegant that I must have two of these !  // but easily solved by debugger and breakpoint
}