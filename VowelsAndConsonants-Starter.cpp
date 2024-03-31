// Starter code for Vowels and Consonants assignment

#include <iostream>
#include <cctype>
#include <bits/stdc++.h>

using namespace std;

// Determines whether parameter is a vowel
bool isVowel(char c)
{
	c = toupper(c);
	return (c == 'A' || c == 'E' || c == 'I'
		|| c == 'O' || c == 'U');
}

// Count vowels in string
int countVowels(char* str)
{
	int counter = 0;
	while (*str) {
        char current = tolower(*str);
        if (current == 'a' ||
            current == 'e' ||
            current == 'i' ||
            current == 'o' ||
            current == 'u') {
            counter++;
        }
        str++;
	}
	return counter;
}


// Count consonants in string
int countConsonants(char* str)
{
	int counter = 0;
	while(*str){
        char current = tolower(*str);
        if(isalpha(current) &&
           current != 'a' &&
           current!='e' &&
           current!='i' &&
           current!='o' &&
           current!='u')
        {
            counter++;
        }
        str++;
	}
	return counter;
}

// JUST FOR DEMO PURPOSE:
int countSpaces(char* str)
{
	int count = 0;
	for (int i = 0; i < strlen(str); i++)
		if (isspace(str[i]))
			count++;

	return count;
}

int main()
{
	const int SIZE = 200;
	char sentence[SIZE];

	cout << "Enter a sentence:  ";
	cin.getline(sentence, SIZE);

	char choice;
	while (toupper(choice) != 'E')
	{
		cout << "\nYour sentence:  " << sentence << endl << endl;

		cout << "A) Count the number of vowels in the string" << endl;
		cout << "B) Count the number of consonants in the string" << endl;
		cout << "C) Count both the vowels and consonants in the string" << endl;
		cout << "D) Enter another string" << endl;
		cout << "E) Exit the program" << endl;
		cin >> choice;

		switch (toupper(choice))
		{
		case 'A':  cout << "There are " << countVowels(sentence) << " vowels." << endl;
			break;
		case 'B':  cout << "There are " << countConsonants(sentence) << " consonants." << endl;
			break;
		case 'C':
		    cout << "There are " << countVowels(sentence) + countConsonants(sentence) << " vowels and consonants."; // COUNT vowels and consonants DONE
			break;
		case 'D':
			cin.ignore();
			cout << "Enter a sentence:  ";
			cin.getline(sentence, SIZE);
			break;
		case 'E': break;
		default: // Optional error message
			break;
		}
	}
}
