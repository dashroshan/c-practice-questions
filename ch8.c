/*Q8.1
#include <stdio.h>
int main()
{
	char name[30];
	printf("Enter your name : ");
	gets(name);
	printf("ASCII representation : ");
	for (int i = 0; i <= strlen(name) - 1; i += 1)
	{
		printf("%d ", name[i]);
	}
	return (0);
*/

/*Q8.2
#include <stdio.h>
int main()
{
	char name[20];
	printf("Who is the inventor of ? : ");
	for (int i = 1; i <= 3; i += 1)
	{
		gets(name);
		if (strcmp(name, "Dennis Ritchie") == 0 || strcmp(name, "dennis ritchie") == 0)
		{
			printf("Good!");
			break;
		}
		else if (i != 3)
		{
			printf("Try again : ");
		}
	}
	return (0);
}
*/

/*Q8.3
#include <stdio.h>
int main()
{
	char string[] = "sample text";
	int m = 2, n = 3;
	for (int i = 1; i <= m && n + i - 2 < strlen(string); i += 1)
	{
		printf("%c", string[n + i - 2]);
	}
	return (0);
}
*/

/*Q8.4
#include <stdio.h>
int main()
{
	char toSearch[10], str[100], temp[10];
	int count = 0, found, stringLen, searchLen;
	printf("Enter text : ");
	gets(str);
	printf("Enter word : ");
	gets(toSearch);
	stringLen = strlen(str);
	searchLen = strlen(toSearch);
	for (int i = 0; i <= stringLen - searchLen; i += 1)
	{
		found = 1;
		for (int j = 0; j < searchLen; j += 1)
		{
			if (str[i + j] != toSearch[j])
			{
				found = 0;
				break;
			}
		}
		if (found == 1)
		{
			count += 1;
		}
	}
	printf("Total occurrences of '%s' = %d", toSearch, count);
	return (0);
}
*/

/*Q8.5
#include <stdio.h>
int main()
{
	char string[20], temp;
	printf("Enter string : ");
	gets(string);
	for (int i = 1; i <= strlen(string) - 1; i += 1)
	{
		for (int j = 1; j <= strlen(string) - 1; j += 1)
		{
			if (string[j] < string[j - 1])
			{
				temp = string[j];
				string[j] = string[j - 1];
				string[j - 1] = temp;
			}
		}
	}
	printf("In alphabetical order : %s", string);
}
*/

/*Q8.6
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100], newstr[100], word[10], replacement[10], temp[10];
	printf("Enter text : ");
	gets(str);
	printf("Enter word to be replaced : ");
	gets(word);
	printf("Enter replacement word : ");
	gets(replacement);
	for (int i = 0; i <= strlen(str); i += 1)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (strcmp(temp, word) == 0)
			{
				strcat(newstr, replacement);
			}
			else
			{
				strcat(newstr, temp);
			}
			strcat(newstr, " ");
			strcpy(temp, "");
		}
		else
		{
			strncat(temp, &str[i], 1);
		}
	}
	printf("New text : %s", newstr);

	return (0);
}
*/

/*Q8.8
#include <stdio.h>
int main()
{
	char string[20];
	printf("Enter string : ");
	gets(string);
	for (int i = 0; i <= strlen(string) / 2 - 1; i += 1)
	{
		if (string[i] != string[strlen(string) - i - 1])
		{
			printf("Not palindrome!");
			goto skip;
		}
	}
	printf("Palindrome!");
skip:
	return (0);
}
*/

