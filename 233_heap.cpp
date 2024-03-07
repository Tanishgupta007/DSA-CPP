#include <iostream>
#include<queue>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;

    void insert(int val)
    {
        size += 1;
        int index = size;

        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deleteHeap()
    {
        if (size == 0)
        {
            cout << "Heap is already empty!";
            return;
        }

        arr[1] = arr[size];
        size--;

        // check correct position
        int i = 1;

        while (i < size)
        {
            int left = 2 * i;
            int right = 2 * i + 1;

            if (left < size && arr[left] > arr[i])
            {
                swap(arr[i], arr[left]);
                i = left;
            }
            else if (right < size && arr[right] > arr[i])
            {
                swap(arr[i], arr[right]);
                i = right;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    int size = n;

    while (size > 1)
    {
        // step1 : swapping
        swap(arr[1], arr[size]);
        size--;

        // step2: correct position (using heapify function)

        heapify(arr, size, 1);
    }
}

int main()
{
    heap h;
    h.insert(54);
    h.insert(53);
    h.insert(55);
    h.insert(52);
    h.insert(50);

    h.print();
    cout << endl;
    h.deleteHeap();
    h.print();

    // heapify

    int arr[6] = {-1, 54, 53, 55, 52, 50};

    int n = 5;

    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    cout << endl
         << "Printing heapify: " << endl;
    // print
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    heapSort(arr, n);
    cout << endl
         << "Printing sorted heap: " << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }


    //priority Queue - by default : max heap
    priority_queue<int> pq;

    pq.push(4);
    pq.push(5);
    pq.push(2);
    pq.push(3);

    cout<<endl<<"Element at top : "<<pq.top()<<endl;
    pq.pop();
    cout<<endl<<"Element at top : "<<pq.top()<<endl;

    //min heap
    cout<<"Now printing min heap: "<<endl;
    priority_queue<int, vector<int>, greater<int>> minheap;

    minheap.push(5);
    minheap.push(4);
    minheap.push(2);
    minheap.push(3);

    
    cout<<endl<<"Element at top : "<<minheap.top()<<endl;
    minheap.pop();
    cout<<endl<<"Element at top : "<<minheap.top()<<endl;


}

// #include<iostream>
// using namespace std;

// class heap{
//     public:
//     int arr[100];
//     int size = 0;

//     void insert(int val){

//         size+=1;
//         int index = size;

//         arr[index] = val;

//         while (index > 1)
//         {
//             int parent = index/2;

//             if(arr[parent] < arr[index]){
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             }else{
//                 return ;
//             }
//         }

//     }

//     void deleteHeap(){
//         arr[1] = arr[size];
//         size--;

//         //check correct position
//         int i = 1;
//         while(i < size){
//             int left = 2*i;
//             int right = 2*i+1;

//             if(left < size && arr[left] > arr[i]){
//                 swap(arr[i] , arr[left]);
//                 i = left;
//             }else if (right < size && arr[right] > arr[i])
//             {
//                 swap(arr[i] , arr[right]);
//                 i = right;
//             }
//             else{
//                 return;
//             }
//         }
//     }
//     void print(){
//         for (int i = 1; i <= size; i++)
//         {
//             cout<<arr[i]<<" ";
//         }cout<<endl;

//     }

// };

// void heapify(int arr[], int n, int i){

//     int largest = i;
//     int left = 2*i;
//     int right = 2*i+1;

//     if(left < n && arr[left] > arr[largest]){
//         largest = left;
//     }
//     if(right < n && arr[right] > arr[largest]){
//         largest = right;
//     }

//     if(largest != i){
//         swap(arr[i], arr[largest]);
//         heapify(arr, n, largest);
//     }
// }

// int main()
// {
//     heap h;
//     h.insert(50);
//     h.insert(55);
//     h.insert(53);
//     h.insert(52);
//     h.insert(54);
//     h.print();

//     h.deleteHeap();
//     h.print();

//     int arr[6] = {-1,54,53,55,52,50};
//     int n = 5; //0th index is not considered;
//     for (int i = n/2; i > 0; i--)
//     {
//         heapify(arr, n, i);
//     }
//     cout<<endl;

//     for (int i = 1; i <= n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// -------------------------------------------------------

// #include <iostream>
// using namespace std;

// class heap
// {

// public:
//     int arr[100];
//     int size = 0; // nothing to insert in 0th index, starts from 1st index

//     void insert(int val)
//     {
//         size = size + 1;
//         int index = size;

//         arr[index] = val;

//         while (index > 1) // till 1st element
//         {
//             int parent = index / 2;

//             if (arr[parent] < arr[index])
//             {
//                 swap(arr[parent], arr[index]);
//                 index = parent; // after swapping the inserted will be now at root and parent is swapped
//             }
//             else
//             {
//                 return;
//             }
//         }
//     }

//     void deletefromHeap()
//     {
//         if (size == 0)
//         {
//             cout << "Nothing to delete !!!";
//             return;
//         }

//         arr[1] = arr[size]; // copy last element of array to first
//         size--;             // reduce the size by one as we are deleting the last element

//         // take root node to its correct position
//         int i = 1;
//         while (i < size)
//         {
//             int leftIndex = 2 * i;
//             int rightIndex = 2 * i + 1;

//             if (leftIndex < size && arr[leftIndex] > arr[i])
//             {
//                 swap(arr[i], arr[leftIndex]);
//                 i = leftIndex;
//             }
//             else if (rightIndex < size && arr[rightIndex] > arr[i])
//             {
//                 swap(arr[i], arr[rightIndex]);
//                 i = rightIndex;
//             }
//             else
//             {
//                 return;
//             }
//         }
//     }

//     void print()
//     {
//         for (int i = 1; i <= size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     heap h;
//     h.insert(50);
//     h.insert(55);
//     h.insert(53);
//     h.insert(52);
//     h.insert(54);

//     h.print();
//     cout<<endl;
//     h.deletefromHeap();

//     h.print();
// }
