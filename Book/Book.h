#ifndef BOOK_H
#define BOOK_H

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

#include "Data.h"

using namespace std;

enum typeOfBinding {
	Leather,
	Paper,
	Cardboard,

	bindingsTotal
};

string typeOfBindingStr[bindingsTotal] = { "Кожа", "Бумага", "Картон" };

struct Book
{
	string title = "";
	string author = "";
	int amountOfPages = 0;
	int yearOfPublication = 0;
	typeOfBinding binding{};

	string getBookStatus() {
		return  title + " / " + author + " : " + to_string(yearOfPublication) + " год, " + to_string(amountOfPages) + "с. | Переплет: " + typeOfBindingStr[binding];
	}
};

void fillArrayBooks(Book* books, int numBooks) {
	srand(static_cast<unsigned>(time(0)));
	for (size_t i = 0; i < numBooks; i++) {
		books[i].title = BooksTitles[i];
		books[i].author = BooksAuthors[i];
		books[i].amountOfPages = rand() % 1000 + 1;
		books[i].yearOfPublication = rand() % 223 + 1800;
		books[i].binding = typeOfBinding(rand() % bindingsTotal);
	}
}

void printArrayBooks(Book* books, int numBooks) {
	for (size_t i = 0; i < numBooks; i++)
	{
		cout << "[" << i + 1 << "] " << books[i].getBookStatus() << endl;
	}
}

#endif /*BOOK_H*/