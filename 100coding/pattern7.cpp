#include<iostream>
using namespace std;

int main()
{
    int size = 16;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            if (i==0 || i==1 || i== size-1)
            {
                cout<<"*";
            }else
            {
                if (j == 0 || j == i)
                {
                    cout<<"*";
                }else
                {
                    cout<<" ";
                }
                
                
            }
            
            
        }
        cout<<endl;
    }
    
}