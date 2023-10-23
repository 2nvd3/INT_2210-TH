#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

struct Student {
    int ID;
    string Name;
    string Class;
};

class University {
public:
    void Insert(int ID, string Name, string Class) {
        Student s = {ID, Name, Class};
        students[ID] = s;
    }
    void Delete(int ID) {
        students.erase(ID);
    }
    string Infor(int ID) {
        if (students.find(ID) != students.end()) {
            return students[ID].Name + "," + students[ID].Class;
        } else {
            return "NA,NA";
        }
    }

private:
    unordered_map<int, Student> students;
};

int main() {
    University university;
    university.Insert(1,"Tuan","K61CS");
    university.Insert(2,"Vinh","K43C");
    cout << university.Infor(3) << endl;
    cout << university.Infor(2) << endl;
    university.Delete(2);
    cout << university.Infor(2) << endl;
}
