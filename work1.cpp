#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Student {
	string name;
	double chinese;
	double math;
	double english;
	double average;
};

int main() {
	int n;
	cin >> n;
	Student* students = new Student[n];  // 动态创建学生数组

	// 输入学生信息并计算平均分
	for (int i = 0; i < n; ++i) {
		cin >> students[i].name
			>> students[i].chinese
			>> students[i].math
			>> students[i].english;
		students[i].average = (students[i].chinese + students[i].math + students[i].english) / 3.0;
	}

	// 格式化输出（左对齐，固定小数位数）
	cout << fixed << setprecision(2);  // 保留两位小数
	for (int i = 0; i < n; ++i) {
		// 用setw控制字段宽度，确保对齐
		cout << left
			<< setw(10) << students[i].name
			<< setw(10) << students[i].chinese
			<< setw(10) << students[i].math
			<< setw(10) << students[i].english
			<< setw(10) << students[i].average;
		// 平均分>=90标注Excellent
		if (students[i].average >= 90.0) {
			cout << "Excellent";
		}
		cout << endl;
	}

	delete[] students;  // 释放动态内存
	return 0;
}