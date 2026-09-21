#include <iostream>
#include <string>
using namespace std;

double calculateAverage(int grade1, int grade2, int grade3)
{
    return (grade1 + grade2 + grade3) / 3.0;
}

int main()
{
    string studentName = "Ahmad";
    int grade1 = 85;
    int grade2 = 90;
    int grade3 = 80;

    double average = calculateAverage(grade1, grade2, grade3);

    cout << "Student: " << studentName << endl;
    cout << "Grade 1: " << grade1 << endl;
    cout << "Grade 2: " << grade2 << endl;
    cout << "Grade 3: " << grade3 << endl;
    cout << "Average: " << average << endl;

    return 0;
}
