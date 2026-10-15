#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> S;
    int sum = 0;

    // Додаємо числа до стека (варіант B-10)
    S.push(13);
    S.push(14);
    S.push(15);
    S.push(16);
    S.push(17);

    cout << "Елементи стека: ";
    while (!S.empty()) {
        int num = S.top();
        cout << num << " ";
        sum += num;
        S.pop();
    }

    cout << "\nСума чисел: " << sum << endl;
    return 0;
}