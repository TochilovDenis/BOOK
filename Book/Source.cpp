#include <iostream>
#include <string>
using namespace std;

enum typeOfBinding { 
	Leather, 
	Paper, 
	Cardboard, 
	
	bindingsTotal };

string typeOfBindingStr[bindingsTotal] = { "Leather", "Paper", "Cardboard" };

string BooksTitles[10] = { "Собор Парижской Богоматери", "Дневник Анны Франк",
						 "Грозовой перевал", "Сто лет одиночества", "Великий Гэтсби",
						 "Приключения Шерлока Холмса", "Мастер и Маргарита",
						 "Атлант расправил плечи", "Три товарища", "Робинзон Крузо" };

string BooksAuthors[10] = { "Виктор Гюго", "Анна Франк", "Эмили Бронте", "Габриэль Гарсия Маркес",
						   "Фрэнсис Скотт Фицджеральд", "Артур Конан Дойл", "Михаил Булгаков",
						   "Айн Рэнд", "Эрих Мария Ремарк", "Даниель Дефо" };

struct Book
{
	string title = "";
	string author = "";
	int amountOfPages = 0;
	int yearOfPublication = 0;
	typeOfBinding binding{};

	string getBookStatus()  {
		return "Название: " + title +
			"\nАвтор: " + author +
			"\nКоличество страниц: " + to_string(amountOfPages) +
			"\nГод издания: " + to_string(yearOfPublication) +
			"\nПереплёт: " + typeOfBindingStr[binding] + "\n";
	}
};

int main() {
	setlocale(LC_ALL, "");

	srand(time(0));

	int numBooks = 10;
	Book* books = new Book[numBooks];

	for (int i = 0; i < numBooks; i++) {
		books[i].title = BooksTitles[i];
		books[i].author = BooksAuthors[i];
		books[i].amountOfPages = rand() % 1000 + 1;
		books[i].yearOfPublication = rand() % 120 + 1900;
		books[i].binding = static_cast<typeOfBinding>(rand() % bindingsTotal);
	}

	for (size_t i = 0; i < numBooks; i++) {
		cout << books[i].getBookStatus() << endl;
	}

	delete[] books;

	return 0;
}