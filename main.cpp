#include <iostream>

using namespace std;


int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << " Fibonacci sonining indeksini kiriting: ";
    cin >> n;

    if (n < 0) {
        cout << " Manfiy son kiritmang!\n";
        return 1;
    }

    cout << " " << n << "-chi Fibonacci soni: " << fibonacci(n) << endl;
 return 0;
}
