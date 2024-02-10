#include <iostream>
using namespace std;

class Human
{
public:
    int age, height, weight;

    int getAge()
    {
        return this->age;
    }
    int setWeight(int w)
    {
        this->weight = w;
    }
    int setage(int a)
    {
        this->age = a;
    }
};

class male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male sleeping." << endl;
    }
};

int main()
{
    male obj1;
    obj1.setWeight(12);
    cout << obj1.weight << endl;
    obj1.setage(1);
  
    cout << "age"<<obj1.age << endl;
    cout << obj1.height << endl;
    cout << obj1.color << endl;
    
    obj1.sleep();
}
