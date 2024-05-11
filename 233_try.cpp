#include <iostream>
using namespace std;

class Heap
{
public:
    int arr[100];
    int size = 0;

    void insert(int d)
    {
        size++;
        int index = size;
        arr[index] = d;

        while (index > 1)
        {
            int parentIndex = index / 2;

            if (arr[parentIndex] < arr[index])
            {
                swap(arr[parentIndex], arr[index]);
                index = parentIndex;
            }
            else
            {
                return;
            }
        }
    }
    void deleteFromHeap(){
        if(size == 0){
            cout<<"Heap is empty";
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while(i < size){
            int left = 2*i;
            int right = 2*i+1;

            if(left < size && arr[left] > arr[i]){
                swap(arr[i], arr[left]);

                i = left;
            }
            if(right < size && arr[right] > arr[i]){
                swap(arr[i] , arr[right]);

                i = right;
            }

            else{
                return ;
            }

            
        }
    }
    void print(){
        for (int i = 1; i <= size; i++)
        {
            cout<<arr[i]<<" ";
        }    cout<<endl;

        
    }
};



int main()
{
    Heap h;
    h.insert(3);
    h.insert(4);
    h.insert(5);
    h.insert(6);

    h.print();

    h.deleteFromHeap();

    h.print();
}