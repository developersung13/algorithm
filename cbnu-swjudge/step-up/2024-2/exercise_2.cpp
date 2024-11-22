#include <iostream>
using namespace std;

class Student {
public:
    string depart;
    string id;
   void setDepartment(string s) { depart = s; }
   void setId(string s) { id = s; }
   string getDepartment() { return depart; }
};

int main() {
    Student s;
    s.setDepartment("Software");
    s.setId("2024000001");
    cout << s.getDepartment() << endl;
    cout << s.id << endl;
    return 0;
}