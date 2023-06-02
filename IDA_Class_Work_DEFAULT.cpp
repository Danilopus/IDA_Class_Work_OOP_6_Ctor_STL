#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
#include <algorithm>
#include <conio.h>
//#include <array>
//My own headers
#include "Service functions.h"
#include "classes.h"



// Class Work 2.06.2023 -------------------------------------------	

//Task 1 Конструктор копирования
void Task_1()
{
	Client client_1(24, 100100);
	Client client_2(client_1);
	client_1.ShowData();
	client_2.ShowData();

}
//Task 2 Map
#include <map>
void Task_2()
{
	//объект map - хранит связанные значения ключ-значение и автоматически сортируются по ключу
	//ключ изменить нельзя, только значение
	std::map<int, std::string> clients_map = { {1,"One"}, {2,"Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}};
	auto it = clients_map.begin();

	//Методы first second
	std::cout << "\nit->first  " << it->first;
	std::cout << "\nit->second " << it->second;

	it++;
	std::cout << "\nit->first  " << it->first;
	std::cout << "\nit->second " << it->second;

	//it = it + 2 // не работает
	std::advance(it, 2);
	std::cout << "\nit->first  " << it->first;
	std::cout << "\nit->second " << it->second;

	// Метод insert
	clients_map.insert(std::make_pair(6, "Six"));
	// Аналог insert
	clients_map[7] = "Seven";

	//обращение к элементам по ключу
	std::cout << "\nclients_mapх[6] " << clients_map[6];

	//Метод find - возвращает указатель на объект по найденному ключу
	it = clients_map.find(5);
	std::cout << "\nit->first  " << it->first;
	std::cout << "\nit->second " << it->second;

	//Метод Erase - удаляет ячейку по указателю, значения итератора после этого содержат недопустимый адрес
	clients_map.erase(it);
	it = clients_map.begin();

	std::cout << "\nit->first  " << it->first;
	std::cout << "\nit->second " << it->second;

}

//Task 3 Practice
void Task_3()
{
	std::map <int, Client2*> clients;
	Client2* client_1 = new Client2(12, 75567.67, "John", clients);
	Client2* client_2 = new Client2(15, 4575.67, "Mary", clients);
	Client2* client_3 = new Client2(20, 187.67, "Clavdiy", clients);

	std::cout << "\n\nmap clients:\n\n";
		
	auto it = clients.begin();
	//for (auto it = clients.begin(); it!= clients.end(); ++it)
	for (; it != clients.end(); ++it)
	{
		std::cout << "\nit->first " << it->first << " | ";
		it->second->ShowData();
	}
}


// MAIN ------- MAIN ------- MAIN ------- MAIN ------- MAIN --------
int main()
{
srand(time(NULL));
		
	
Task_1();
Task_2();
Task_3();





std::cout << "\n\n";
//system("pause");	
_getch();
}


