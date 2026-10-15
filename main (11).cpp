#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> S;
    int count = 0;

    // Додаємо рядки до стека
    S.push("dates");
    S.push("figs");
    S.push("raisins");

    // Допоміжний стек для збереження оригінального порядку
    stack<string> tempStack;

    // Витягуємо елементи, підраховуємо символи та переносимо у тимчасовий стек
    while (!S.empty()) {
        string str = S.top();
        count += str.length();
        tempStack.push(str);
        S.pop();
    }

    // Повертаємо елементи назад у початковий стек
    while (!tempStack.empty()) {
        S.push(tempStack.top());
        tempStack.pop();
    }

    cout << "Загальна кількість символів: " << count << endl;
    return 0;
}