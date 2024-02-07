#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <tchar.h>
#include <string>
#include <ctime>

using namespace std;

//1 Задание
//INT WINAPI _tWinMain(HINSTANCE hInst, HINSTANCE hPrevInst,
//	LPTSTR lpszCmdLine, int nCmdShow)
//{
//	wstring str1 = L"Дмитрий Балашов, 19 лет. Начинающий программист.";
//	wstring str2 = L"Учусь в компьютерной академии ШАГ, специальность Компьютерные науки 2-ой курс ";
//	wstring str3 = L"За 2 года обучения имеется несколько проектов написанных на разных языках программирования и с использованием разных технологий ";
//
//	int avg = (str1.length() + str2.length()+ str3.length())/3;
//	wstring average = to_wstring(avg);
//	MessageBox(
//		0,
//		str1.c_str(),
//		TEXT("Резюме"),
//		MB_OK | MB_ICONINFORMATION);
//	MessageBox(
//		0,
//		str2.c_str(),
//		TEXT("Резюме"),
//		MB_OK | MB_ICONINFORMATION);
//	MessageBox(
//		0,
//		str3.c_str(),
//		average.c_str(),
//		MB_OK | MB_ICONINFORMATION);
//	return 0;
//}


//2 Задание

INT WINAPI _tWinMain(HINSTANCE hInst, HINSTANCE hPrevInst,
	LPTSTR lpszCmdLine, int nCmdShow)
{
	srand(time(0));
    int result;
    int tries = 0;
    do
    {
        tries++;
        int random = rand() % 101;
        wstring randstr = L"Is your number: " + to_wstring(random);
        result = MessageBox(
            0,
            randstr.c_str(),
            TEXT("Number Guess"),
            MB_YESNO | MB_ICONINFORMATION);
        

    } while (result != IDYES);
    wstring triesstr = L"Tries: " + to_wstring(tries);
    MessageBox(
        0,
        triesstr.c_str(),
        TEXT("Number Guess"),
        MB_OK | MB_ICONINFORMATION);
    return 0;
}
