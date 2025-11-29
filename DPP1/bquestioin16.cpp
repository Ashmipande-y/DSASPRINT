// 16. Write a program to input the total number of seconds and convert it into minutes + seconds.
#include <iostream>
using namespace std;
int main() {
    int s;
    cin >> s;
    cout << s / 60 << " " << s % 60;
}
