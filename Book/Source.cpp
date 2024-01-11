#include <iostream>
#include <string>
using namespace std;

enum typeOfBinding { 
	Leather, 
	Paper, 
	Cardboard, 
	
	bindingsTotal };

string typeOfBindingStr[bindingsTotal] = { "Кожа", "Бумага", "Картон" };

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
		return  title +	" / " + author + " : " +  to_string(yearOfPublication) + " год, " +to_string(amountOfPages) + "с. | Переплет: " + typeOfBindingStr[binding];
	}
};

void fillArrayBooks(Book*, int); 
void printArrayBooks(Book* , int);

int main() {
	setlocale(LC_ALL, "");
	srand(time(0));
	const unsigned int numBooks = 10;
	Book* books = new Book[numBooks];
	fillArrayBooks(books, numBooks);
	printArrayBooks(books, numBooks);
	delete[] books;

	return 0;
}

void fillArrayBooks(Book* books, int numBooks) {
	for (size_t i = 0; i < numBooks; i++ ) {
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
		cout << "[" << i + 1 << "]" << books[i].getBookStatus() << endl;
	}
}