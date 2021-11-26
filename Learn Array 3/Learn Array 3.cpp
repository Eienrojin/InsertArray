//11.159.Вставить в массив : а)число 10 после второго элемента; б)число 100 после m - го элемента.

#include <iostream>
using namespace std;

//variables
int length = 0;
int* mass;
int selectNum = 0;

//functions
void initLength();
void fillArray();
void insertTenAndHundred();
void deleteArr();

int main()
{
    setlocale(LC_ALL, "rus");

    initLength();
    fillArray();
    insertTenAndHundred();
    deleteArr();
}

void initLength()
{
    cout << "Введите длину массива" << endl;
    cin >> length;
}

void fillArray()
{
    mass = new int[length];

    cout << "Числа массива: ";
        for (int i = 0; i < length; i++)
        {
            mass[i] = rand() % 30;
            cout << mass[i] << "|";
        }
}

void insertTenAndHundred()
{
    mass[1] = 10;

    cout << endl  << "Введите число до " << length << " чтобы заменить его на 100" << endl;
    cin >> selectNum;

    mass[selectNum] = 100;

    cout << "Измененный массив: ";
        for (int i = 0; i < length; i++)
        {
            cout << mass[i] << "|";
        }
}

void deleteArr()
{
    delete[] mass;
    cout << "\nМассив удалён!";
}