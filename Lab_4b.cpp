// Lab_4b.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stdafx.h"
#include <math.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>


struct Adress
{
	char country[60];
	char city[60];
	char street[60];
	int number_house;

};

struct Building
{
	Adress adress;
	char fio_designer[128];
	char name_developer[128];
	int year;
	int height;
	int floors;

};


int main(int argc, char* argv[])
{
	Building *pB;
	int n;
	printf_s("n=");
	scanf_s("%d", &n);
	pB = (Building *)malloc(n * sizeof(Building));

	for (int i = 0; i<n; i++) 
	{
		printf_s("Building N=%d \n", i + 1);
		printf_s("Address: ");
				_flushall();
				gets_s(pB[i].adress.country, 59);
			printf_s("\nCountry: ");
				_flushall();
				gets_s(pB[i].adress.country, 59);
			printf_s("\nCity: ");
				fflush(stdin);
				gets_s(pB[i].adress.city, 59);
			printf_s("\nStreet: ");
				fflush(stdin);
				gets_s(pB[i].adress.street, 59);
			printf_s("\nNumber of house: ");
				scanf_s("%d", &pB[i].adress.number_house);
		fflush(stdin);
		gets_s(pB[i].fio_designer, 127);
		printf_s("\nFIO of designer: ");
			fflush(stdin);
			gets_s(pB[i].fio_designer, 127);
		printf_s("\nName of developer: ");
			fflush(stdin);
			gets_s(pB[i].name_developer, 127);
		printf_s("\nYear: ");
			scanf_s("%d", &pB[i].year);
			printf_s("\nHeight: ");
		scanf_s("%d", &pB[i].height);
			printf_s("\nFloors: ");
			scanf_s("%d", &pB[i].floors);
	}

	char CountryName[60];
	fflush(stdin); 
	gets_s(CountryName, 59);
	printf_s("\nCountry Name: ");
		fflush(stdin); 

		gets_s(CountryName, 59);
	int H;
	printf_s("\nDesired height: ");
		scanf_s("%d", &H);

	int k = 0;

	for (int i = 0; i<n; i++)
	{
		if (strcmp(CountryName, pB[i].adress.country) == 0)
			if (pB[i].height > H) k++;
	}
	if (k) printf_s("\nk=%d\n", k);
	else printf_s("Not found\n");


	free(pB);
	system("pause");
	return 0;
}
