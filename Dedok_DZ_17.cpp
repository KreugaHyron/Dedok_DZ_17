#include <iostream>
using namespace std;

//к заданию 1
void copyArray(int source[], int destination1[], int destination2[], int size) {
    for (int i = 0; i < size / 2; i++) {
        destination1[i] = source[i];
    }
    for (int i = size / 2; i < size; i++) {
        destination2[i - size / 2] = source[i];
    }
}

//к заданию 2
void sumArrays(const int array1[], const int array2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = array1[i] + array2[i];
    }
}

//к заданию 3
double calculateAverage(const double expenses[], int size) {
    double sum = 0.0;

    for (int i = 0; i < size; i++) {
        sum += expenses[i];
    }

    return sum / size;
}
double calculateTotal(const double expenses[], int size) {
    double sum = 0.0;

    for (int i = 0; i < size; i++) {
        sum += expenses[i];
    }

    return sum;
}
void findExceedingDays(const double expenses[], const std::string days[], int size) {
    cout << "Дни, когда сумма расхода превысила 100 долларов:" << "\n";

    for (int i = 0; i < size; i++) {
        if (expenses[i] > 100.0) {
            cout << days[i] << "\n";
        }
    }
}
int main()
{
    setlocale(LC_ALL, "RUS");
    //Task_1
    int source[10] = {4,8,6,3,90,2323,455,677,12,45};
    int destination1[5];
    int destination2[5];
    copyArray(source, destination1, destination2, 10);

    cout << "Первый массив: ";
    for (int i = 0; i < 5; i++) {
        cout << destination1[i] << " ";
    }
    cout << "\n";

    cout << "Второй массив: ";
    for (int i = 0; i < 5; i++) {
        cout << destination2[i] << " ";
    }
    cout << "\n";
    cout << "\n";

    //Task_2
    int array1[] = {45,30,20,78,90 };
    int array2[] = { 23,18,94,69,80 };
    int result[5];

    sumArrays(array1, array2, result, 5);

    cout << "Результат: ";
    for (int i = 0; i < 5; i++) {
        cout << result[i] << " ";
    }
    cout << "\n";
    cout << "\n";

    //Task_3
    const int NUM_DAYS = 7;
    double expenses[NUM_DAYS];
    string days[NUM_DAYS] = { "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье" };

    cout << "Введите данные о расходах за неделю:" << std::endl;
    for (int i = 0; i < NUM_DAYS; i++) {
        cout << "Введите расход в долларах для " << days[i] << ": ";
        cin >> expenses[i];
    }
    double average = calculateAverage(expenses, NUM_DAYS);
    cout << "Средняя потраченная сумма за неделю: $" << average << "\n";

    double total = calculateTotal(expenses, NUM_DAYS);
    cout << "Общая сумма, потраченная за неделю: $" << total << "\n";
    findExceedingDays(expenses, days, NUM_DAYS);
}
