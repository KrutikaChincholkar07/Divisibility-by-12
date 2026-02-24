#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, temp;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    bool div3 = (sum % 3 == 0);
    bool div4 = ((num % 100) % 4 == 0);

    if (div3 && div4)
        cout << num << " is divisible by 12";
    else
        cout << num << " is not divisible by 12";

    return 0;
}
