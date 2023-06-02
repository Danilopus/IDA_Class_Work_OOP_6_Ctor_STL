#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <map>


class Client
{
	//private:
	int _age;
	double _id;
	int* data_array;
	int size;
public:
	// обычный конструктор
	Client(int age, int id) : _age(age), _id(id) {}

	// конструктор копирования - инициализация нового объекта существующим объектом
	Client(Client& client)
	{
		data_array = new int[client.size];
		_age = client._age;
		_id = client._id;
		for (int i = 0; i < size; i++)
			data_array[i] = client.data_array[i];
	}
	void ShowData()
	{
		std::cout << "\n_id: " << _id;
		std::cout << "\n_age: " << _age;

	}
};

class Client2
{
	private:
	int _id;
	double _bill;
	std::string _name;
public:
	// обычный конструктор
	Client2(int id, double bill, std::string name, std::map<int, Client2*>& map) : _id(id), _bill(bill), _name(name) 
	{
		map[_id] = this;
	}

	// конструктор копирования - инициализация нового объекта существующим объектом
	Client2(Client2& client)
	{
		_id = client._id;
		_bill = client._bill;
		_name = client._name;
		
	}
	void ShowData()
	{
		std::cout << "\n_id: " << _id;
		std::cout << "\n_bill: " << _bill;
		std::cout << "\n_name: " << _name;
	}
};
