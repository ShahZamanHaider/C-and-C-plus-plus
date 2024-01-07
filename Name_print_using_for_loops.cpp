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

int main() {
    int i, j;


    // S
    for (i = 1, j = 1; i <= 6; i++) {
        
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 1, j = 1; j <= 4; j++) {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 1, j = 4; i <= 6; i++) {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 6, j = 4; j <= 6; j++) {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 6, j = 6; i >= 1; i--) {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    // H
    for (i = 9, j = 1; j <= 6; j++) {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 9, j = 4; i <= 13; i++) {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 14, j = 1; j <= 6; j++) {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    // A
    for (i = 18, j = 1; j <= 6; j++)
    {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 18, j = 1; i <= 24; i++)
    {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 24, j = 1; j <= 6; j++)
    {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 18, j = 4; i <= 24; i++)
    {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }


    //H
    for (i = 28, j = 1; j <= 6; j++) {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 28, j = 4; i <= 34; i++) {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 34, j = 1; j <= 6; j++) {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }



    //Z

    for (i = 40, j = 1; i <= 46; i++) {

        Sleep(100);
        gotoxy(i, j);
        cout << "*";

    }

    for (i = 47, j = 1; i >= 1, j <= 7; i--, j++) {

        Sleep(100);
        gotoxy(i, j);
        cout << "*";

    }

    for (i = 42, j = 7; i <= 49; i++) {

        Sleep(100);
        gotoxy(i, j);
        cout << "*";

    }

    // A
    for (i = 53, j = 1; j <= 6; j++)
    {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 53, j = 1; i <= 59; i++)
    {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 59, j = 1; j <= 6; j++)
    {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 53, j = 4; i <= 59; i++)
    {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }


    //M

    for (i = 63, j = 1; j <= 6; j++)
    {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 63, j = 1; i <= 66, j <= 4; i++, j++) {

        Sleep(100);
        gotoxy(i, j);
        cout << "*";

    }

    for (i = 66, j = 4; i <= 69, j >= 1; i++, j--) {

        Sleep(100);
        gotoxy(i, j);
        cout << "*";

    }

    for (i = 69, j = 1; j <= 6; j++)
    {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }



    // A
    for (i = 74, j = 1; j <= 6; j++)
    {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 74, j = 1; i <= 80; i++)
    {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 80, j = 1; j <= 6; j++)
    {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 74, j = 4; i <= 80; i++)
    {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    //N

    for (i = 83, j = 1; j <= 6; j++)
    {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }

    for (i = 83, j = 1; i <= 88; i++, j++) {

        Sleep(100);
        gotoxy(i, j);
        cout << "*";

    }

    for (i = 88, j = 6; j >= 1; j--)
    {
        Sleep(100);
        gotoxy(i, j);
        cout << "*";
    }


    _getch();
    
    return 0;
}
