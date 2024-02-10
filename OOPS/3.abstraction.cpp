#include <iostream>
using namespace std;
class abstract
{
private:
    int a;
    int b;

public:
    int sum(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a + b;
    }
};

int main()
{
    abstract ab1;
    ab1.sum(4,5);
    ab1.display();
}