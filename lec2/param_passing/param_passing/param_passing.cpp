// param_passing.cpp      Demonstrates different methods of parameter passing and performance
#include "std_lib_facilities.h"

const int maxNum = 5000000;

clock_t readTime() { return clock(); }

void reportTime(clock_t before, string str) {
	cout << str << " " << "clock_ticks used: " <<
		readTime() - before << endl;
}
vector<int> generateVector(unsigned int n) {
	vector<int> temp;
	for (unsigned int i = 0; i < n; i++) {
		temp.push_back(randint(maxNum));
	}
	return temp;
}

void searchVectorCopy(vector<int> v, int num) { // call by value (copy)
	for (unsigned int i = 0; i < v.size(); ++i) {
		if (v[i] == num)
			cout << "Num: " << num << " found at index " << i << endl;
	}
}
void searchVectorRef(vector<int>& v_r, int num) { // call by reference
	for (unsigned int i = 0; i < v_r.size(); ++i) {
		if (v_r[i] == num)
			cout << "Num: " << num << " found at index " << i << endl;
	}
}
void searchVectorConstRef(const vector<int>& v_cr, int num) { // call by const reference
	for (unsigned int i = 0; i < v_cr.size(); ++i) {
		if (v_cr[i] == num)
			cout << "Num: " << num << " found at index " << i << endl;
	}
}

int main() {
	clock_t before = readTime();
	vector<int> V = generateVector(40000000);
	reportTime(before, "generate");

	cout << endl;
	before = readTime();
	searchVectorCopy(V, 9999);
	reportTime(before, "copy");

	cout << endl;
	before = readTime();
	searchVectorRef(V, 9999);
	reportTime(before, "reference");

	cout << endl;
	before = readTime();
	searchVectorConstRef(V, 9999);
	reportTime(before, "const reference");

	keep_window_open();
}
