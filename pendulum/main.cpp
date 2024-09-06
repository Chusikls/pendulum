#include <iostream>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	int stop, procent, time = 0;
	float start;
	std::cout << "Введите начальную амплитуду: ";
    std::cin >> start;
	std::cout << "\n";
	std::cout << "Введите конечную амплитуду: ";
	std::cin >> stop;
	std::cout << "\n";
	if (start <= 0 || stop <= 0 || start <= stop) {
		return 1;
	}
	while (start > stop) {
		time = time + 1;
		procent = start / 100;
		start = start - (procent * 8,4);
	}
	std::cout << "Количство колебаний: " << time;
}