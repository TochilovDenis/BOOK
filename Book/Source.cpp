#include <iostream>
#include <string>
using namespace std;

enum typeOfBinding { 
	Leather, 
	Paper, 
	Cardboard, 
	
	bindingsTotal };

string typeOfBindingStr[bindingsTotal] = { "Leather", "Paper", "Cardboard" };

struct Book
{
	string title = "";
	int amountOfPages = 0;
	int yearOfPublication = 0;
	typeOfBinding binding{};

	string getBookStatus()  {
		return "Название: " + title +
			"\nКоличество страниц: " + to_string(amountOfPages) +
			"\nГод издания: " + to_string(yearOfPublication) +
			"\nПереплёт: " + typeOfBindingStr[binding] + "\n";
	}
};

int main() {
	setlocale(LC_ALL, "");

	Book book1, book2{ "C++", 1000, 2005, Leather };

	book1.title = "The Great Book";
	book1.amountOfPages = 500;
	book1.yearOfPublication = 2019;
	book1.binding = Leather;

	cout << book1.getBookStatus() << endl;
	cout << book2.getBookStatus() << endl;

	return 0;
}