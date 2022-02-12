#pragma warning(disable:4996)

#include <iostream>
#include <cstdio>
#include <conio.h>

/*
	Source by Programiz
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	FILE* fp;
	fp = fopen("file.txt", "w");
	char str[20] = "Hello World!";

	if (fp == NULL) {
		cout << "Error opening file";
		exit(1);
	}

	fprintf(fp, "%s", str);
	fclose(fp);

	cout << "File closed successfully";

	_getch();
	return 0;
}