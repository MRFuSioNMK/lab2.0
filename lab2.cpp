#include<iostream>

using namespace std;

//// Begin 14
int main()
{
    setlocale(LC_ALL, "Ukranian");

    cout<< "Задача 14 \n"<<endl;

    float A, B, C, result;//Целочисленная переменная A,B,C

    cout<< " A = ";// Показ в консоли A = 
    cin>> A;//Считывает данные с консоли 
    cout<< " B = ";// Показ в консоли B =
    cin>> B;//Считывает данные с консоли
    cout<< " C = ";// Показ в консоли C =
    cin>> C;//Считывает данные с консоли

    float a = C - A, b = B - C;//temporary 
    result = a * b;
    cout<< " AC * BC " << a * b <<endl;// Показ в консоли готового уровнения


//// Begin 22

    cout<< "Задача 22 \n"<<endl;

    const double Pi = 3.14;//повторяющие действие 
    float x = 0;//Переменная с плавающей запятой

    cout << "Введiть х(радiан) : ";//Показ в консоли
    cin >> x;//Считывает данные с консоли 

    double Answer = x * ((x * 180) / Pi);//Число с плавающей точкой, ответ
    cout << "Вiдповiдь : " << Answer << " градусiв";//Показ в консоли 
    //Ответ не совпадает с должным из-за отсутствия большего количества знаков после запятой у константы

}
