#include <iostream>
#include <string>

using namespace std;

class RootAccess
{
public:
	RootAccess();

private:

};



class MySubject
{
public:

	MySubject(): StrLogin(""), StrPass("") { displayMessage(); };

	void displayMessage() {
		cout << "�������� �����������.\n";
		setAuthentification();

	}

private:

	void setAuthentification() {
		setLogin();
		setPassword();
	}

	void setLogin() {
		cout << "������� �����: ";
		cin >> StrLogin;
	}

	void setPassword() {
		cout << "������� ������: ";
		cin >> StrPass;
	}
	
	string StrLogin;
	string StrPass;
};




class Object
{
	
public:

private:
};





int main() {
	setlocale(LC_ALL, "Russian");


	MySubject UserTest;

	
	system("pause");
	return 0;
}
