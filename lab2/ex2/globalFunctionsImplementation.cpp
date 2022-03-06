#include "globalfunctions.h"

int compareNames(student stud1, student stud2) {
	if (stud1.GetName() == stud2.GetName()) return 0;
	else if (stud1.GetName() > stud2.GetName()) return 1;
	else return -1;
}

int compareAverages(student stud1, student stud2) {
	if (stud1.GetAvgGrade() == stud2.GetAvgGrade()) return 0;
	else if (stud1.GetAvgGrade() > stud2.GetAvgGrade()) return 1;
	else return -1;
}

int compareMathGrades(student stud1, student stud2) {
	if (stud1.GetMathGrade() == stud2.GetMathGrade()) return 0;
	else if (stud1.GetMathGrade() > stud2.GetMathGrade()) return 1;
	else return -1;
}

int compareEnglishGrades(student stud1, student stud2) {
	if (stud1.GetEnglishGrade() == stud2.GetEnglishGrade()) return 0;
	else if (stud1.GetEnglishGrade() > stud2.GetEnglishGrade()) return 1;
	else return -1;
}

int compareHistoryGrades(student stud1, student stud2) {
	if (stud1.GetHistoryGrade() == stud2.GetHistoryGrade()) return 0;
	else if (stud1.GetHistoryGrade() > stud2.GetHistoryGrade()) return 1;
	else return -1;
}