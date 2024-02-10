#include <iostream>
using namespace std;

int main()
{
    int amount;
    cin >> amount;
    int n1, n20, n50, n100;
    n1 = n20 = n50 = n100 = 0;

    switch (amount>=100)
    {
    case 1:
        n100 = amount/100;
        amount = amount%100;
        cout<<"No of 100 rupee note: "<<n100<<endl;
        break;
    }
    switch (amount>=50)
    {
    case 1:
        n50 = amount/50;
        amount = amount%50;
        cout<<"No of 50 rupee note: "<<n50<<endl;
        break;
    }
    switch (amount>=20)
    {
    case 1:
        n20 = amount/20;
        amount = amount%20;
        cout<<"No of 20 rupee note: "<<n20<<endl;
        break;
    }
    switch (amount>=1)
    {
    case 1:
        n1 = amount/1;
        amount = amount%1;
        cout<<"No of 1 rupee note: "<<n1<<endl;
        break;
    }
}