/*Q8.9
#include <stdio.h>
int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	char word[256], numToWord[10];
	printf("Enter number as RRRR.PP : ");
	scanf("%1d%1d%1d%1d.%1d%1d", &a, &b, &c, &d, &e, &f);
	switch (a)
	{
	case 1:
		strcpy(numToWord, "ONE");
		break;

	case 2:
		strcpy(numToWord, "TWO");
		break;

	case 3:
		strcpy(numToWord, "THREE");
		break;

	case 4:
		strcpy(numToWord, "FOUR");
		break;

	case 5:
		strcpy(numToWord, "FIVE");
		break;

	case 6:
		strcpy(numToWord, "SIX");
		break;

	case 7:
		strcpy(numToWord, "SEVEN");
		break;

	case 8:
		strcpy(numToWord, "EIGHT");
		break;

	case 9:
		strcpy(numToWord, "NINE");
		break;
	}
	if (a != 0)
	{
		strcat(strcat(word, numToWord), " THOUSAND");
	}
	switch (b)
	{
	case 1:
		strcpy(numToWord, "ONE");
		break;

	case 2:
		strcpy(numToWord, "TWO");
		break;

	case 3:
		strcpy(numToWord, "THREE");
		break;

	case 4:
		strcpy(numToWord, "FOUR");
		break;

	case 5:
		strcpy(numToWord, "FIVE");
		break;

	case 6:
		strcpy(numToWord, "SIX");
		break;

	case 7:
		strcpy(numToWord, "SEVEN");
		break;

	case 8:
		strcpy(numToWord, "EIGHT");
		break;

	case 9:
		strcpy(numToWord, "NINE");
		break;
	}
	if (a != 0)
	{
		strcat(word, " ");
	}
	if (b != 0)
	{
		strcat(strcat(word, numToWord), " HUNDRED");
	}
	if (c != 0)
	{
		switch (c)
		{
		case 1:
		{
			switch (10 + d)
			{
			case 10:
				strcpy(numToWord, "TEN");
				break;

			case 11:
				strcpy(numToWord, "ELEVEN");
				break;

			case 12:
				strcpy(numToWord, "TWELVE");
				break;

			case 13:
				strcpy(numToWord, "THIRTEEN");
				break;

			case 14:
				strcpy(numToWord, "FOURTEEN");
				break;

			case 15:
				strcpy(numToWord, "FIFTEEN");
				break;

			case 16:
				strcpy(numToWord, "SIXTEEN");
				break;

			case 17:
				strcpy(numToWord, "SEVENTEEN");
				break;

			case 18:
				strcpy(numToWord, "EIGHTEEN");
				break;

			case 19:
				strcpy(numToWord, "NINETEEN");
				break;
			}
			break;
		}
		case 2:
			strcpy(numToWord, "TWENTY");
			break;

		case 3:
			strcpy(numToWord, "THIRTY");
			break;

		case 4:
			strcpy(numToWord, "FOURTY");
			break;

		case 5:
			strcpy(numToWord, "FIFTY");
			break;

		case 6:
			strcpy(numToWord, "SIXTY");
			break;

		case 7:
			strcpy(numToWord, "SEVENTY");
			break;

		case 8:
			strcpy(numToWord, "EIGHTY");
			break;

		case 9:
			strcpy(numToWord, "NINTY");
			break;
		}
	}
	if (a != 0 && b != 0)
	{
		strcat(word, " ");
	}
	strcat(word, numToWord);
	if (c != 1 && d != 0)
	{
		switch (d)
		{
		case 1:
			strcpy(numToWord, "ONE");
			break;

		case 2:
			strcpy(numToWord, "TWO");
			break;

		case 3:
			strcpy(numToWord, "THREE");
			break;

		case 4:
			strcpy(numToWord, "FOUR");
			break;

		case 5:
			strcpy(numToWord, "FIVE");
			break;

		case 6:
			strcpy(numToWord, "SIX");
			break;

		case 7:
			strcpy(numToWord, "SEVEN");
			break;

		case 8:
			strcpy(numToWord, "EIGHT");
			break;

		case 9:
			strcpy(numToWord, "NINE");
			break;
		}
		strcat(word, " ");
		strcat(word, numToWord);
	}
	if (a == 0 && b == 0 && c == 0 && d == 0)
	{
		strcat(word, "ZERO");
	}
	strcat(word, " AND PAISE");
	if (e != 0)
	{
		switch (e)
		{
		case 1:
		{
			switch (10 + f)
			{
			case 10:
				strcpy(numToWord, "TEN");
				break;

			case 11:
				strcpy(numToWord, "ELEVEN");
				break;

			case 12:
				strcpy(numToWord, "TWELVE");
				break;

			case 13:
				strcpy(numToWord, "THIRTEEN");
				break;

			case 14:
				strcpy(numToWord, "FOURTEEN");
				break;

			case 15:
				strcpy(numToWord, "FIFTEEN");
				break;

			case 16:
				strcpy(numToWord, "SIXTEEN");
				break;

			case 17:
				strcpy(numToWord, "SEVENTEEN");
				break;

			case 18:
				strcpy(numToWord, "EIGHTEEN");
				break;

			case 19:
				strcpy(numToWord, "NINETEEN");
				break;
			}
			break;
		}
		case 2:
			strcpy(numToWord, "TWENTY");
			break;

		case 3:
			strcpy(numToWord, "THIRTY");
			break;

		case 4:
			strcpy(numToWord, "FOURTY");
			break;

		case 5:
			strcpy(numToWord, "FIFTY");
			break;

		case 6:
			strcpy(numToWord, "SIXTY");
			break;

		case 7:
			strcpy(numToWord, "SEVENTY");
			break;

		case 8:
			strcpy(numToWord, "EIGHTY");
			break;

		case 9:
			strcpy(numToWord, "NINTY");
			break;
		}
		strcat(word, " ");
		strcat(word, numToWord);
	}
	if (e != 1 && f != 0)
	{
		switch (f)
		{
		case 1:
			strcpy(numToWord, "ONE");
			break;

		case 2:
			strcpy(numToWord, "TWO");
			break;

		case 3:
			strcpy(numToWord, "THREE");
			break;

		case 4:
			strcpy(numToWord, "FOUR");
			break;

		case 5:
			strcpy(numToWord, "FIVE");
			break;

		case 6:
			strcpy(numToWord, "SIX");
			break;

		case 7:
			strcpy(numToWord, "SEVEN");
			break;

		case 8:
			strcpy(numToWord, "EIGHT");
			break;

		case 9:
			strcpy(numToWord, "NINE");
			break;
		}
		strcat(word, " ");
		strcat(word, numToWord);
	}
	if (e == 0 && f == 0)
	{
		strcat(word, "ZERO");
	}
	printf("%s", word);
	return (0);
}
*/

