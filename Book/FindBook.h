#ifndef FINDBOOK_H
#define FINDBOOK_H

#include "Book.h"

Book findOldestBook(Book books[], int size) {
	Book oldestBook = books[0];
	for (size_t i = 1; i < size; i++) {
		if (books[i].yearOfPublication < oldestBook.yearOfPublication) {
			oldestBook = books[i];
		}
	}
	return oldestBook;
}

Book findLargestBook(Book books[], int size) {
	Book largestBook = books[0];
	for (size_t i = 1; i < size; i++) {
		if (books[i].amountOfPages > largestBook.amountOfPages) {
			largestBook = books[i];
		}
	}
	return largestBook;
}

Book findBookWithLongestTitle(Book books[], int size) {
	Book bookWithLongestTitle = books[0];
	for (size_t i = 1; i < size; i++) {
		if (books[i].title.length() > bookWithLongestTitle.title.length()) {
			bookWithLongestTitle = books[i];
		}
	}
	return bookWithLongestTitle;
}

void printOldestBook(Book* books, int size) {
	Book oldestBook = findOldestBook(books, size);
	cout << "Самая старая книга: \"" << oldestBook.title
		<< "\", опубликован в " << oldestBook.yearOfPublication << " году." << endl;
}

void printLargestBook(Book* books, int size) {
	Book largestBook = findLargestBook(books, size);
	cout << "Самая большая страница: " << largestBook.amountOfPages << " из книг \"" << largestBook.title << "\"" << endl;
}

void printBookWithLongestTitle(Book* books, int size) {
	Book bookWithLongestTitle = findBookWithLongestTitle(books, size);
	cout << "Самое длинное название книги: \"" << bookWithLongestTitle.title << "\"" << endl;
}

#endif /*FINDBOOK_H*/