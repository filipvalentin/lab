#pragma once
#include <iostream>

class student {
	std::string studentName;
	float math_grade, english_grade, history_grade;

	public:
		void SetName(std::string name);
		std::string GetName();

		void SetMathGrade(float grade);
		float GetMathGrade();

		void SetEnglishGrade(float grade);
		float GetEnglishGrade();

		void SetHistoryGrade(float grade);
		float GetHistoryGrade();

		float GetAvgGrade();
};