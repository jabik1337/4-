#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> S;
    int count = 0;
    int foundCount = 0;
    int findNum = 12; // Задане число для пошуку з варіанта B-10

    // Додаємо елементи до стека
    S.push(4);
    S.push(8);
    S.push(12);
    S.push(16);
    S.push(20);
    S.push(24);

    cout << "Витягнуті елементи з стека: ";
    while (!S.empty()) {
        int num = S.top();
        S.pop();
        cout << num << " ";
        count++;

        if (num == findNum) {
            foundCount++;
            break; // Зупиняємо цикл, коли знайшли шукане число
        }
    }
    cout << endl;

    // Виведення результатів
    if (foundCount > 0) {
        cout << "Число " << findNum << " знайдено!" << endl;
    } else {
        cout << "Число " << findNum << " не знайдено." << endl;
    }
    
    cout << "Кількість витягнутих елементів: " << count << endl;

    return 0;
}