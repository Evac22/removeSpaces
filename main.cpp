#include "pch.h"
#include <iostream>
#include <cstring>

using namespace std;

// Функция для удаления множественных пробелов.
void removeSpaces(char* str);

int main()
{
	// Тест 1: Проверка сравнения двух одинаковых строк
	char str1[] = "Hello   World";
	char str2[] = "Hello World";
	removeSpaces(str1);
	removeSpaces(str2);
	int result1 = strcmp(str1, str2);
	if (result1 == 0)
	{
		cout << "Test 1 passed: The strings are equal" << endl;
	}
	else
	{
		cout << "Test 1 failed: The strings are not equal" << endl;
	}

	// Тест 2: Проверка сравнения двух разных строк
	char str3[] = "Hello World";
	char str4[] = "Goodbye World";
	removeSpaces(str3);
	removeSpaces(str4);
	int result2 = strcmp(str3, str4);
	if (result2 > 0)
	{
		cout << "Test 2 passed: The first string is less than the second one" << endl;
	}
	else
	{
		cout << "Test 2 failed: The first string is not less than the second one" << endl;
	}

	// Тест 3: Проверка сравнения двух строк с одним символом
	char str5[] = "a";
	char str6[] = "a";
	removeSpaces(str5);
	removeSpaces(str6);
	int result3 = strcmp(str5, str6);
	if (result3 == 0)
	{
		cout << "Test 3 passed: The strings are equal" << endl;
	}
	else
	{
		cout << "Test 3 failed: The strings are not equal" << endl;
	}

	// Тест 4: Проверка сравнения двух пустых строк
	char str7[] = "";
	char str8[] = "";
	removeSpaces(str7);
	removeSpaces(str8);
	int result4 = strcmp(str7, str8);
	if (result4 == 0)
	{
		cout << "Test 4 passed: The strings are equal" << endl;
	}
	else
	{
		cout << "Test 4 failed: The strings are not equal" << endl;
	}
	 
	
	return 0;
}

void removeSpaces(char* str)
{
    int i, j;
    bool space = false;
    for (i = 0, j = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            if (!space)
            {
                space = true;
                str[j++] = str[i];
            }
        }
        else
        {
            space = false;
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

