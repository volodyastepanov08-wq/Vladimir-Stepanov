#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void BestSport(string& sport)
{

    ofstream fout("Sport.txt");
    fout << sport << endl;
    fout.close();

}

void BackgroundСolor(const string& color)
{
    if (color == "red")
    {
        system("color 04");
    }
    else if (color == "blue")
    {
        system("color 03");
    }
    else if (color == "green")
    {
        system("color 02");
    }
    else if (color == "yellow")
    {
        system("color 06");
    }
    else if (color == "white")
    {
        system("color 07");
    }
    else
    {
        system("color 0F"); // по умолчанию
    }
    ofstream fout("Sport.txt", ios::app);
    fout << color << endl;
    fout.close();
}

int main()
{
    setlocale(0, "");
    string sport, color;

    ifstream fin("Sport.txt"); // создание файла

    if (fin.is_open())
    {
        getline(fin, sport);
        getline(fin, color);
        fin.close();
        BackgroundСolor(color);

        cout << "Текущие данные: " << endl;
        cout << "Ваш вид спорта : " << sport << endl;
        cout << "Ваш цвет: " << color << endl;

        char choice;
        cout << "\nХотите изменить данные? (y/n): ";
        cin >> choice;
        cin.ignore();

        if (choice == 'y' || choice == 'Y')
        {

            cout << "\nВведите новый спорт: ";
            getline(cin, sport);
            cout << "\nВведите цвет (red, blue, green, yellow, white): ";
            getline(cin, color);

            ofstream fout("Sport.txt");
            if (fout.is_open())
            {
                fout << sport << endl << color << endl;
                fout.close();
                cout << "Данные обновлены!" << endl;
            }
        }
    }
    else
    {
        cout << "Файл не найден, введите цвет и спорт: \n";
        cout << "\nВведите новый спорт: ";
        getline(cin, sport);
        cout << "\nВведите цвет (red, blue, green, yellow, white): ";
        getline(cin, color);
    }
    BackgroundСolor(color);

    return 0;
}
