#include <iostream>
using namespace std;

enum typeOfBinding { Leather, Paper, Cardboard };

struct Book
{
	string title;
	int amountOfPages;
	int yearOfPublication;
	typeOfBinding  Binding;
};

int main() {
	setlocale(LC_ALL, "");

	Book book1, book2{ "C++", 1000, 2005, Leather };

	book1.title = "The Great Book";
	book1.amountOfPages = 500;
	book1.yearOfPublication = 2019;
	book1.Binding = Leather;

	cout << "Название: " << book1.title << "\n";
	cout << "Количество страниц: " << book1.amountOfPages << "\n";
	cout << "Год издания: " << book1.yearOfPublication << "\n";
	cout << "Переплёт: " << (book1.Binding == Leather ? "Кожа" : book1.Binding == Paper ? "Бумага" : "Картон") << "\n";
	cout << endl;

	cout << "Название: " << book2.title << "\n";
	cout << "Количество страниц: " << book2.amountOfPages << "\n";
	cout << "Год издания: " << book2.yearOfPublication << "\n";
	cout << "Переплёт: " << (book2.Binding == Leather ? "Кожа" : book2.Binding == Paper ? "Бумага" : "Картон") << "\n";
	
	return 0;
}