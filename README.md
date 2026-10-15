#Практична робота №4: Стек
**Виконав:** студент групи 4-сом Нефедова ксенія (Варіант № 10)

##  Завдання.
**Завдання:** 
<img width="651" height="67" alt="Знімок екрана 2026-10-15 о 09 20 13" src="https://github.com/user-attachments/assets/65577cc6-46ed-429c-86de-bf0eabd62e97" />
<img width="646" height="56" alt="Знімок екрана 2026-10-15 о 09 21 05" src="https://github.com/user-attachments/assets/b0f71b1f-edbd-440a-b50d-0965e358228f" />

### 💻 Код програми:
```cpp
#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    // Завдання 1 
    cout << "=== Завдання 1 ===" << endl;
    stack<string> S1;
    int count1 = 0;

    S1.push("dates");
    S1.push("figs");
    S1.push("raisins");

    stack<string> tempStack1;

    while (!S1.empty()) {
        string str = S1.top();
        count1 += str.length();
        tempStack1.push(str);
        S1.pop();
    }

    while (!tempStack1.empty()) {
        S1.push(tempStack1.top());
        tempStack1.pop();
    }

    cout << "Загальна кількість символів: " << count1 << endl << endl;

    //Завдання 2
    cout << "=== Завдання 2 ===" << endl;
    stack<int> S2;
    int sum2 = 0;

    S2.push(13);
    S2.push(14);
    S2.push(15);
    S2.push(16);
    S2.push(17);

    cout << "Елементи стека: ";
    while (!S2.empty()) {
        int num = S2.top();
        cout << num << " ";
        sum2 += num;
        S2.pop();
    }
    cout << "\nСума чисел: " << sum2 << endl << endl;

    //Завдання 3
    cout << "=== Завдання 3 ===" << endl;
    stack<int> S3;
    int count3 = 0;
    int foundCount3 = 0;
    int findNum3 = 12;

    S3.push(4);
    S3.push(8);
    S3.push(12);
    S3.push(16);
    S3.push(20);
    S3.push(24);

    cout << "Витягнуті елементи зі стека: ";
    while (!S3.empty()) {
        int num = S3.top();
        S3.pop();
        cout << num << " ";
        count3++;

        if (num == findNum3) {
            foundCount3++;
            break;
        }
    }
    cout << endl;

    if (foundCount3 > 0) {
        cout << "Число " << findNum3 << " знайдено!" << endl;
    } else {
        cout << "Число " << findNum3 << " не знайдено." << endl;
    }
    cout << "Кількість витягнутих елементів: " << count3 << endl << endl;

    // Завдання 4 
    cout << "=== Завдання 4 ===" << endl;
    stack<int> S4;
    int maxSize4 = 13;

    for (int i = 0; i < maxSize4; i++) {
        int num = 15 + rand() % (75 - 15 + 1);
        S4.push(num);
    }

    cout << "Згенеровані числа у стеку: ";
    stack<int> tempStack4 = S4;
    while (!tempStack4.empty()) {
        cout << tempStack4.top() << " ";
        tempStack4.pop();
    }
    cout << endl;

    int filterSum4 = 0;
    int filterCount4 = 0;

    while (!S4.empty()) {
        int num = S4.top();
        S4.pop();

        if (num >= 25 && num <= 55 && num % 2 != 0) {
            filterSum4 += num;
            filterCount4++;
        }
    }

    cout << "Кількість чисел, що підходять під критерій: " << filterCount4 << endl;
    if (filterCount4 > 0) {
        double average4 = static_cast<double>(filterSum4) / filterCount4;
        cout << "Середнє значення відібраних чисел: " << average4 << endl;
    } else {
        cout << "Жодне число не відповідає критерію фільтрації." << endl;
    }
    cout << endl;

    //Завдання 5 
    cout << "=== Завдання 5 ===" << endl;
    string str5 = "refer";
    stack<char> charStack5;

    for (int i = 0; i < str5.length(); i++) {
        charStack5.push(str5[i]);
    }

    bool isPalindrome5 = true;

    for (int i = 0; i < str5.length(); i++) {
        if (str5[i] != charStack5.top()) {
            isPalindrome5 = false;
            break;
        }
        charStack5.pop();
    }

    cout << "Рядок: \"" << str5 << "\"" << endl;
    if (isPalindrome5) {
        cout << "Результат: Рядок є паліндромом." << endl;
    } else {
        cout << "Результат: Рядок НЕ є паліндромом." << endl;
    }

    return 0;
}
```
