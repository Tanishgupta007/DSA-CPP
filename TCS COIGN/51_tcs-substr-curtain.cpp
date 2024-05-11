#include<iostream> 
#include<string> 
using namespace std;

int main() {
    string str;
    cin >> str;
    int n;
    cin >> n;
    int max = 0, count = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a') {
            count++;
            max = std::max(count, max);
        } else {
            count = 0;
        }
    }
    
    cout << max << endl;
    return 0;
}
