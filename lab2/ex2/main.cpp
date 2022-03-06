#include "globalFunctionsImplementation.cpp"

int main() {
	student Student1, Student2;

	Student1.SetName("Hector Spitzer");
	Student1.SetEnglishGrade(9.5);
	Student1.SetHistoryGrade(7.3);
	Student1.SetMathGrade(5.9);

	Student2.SetName("Alfred Gregg");
	Student2.SetEnglishGrade(9.5);
	Student2.SetHistoryGrade(9.3);
	Student2.SetMathGrade(5.8);

	std::cout << "Comparison by names: [ " << Student1.GetName() << " and " << Student2.GetName() << " ]\t"
		<< compareNames(Student1, Student2) << std::endl;

	std::cout << "Comparison by math grades: [ " << Student1.GetMathGrade() << " and " << Student2.GetMathGrade() << " ]\t" 
		<< compareMathGrades(Student1, Student2) << std::endl;

	std::cout << "Comparison by English grades: [ " << Student1.GetEnglishGrade() << " and " << Student2.GetEnglishGrade() << " ]\t" 
		<< compareEnglishGrades(Student1, Student2) << std::endl;

	std::cout << "Comparison by history grades: [ " << Student1.GetHistoryGrade() << " and " << Student2.GetHistoryGrade() << " ]\t"
		<< compareHistoryGrades(Student1, Student2) << std::endl;

	std::cout << "Comparison by grade averages: [ " << Student1.GetAvgGrade() << " and " << Student2.GetAvgGrade() << " ]\t"
		<< compareAverages(Student1, Student2);
}