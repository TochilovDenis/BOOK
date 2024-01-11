#include "Book.h"
#include "FindBook.h"

int main() {
	setlocale(LC_ALL, "");
	
	unsigned int numBooks = 10;
	Book* books = new Book[numBooks];

	fillArrayBooks(books, numBooks);
	printArrayBooks(books, numBooks);
    cout << endl;
	
	printOldestBook(books, numBooks);
	printLargestBook(books, numBooks);
	printBookWithLongestTitle(books, numBooks);
	delete[] books;
	return 0;
}

