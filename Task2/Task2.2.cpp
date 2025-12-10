#include <iostream>

using namespace std;

long long factorial(int n) {
    if (n < 0) return -1;
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    setlocale(LC_ALL, "Russian");
    for (int i = 1; i <= 10; ++i) {
        cout << i << " ";
        if (i == 5)
        {
            break;
        }
    }
    cout << endl;
    int num = 5;
    long long result = factorial(num);
    cout << "Факториал " << num << " это " << result << endl;


    return 0;
}
}