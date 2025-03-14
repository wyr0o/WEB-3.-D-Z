#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int num1, num2;
    cout << "Введите целое число: ";
    cin >> num1;
    cout << "Введите целое число: ";
    cin >> num2;

    if (num1 < 0 || num1 > 99 || num2 < 0 || num2 > 99) {
        cout << "Ошибка! Одно из чисел вне диапазона!" << endl;
        return 0;
    }

    string num1Str = "";
    string num2Str = "";

    int tens1 = num1 / 10;
    int ones1 = num1 % 10;
    int tens2 = num2 / 10;
    int ones2 = num2 % 10;


    if (tens1 == 1) {
        if (ones1 == 0) num1Str = "десять";
        else if (ones1 == 1) num1Str = "одиннадцать";
        else if (ones1 == 2) num1Str = "двенадцать";
        else if (ones1 == 3) num1Str = "тринадцать";
        else if (ones1 == 4) num1Str = "четырнадцать";
        else if (ones1 == 5) num1Str = "пятнадцать";
        else if (ones1 == 6) num1Str = "шестнадцать";
        else if (ones1 == 7) num1Str = "семнадцать";
        else if (ones1 == 8) num1Str = "восемнадцать";
        else if (ones1 == 9) num1Str = "девятнадцать";
    }
    else {
        if (tens1 == 2) num1Str = "двадцать";
        else if (tens1 == 3) num1Str = "тридцать";
        else if (tens1 == 4) num1Str = "сорок";
        else if (tens1 == 5) num1Str = "пятьдесят";
        else if (tens1 == 6) num1Str = "шестьдесят";
        else if (tens1 == 7) num1Str = "семьдесят";
        else if (tens1 == 8) num1Str = "восемьдесят";
        else if (tens1 == 9) num1Str = "девяносто";

        if (ones1 == 1) num1Str += " один";
        else if (ones1 == 2) num1Str += " два";
        else if (ones1 == 3) num1Str += " три";
        else if (ones1 == 4) num1Str += " четыре";
        else if (ones1 == 5) num1Str += " пять";
        else if (ones1 == 6) num1Str += " шесть";
        else if (ones1 == 7) num1Str += " семь";
        else if (ones1 == 8) num1Str += " восемь";
        else if (ones1 == 9) num1Str += " девять";
    }

    if (num1 == 0) num1Str = "ноль";



    if (tens2 == 1) {
        if (ones2 == 0) num2Str = "десять";
        else if (ones2 == 1) num2Str = "одиннадцать";
        else if (ones2 == 2) num2Str = "двенадцать";
        else if (ones2 == 3) num2Str = "тринадцать";
        else if (ones2 == 4) num2Str = "четырнадцать";
        else if (ones2 == 5) num2Str = "пятнадцать";
        else if (ones2 == 6) num2Str = "шестнадцать";
        else if (ones2 == 7) num2Str = "семнадцать";
        else if (ones2 == 8) num2Str = "восемнадцать";
        else if (ones2 == 9) num2Str = "девятнадцать";
    }
    else {
        if (tens2 == 2) num2Str = "двадцать";
        else if (tens2 == 3) num2Str = "тридцать";
        else if (tens2 == 4) num2Str = "сорок";
        else if (tens2 == 5) num2Str = "пятьдесят";
        else if (tens2 == 6) num2Str = "шестьдесят";
        else if (tens2 == 7) num2Str = "семьдесят";
        else if (tens2 == 8) num2Str = "восемьдесят";
        else if (tens2 == 9) num2Str = "девяносто";
        if (ones2 == 1) num2Str += " один";
        else if (ones2 == 2) num2Str += " два";
        else if (ones2 == 3) num2Str += " три";
        else if (ones2 == 4) num2Str += " четыре";
        else if (ones2 == 5) num2Str += " пять";
        else if (ones2 == 6) num2Str += " шесть";
        else if (ones2 == 7) num2Str += " семь";
        else if (ones2 == 8) num2Str += " восемь";
        else if (ones2 == 9) num2Str += " девять";
    }
    if (num2 == 0) num2Str = "ноль";

    if (num1 == num2) cout << num1Str << " равно " << num2Str << endl;
    else if (num1 < num2) cout << num1Str << " меньше чем " << num2Str << endl;
    else cout << num1Str << " больше чем " << num2Str << endl;

    return 0;
}