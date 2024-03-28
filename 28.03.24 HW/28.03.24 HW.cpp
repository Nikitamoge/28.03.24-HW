#include <iostream>
#include <map>
#include <string>

using namespace std;

class Student {
public:
    string name;
    Student(string name) : name(name) {}

    bool operator<(const Student& other) const {
        return name < other.name;
    }
};

int main() {
    map<Student, int> students;
    students.insert({ Student("Dima"), 6 });
    students.insert({ Student("Oleg"), 9 });
    students.insert({ Student("David"), 10 });
    students.insert({ Student("Bogdan"), 11 });
    students.insert({ Student("Sasha"), 12 });

    string searchName = "Oleg";
    for (const auto& student : students) {
        if (student.first.name == searchName) {
            cout << student.first.name << " " << student.second << endl;
        }
    }
}
