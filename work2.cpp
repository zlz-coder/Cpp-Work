#include <iostream>
#include <cctype>
using namespace std;
int countVowels(const char* p) {
	int count = 0;
	while (*p != '\0') {
		char ch = tolower(*p);
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
			count++;
		}
		p++;
	}
	return count;
}
int main() {
	const int N = 1000;
	char str[N];
	cin.getline(str, N);
	int V = countVowels(str);
	cout << "Number of vowels: " << V << endl;
	return 0;
}
