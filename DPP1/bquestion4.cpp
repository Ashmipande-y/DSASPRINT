// ### **4. Write a program to input total minutes and convert it into hours and minutes.**

// (Eg: 130 → 2 hours 10 minutes)
#include <iostream>
using namespace std;
int main() {
    int m;
    cin >> m;
    cout << m / 60 << " " << m % 60;
}
