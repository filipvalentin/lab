#include "class.h"

void student::SetName(std::string name) {
	studentName = name;
}

std::string student::GetName() {
	return studentName;
}

void student::SetMathGrade(float grade) {
	if (grade < 0 || grade>10) std::cout << "Grade out of bonds. The grade was not set";
	else math_grade = grade;
}

float student::GetMathGrade() {
	return math_grade;
}

void student::SetEnglishGrade(float grade) {
	if (grade < 0 || grade>10) std::cout << "Grade out of bonds. The grade was not set";
	else english_grade = grade;
}

float student::GetEnglishGrade() {
	return english_grade;
}

void student::SetHistoryGrade(float grade) {
	if (grade < 0 || grade>10) std::cout << "Grade out of bonds. The grade was not set";
	else history_grade = grade;
}
float student::GetHistoryGrade() {
	return history_grade;
}

float student::GetAvgGrade() {
	return (math_grade + english_grade + history_grade) / 3;
}