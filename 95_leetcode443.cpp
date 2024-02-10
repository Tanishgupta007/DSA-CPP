#include <iostream>
#include <vector>
#include <string>
using namespace std;

int compress(vector<char> &chars)
{
    int ansIndex = 0;
    int i = 0;

    int n = chars.size();

    while (i < n)
    {
        int j = i + 1;

        while (j < n && chars[i] == chars[j])
        {
            j++;
        }
        chars[ansIndex++] = chars[i];
        int count = j - i;

        if (count > 1)
        {
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansIndex++] = ch;
            }
        }

        i = j;
    }
    return ansIndex;
}
int main()
{

    vector<char> chars = {'a', 'b', 'b', 'b', 'b', 'b', 'b'};

    int newSize = (compress(chars));

    for (int i = 0; i < newSize; i++)
    {
        cout<<chars[i]<<" ";
    }
    
}