#include <iostream>
using namespace std;

class student
{
public:
    string name = "Tanish gupta";
    int id = 57;
};
int main()
{
    student s1;
    cout << s1.name;
    cout << s1.id;
}