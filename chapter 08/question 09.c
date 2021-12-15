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