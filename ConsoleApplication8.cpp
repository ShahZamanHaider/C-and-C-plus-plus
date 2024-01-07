#include<iostream>
#include<Windows.h>
#include<conio.h>


using namespace std;

void gotoxy(int x, int y) {
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}

void Color(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main() {
    int i, j;

    i = 1;
    j = 2;

    int c = 1;

    while (!_kbhit()) {

        if (i == 100) {

            i = 1;
            j++;

        }

        system("cls");
        Color(c);
        gotoxy(i, j);
        cout << "Paragraphs are the building blocks of papers";

        i++;
        Sleep(50);
        
       

    }


}