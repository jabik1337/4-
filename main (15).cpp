#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string str = "refer"; // Рядок з варіанта B-10[cite: 8]
    stack<char> charStack;

    // Заносимо всі символи рядка у стек
    for (int i = 0; i < str.length(); i++) {
        charStack.push(str[i]);
    }

    bool isPalindrome = true;

    // Порівнюємо символи з оригінального рядка зі стеком (який видає їх у зворотному порядку)
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != charStack.top()) {
            isPalindrome = false;
            break;
        }
        charStack.pop();
    }

    cout << "Рядок: \"" << str << "\"" << endl;
    if (isPalindrome) {
        cout << "Результат: Рядок є паліндромом." << endl;
    } else {
        cout << "Результат: Рядок НЕ є паліндромом." << endl;
    }

    return 0;
}