/*Q8.10
#include <stdio.h>
#define STUDENTS 4
int main()
{
	int roll[STUDENTS], tempRoll;
	char name[STUDENTS][50], tempName[50];
	double mark[STUDENTS], tempMark;
	for (int i = 0; i < STUDENTS; i += 1)
	{
		printf("Student %d. Roll,name,marks : ", i + 1);
		scanf("%d,%[^,],%lf", &roll[i], name[i], &mark[i]);
		fflush(stdin);
	}
	printf("\nRoll %20s %8s\n", "Name", "Mark");
	printf("(By alphabetical order of names)\n");
	for (int i = 1; i < STUDENTS; i += 1)
	{
		for (int j = 1; j < STUDENTS; j += 1)
		{
			if (strcmp(name[j], name[j - 1]) < 0)
			{
				strcpy(tempName, name[j]);
				strcpy(name[j], name[j - 1]);
				strcpy(name[j - 1], tempName);
				tempRoll = roll[j];
				roll[j] = roll[j - 1];
				roll[j - 1] = tempRoll;
				tempMark = mark[j];
				mark[j] = mark[j - 1];
				mark[j - 1] = tempMark;
			}
		}
	}
	for (int i = 0; i < STUDENTS; i += 1)
	{
		printf("%4d %20s %8.2lf\n", roll[i], name[i], mark[i]);
	}

	printf("(By roll numbers)\n");
	for (int i = 1; i < STUDENTS; i += 1)
	{
		for (int j = 1; j < STUDENTS; j += 1)
		{
			if (roll[j] < roll[j - 1])
			{
				strcpy(tempName, name[j]);
				strcpy(name[j], name[j - 1]);
				strcpy(name[j - 1], tempName);
				tempRoll = roll[j];
				roll[j] = roll[j - 1];
				roll[j - 1] = tempRoll;
				tempMark = mark[j];
				mark[j] = mark[j - 1];
				mark[j - 1] = tempMark;
			}
		}
	}
	for (int i = 0; i < STUDENTS; i += 1)
	{
		printf("%4d %20s %8.2lf\n", roll[i], name[i], mark[i]);
	}

	printf("(By marks)\n");
	for (int i = 1; i < STUDENTS; i += 1)
	{
		for (int j = 1; j < STUDENTS; j += 1)
		{
			if (mark[j] < mark[j - 1])
			{
				strcpy(tempName, name[j]);
				strcpy(name[j], name[j - 1]);
				strcpy(name[j - 1], tempName);
				tempRoll = roll[j];
				roll[j] = roll[j - 1];
				roll[j - 1] = tempRoll;
				tempMark = mark[j];
				mark[j] = mark[j - 1];
				mark[j - 1] = tempMark;
			}
		}
	}
	for (int i = 0; i < STUDENTS; i += 1)
	{
		printf("%4d %20s %8.2lf\n", roll[i], name[i], mark[i]);
	}
	return (0);
}
*/

/*Q8.11
#include <stdio.h>
int main()
{
	char str1[50], str2[50];
	printf("Enter string 1 : ");
	gets(str1);
	printf("Enter string 2 : ");
	gets(str2);
	if (strcmp(str1, str2) > 0)
	{
		printf("First string is greater than the second!");
	}
	else if (strcmp(str1, str2) < 0)
	{
		printf("First string is less than the second!");
	}
	else
	{
		printf("Both strings are equal!");
	}
	return (0);
}
*/

/*Q8.12
#include <stdio.h>
int main()
{
	char string[256], word[10];
	int count = 0;
	printf("Enter string : ");
	gets(string);
	printf("Enter substring : ");
	gets(word);
	while (strstr(string, word))
	{
		count += 1;
		strcpy(string, strstr(string, word) + strlen(word));
	}
	printf("%s' is found %d times in the given string!", word, count);
	return (0);
}
*/

/*Q8.13
#include <stdio.h>
int main()
{
	char s1[50], s2[50];
	int m, n;
	printf("Enter string : ");
	gets(s1);
	printf("Enter characters to copy : ");
	scanf("%d", &m);
	printf("Enter character position to start copying from : ");
	scanf("%d", &n);
	strncpy(s2, s1 + n - 1, m);
	printf("New string : %s", s2);
	return (0);
}
*/

/*Q8.14
#include <stdio.h>
#include <stdlib.h>
#define TOTAL 3
int main()
{
	char data[TOTAL][2][10] = {
		{"1", "Roshan"},
		{"2", "Dash"},
		{"3", "Rdash"}},
		 input[10];
	printf("Enter name or roll : ");
	gets(input);
	for (int i = 0; i < TOTAL; i += 1)
	{
		if (atoi(data[i][0]) == atoi(input) || strcmp(data[i][1], input) == 0)
		{
			printf("Roll %s : %s", data[i][0], data[i][1]);
			goto found;
		}
	}
	printf("Not found!");
found:
	return (0);
}
*/