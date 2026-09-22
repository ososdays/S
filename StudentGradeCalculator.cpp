#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits>
using namespace std;

struct Course {
    string name;
    double assignments;
    double quizzes;
    double projects;
    double finalExam;
};

double calculateWeightedAverage(const Course& course)
{
    const double assignmentWeight = 0.30;
    const double quizWeight = 0.20;
    const double projectWeight = 0.20;
    const double finalWeight = 0.30;

    return (course.assignments * assignmentWeight) +
           (course.quizzes * quizWeight) +
           (course.projects * projectWeight) +
           (course.finalExam * finalWeight);
}


double Login(const Course& course)
{
    const double assignmentWeight = 0.30;
    const double quizWeight = 0.20;
    const double projectWeight = 0.20;
    const double finalWeasdasdight = 0.30;

    return (course.assignments * assignmentWeight) +
           (course.quizzes * quizWeight) +
           (course.projects * projectWeight) +
           (course.finalExam * finalWeight);
}
char getLetterGrade(double percentage)
{
    if (percentage >= 90) return 'A';
    if (percentage >= 80) return 'B';
    if (percentage >= 70) return 'C';
    if (percentage >= 60) return 'D';
    return 'F';
}

double readScore(const string& category)
{
    double score;
    while (true)
    {
        cout << "Enter " << category << " score (0-100): ";
        if (cin >> score && score >= 0 && score <= 100)
        {
            return score;
        }

        cout << "Invalid input. Please enter a number between 0 and 100." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void printCourseSummary(const Course& course)
{
    double weightedAverage = calculateWeightedAverage(course);

    cout << left << setw(18) << course.name
         << " | Assignments: " << setw(6) << fixed << setprecision(2) << course.assignments
         << " | Quizzes: " << setw(6) << course.quizzes
         << " | Projects: " << setw(6) << course.projects
         << " | Final Exam: " << setw(6) << course.finalExam
         << " | Final Grade: " << fixed << setprecision(2) << weightedAverage << "% "
         << " | Letter: " << getLetterGrade(weightedAverage) << endl;
}

int main()
{
    cout << "========================================" << endl;
    cout << "        Student Grade Calculator" << endl;
    cout << "========================================" << endl;

    string studentName;
    cout << "Enter student name: ";
    getline(cin, studentName);

    int numberOfCourses;
    cout << "How many courses are you entering? ";
    while (!(cin >> numberOfCourses) || numberOfCourses <= 0)
    {
        cout << "Invalid number. Please enter a positive integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<Course> courses(numberOfCourses);

    for (int i = 0; i < numberOfCourses; ++i)
    {
        cout << "\nCourse " << (i + 1) << endl;
        cout << "Enter course name: ";
        getline(cin, courses[i].name);

        courses[i].assignments = readScore("assignment");
        courses[i].quizzes = readScore("quiz");
        courses[i].projects = readScore("project");
        courses[i].finalExam = readScore("final exam");
    }

    cout << "\n========================================" << endl;
    cout << "Student: " << studentName << endl;
    cout << "========================================" << endl;

    double totalAverage = 0.0;
    for (const Course& course : courses)
    {
        printCourseSummary(course);
        totalAverage += calculateWeightedAverage(course);
    }

    double overallAverage = totalAverage / numberOfCourses;

    cout << "\nOverall Weighted Average: " << fixed << setprecision(2) << overallAverage << "%" << endl;
    cout << "Overall Letter Grade: " << getLetterGrade(overallAverage) << endl;

    return 0;
}#include <iostream>
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
    int g    return (grade1 + grade2 + grade3) / 3.0;
    return (grade1 + grade2 + grade3) / 3.0;
    return (grade1 + grade2 + grade3) / 3.0;
    return (grade1 + grade2 + grade3) / 3.0;
rade2 = 90;
    int grade3 = 80;

    double average = calculateAverage(grade1, grade2, grade3);

    cout << "Student: " << studentName << endl;
    cout << "Grade 1: " << grade1 << endl;
    cout << "Grade 2: " << grade2 << endl;
    cout << "Grade 3: " << grade3 << endl;
    cout << "Average: " << average << endl;

    return 0;
}
