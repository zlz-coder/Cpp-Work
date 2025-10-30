 #include<bits/stdc++.h>
 using namespace std;
 #define endl '\n'
 #define int long long
 inline double square(double x) {
 	return x * x;
 }
 double power(double base, int exponent = 2) {
 	double result = 1.0;
 	for (int i = 0; i < exponent; i++) {
 		result *= base;
 	}
 	return result;
 }
 double calc(double a, double b, char op) {
 	switch (op) {
 	case '+':
 		return a + b;
 	case '-':
 		return a - b;
 	case '*':
 		return a * b;
 	case '/':
 		if (b == 0) {
 			throw "Error: divide by zero";
 		}
 		return a / b;
 	default:
 		return 0;
 	}
 }
 
 double calc(int a, int b, char op) {
 	switch (op) {
 	case '+':
 		return a + b;
 	case '-':
 		return a - b;
 	case '*':
 		return a * b;
 	case '/':
 		if (b == 0) {
 			throw "Error: divide by zero";
 		}
 		return static_cast<double>(a) / b;
 	default:
 		return 0;
 	}
 }
 
 signed main()
 {
 	double a, b;
 	char op;
 	cin >> a >> b >> op;
 	cout << fixed << setprecision(2);
 	try {
 		cout << "square(" << a << ") = " << square(a) << endl;
 		cout << "power(" << a << ",3) = " << power(a, 3) << endl;
 		double result = calc(a, b, op);
 		cout << a << " " << op << " " << b << " = " << result << endl;
 	}
 	catch (const char* error_msg) {
 		cout << "square(" << a << ") = " << square(a) << endl;
 		cout << "power(" << a << ",3) = " << power(a, 3) << endl;
 		cout << error_msg << endl;
 	}
 	return 0;
 }
