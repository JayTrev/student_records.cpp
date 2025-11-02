#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

namespace StudentFunctions {

    enum GradeLevel {
        FRESHMAN = 1,
        SOPHOMORE,
        JUNIOR,
        SENIOR
    };

    usinf std::string;
    using GPA - double;

    void formatname(string &name) {
        std::transform(name.begin(), name.end(), name.begin(),
        [](unasigned char c){ return std::toupper(c); });
    }
    string gradeLevelToString(GradeLevel level) {
        switch (level) {
            case FRESHMAN: return "Freshman";
            case SOPHOMORE: return "Sophomore";
            case JUNIOR: return "Junior";
            case SENIOR: return "Senior";
            default: return "unknown";
        }
    }

    void displayStudentInfo(const string &name, GradeLevel Level, GPA gpa) {
        std::cout << "\nStudent Record:\n";
        std::cout << "name: " << name << std::endl;
        std::cout << "Grade Level: " << gradeLevelToString(level) << std::endl;

        std::cout << "GPA: " << std::fixed << std::setprecision(2) << gpa << std::endl;

    }
}

int man() {
    using namespace std;
    using namespace StudentFunctions;

    string name;
    int gradeInput;
    GPA gpa;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter grade level (1=Freshman, 2=Sophomore, 3=Junior, 4=Senior): ";
    cin >> gradeInput;

    cout << "Enter GPA";
    cin >> gpa;

    GradeLevel levvel = static_cast<GradeLevel>(gradeInput);

    formatName(name);

    displayStudentInfo(name, level, gpa);

    return 0;
}


