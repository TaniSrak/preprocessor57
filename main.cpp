#include <iostream>
#include "Foo.hpp"

//константы и конструкции препроцессора
#define PI 3.14
#define forever for(unsigned long long fori = 0ULL;; fori++) //в качестве тела может быть абсолютно любой код
// МАакросы
#define sum(a,b) a + b
#define print_arr(arr,size) \
std::cout << "{ "; \
for (int i = 0; i < size; i++) \
	std::cout << arr[i] << ", "; \
std::cout << "\b\b }\n";

// это однострочный комментарий, но с помощью\
обратного слэша он разбит на несколько строк

//условная комплияция
#define TEST 0

#if TEST == 1 //если условие является истинным, то текст ниже будет вставлен в код, если нет истины, то и функции нет
void func() {
	std::cout << "TEST 1\n";
}
#elif TEST == 2
void func() {
	std::cout << "ТEST 2\n";
}
#else
void func() {
	std::cout << "НЕт активных тестов\n";
}
#endif
//
#define FLAG

#ifdef FLAG //если флаг объявлен, то условие истино, иначе ложное
const int A = 13;
#else
const int A = 12;
#endif







int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//константы и конструкции препроцессора
	
	std::cout << "PI = " << PI << std::endl;
	forever 
	{
		std::cout << '.';
	std::cout << fori;
	}
	

	//Макросы препроцессора
	
	std::cout << "Введите вда числа -> ";
	std::cin >> n >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;

	const int size = 4;
	int arr[size]{ 10,20,30,40 };
	print_arr(arr, size);
	

	//остановка азмены текста
	
	std::cout << "PI = " << PI << std::endl;
#undef PI
	// std::cout << "PI = " << PI << std::endl; //ошибка
#define PI 3.1416
	std::cout << "PI = " << PI << std::endl;
	

	//условная компиляция
	func();

	return 0;
}