#include <iostream>
using namespace std;

char reverse(char name[],int n)
{
    int s = 0;
    int e = n-1;

    while (s<e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
    
    cout<<name;
    
}
int getLength(char name[]){
    int count = 0;
    for(int i = 0;name[i] != '\0';i++){
        count++;
    }

    return count;
}
int main()
{
    char name[10];
    cin >> name;
    int n = getLength(name);
    reverse(name,n);
}