#include <string>
using namespace std;


class Student {
public: 
    int rollNo; 
    string stdName;
    string Branch; 
    
};

int main()
{
    Student std;

  
    std.rollNo = 01;
    std.stdName = "Arhat Petkar";
    std.Branch = "EXTC";

    
    cout << "Student's Roll No.: " << std.rollNo << "\n";
    cout << "Student's Name: " << std.stdName << "\n";
    cout << "Student's Branch: " << std.Branch << "\n";

    return 0;
