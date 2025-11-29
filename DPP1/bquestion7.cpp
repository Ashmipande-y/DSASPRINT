// ### **7. Write a program to input the total amount and percentage and find the final discounted value.**

// (Eg: amount=1000, discount=10 → 900)
#include <iostream>
using namespace std;
int main() {
    double amt, d;
    cin >> amt >> d;
    cout << amt - (amt * d / 100);
}
