#include <iostream>
#include <stack>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    
    stack<int> S;
    int maxSize = 13; // Максимальний розмір стека для B-10[cite: 8]
    
    // Генерація та додавання 13 випадкових чисел у діапазоні від 15 до 75[cite: 8]
    for (int i = 0; i < maxSize; i++) {
        int num = 15 + rand() % (75 - 15 + 1);
        S.push(num);
    }

    cout << "Згенеровані числа у стеку: ";
    stack<int> temp = S;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    int filterSum = 0;
    int filterCount = 0;

    // Перевірка елементів за критерієм: непарні у межах від 25 до 55[cite: 8]
    while (!S.empty()) {
        int num = S.top();
        S.pop();
        
        if (num >= 25 && num <= 55 && num % 2 != 0) {
            filterSum += num;
            filterCount++;
        }
    }

    cout << "Кількість чисел, що підходять під критерій: " << filterCount << endl;
    
    if (filterCount > 0) {
        double average = static_cast<double>(filterSum) / filterCount;
        cout << "Середнє значення відібраних чисел: " << average << endl;
    } else {
        cout << "Жодне число не відповідає критерію фільтрації." << endl;
    }

    return 0;
}