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

	cout << "��������: " << book1.title << "\n";
	cout << "���������� �������: " << book1.amountOfPages << "\n";
	cout << "��� �������: " << book1.yearOfPublication << "\n";
	cout << "�������: " << (book1.Binding == Leather ? "����" : book1.Binding == Paper ? "������" : "������") << "\n";
	cout << endl;

	cout << "��������: " << book2.title << "\n";
	cout << "���������� �������: " << book2.amountOfPages << "\n";
	cout << "��� �������: " << book2.yearOfPublication << "\n";
	cout << "�������: " << (book2.Binding == Leather ? "����" : book2.Binding == Paper ? "������" : "������") << "\n";
	
	return 0;
}