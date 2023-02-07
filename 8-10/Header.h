#pragma once
#include <iostream>

using namespace std;

class String
{
	char* str;
	int time;
public:
	String() {
		char* str = new char[80];
		cout << "������� ������: " << endl;
		cin >> str;
		time++;
	}
	String(int size) {
		char* str = new char[size];
		cout << "������� ������: " << endl;
		cin >> str;
		time++;
	}
	String CreateStr(String& strr) {
		String stroka(strr);
		return stroka;
	}
	String operator[](int a) {
		return str[a];
	}
	String operator()(char a) {
		for (int i = 0; i < strlen(str); i++) {
			if (a == str[i]) {
				return -1;
			}
		}
	}
	char* getStr() {
		return str;
	}
	void getTime() {
		cout << time << endl;
	}
	~String() {
		delete[]str;
	}


};

class Array
{
	int* arr;
	int size;
public:
	//������������
	Array(int s) : size{ s }, arr{ (s > 0) ? new int[s] : nullptr }{
	}
	Array() : Array(0) {}

	//����������� ����������� � ������������� �������������
	Array(const Array& array) : Array(array.size) {
		for (int i = 0; i < size; i++) {
			cout << array.arr[i] << " ";
			arr[i] = array.arr[i];
		}
	}

	//����������
	~Array() {
		if (arr)
			delete[]arr;

	}

	//�������� �������
	void setArr() {
		if (arr) {
			delete[]arr;
			arr = new int[size];
		}
	}

	//�������� ������� �������
	void setSize(int s) {
		size = s;
	}

	//���������� ������
	void print() {
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	//��������� ������� �������
	void changeSize(int new_size) {
		size = new_size;
		int* temp = new int[new_size];
		for (int i = 0; i < new_size; i++) {
			temp[i] = arr[i];
		}
		delete[]arr;
		arr = temp;
	}

	//������� ������������ ��������
	int getMin() {
		int min = arr[0];
		for (int i = 0; i < size; i++) {
			if (arr[0] < arr[i]) {
				min = arr[i];
			}
		}
		return min;
	}

	//������� ������������� ��������
	int getMax() {
		int max = arr[0];
		for (int i = 0; i < size; i++) {
			if (arr[0] > arr[i]) {
				max = arr[i];
			}
		}
		return max;
	}

	//���������� �������
	void sortArr() {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size - 1, j > i; j--) {
				if (arr[j - 1] > arr[j]) {
					swap(arr[j - 1], arr[j]);
				}
			}
		}
	}

	//���������� �������
	void addArray() {
		for (int i = 0; i > 0; i++) {
			arr[i] = rand() % 10;
		}
	}

	Array CreateArr(const char& arrr) {
		Array rar(arrr);
		return rar;
	}
};