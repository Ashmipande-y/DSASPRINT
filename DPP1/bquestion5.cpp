// 5. Write a program to input seconds and convert them into hours, minutes, and seconds.
#include <iostream>
using namespace std;

int main() {
    int s;
    cin >> s;
    cout << s / 3600 << " "
         << (s % 3600) / 60 << " "
         << s % 60;
}
