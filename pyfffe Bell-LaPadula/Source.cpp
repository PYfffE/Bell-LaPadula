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
		cout << "Пройдите авторизацию.\n";
		setAuthentification();

	}

private:

	void setAuthentification() {
		setLogin();
		setPassword();
	}

	void setLogin() {
		cout << "Введите логин: ";
		cin >> StrLogin;
	}

	void setPassword() {
		cout << "Введите пароль: ";
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
