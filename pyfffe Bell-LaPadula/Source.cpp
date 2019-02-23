#include <iostream>
#include <string>

using namespace std;

class RootAccess  //По сути удалённый сервер с доступом к файлу с метками, возвращающий подтверждение авторизации
{
public:

	//Конструкторы RootAccess//
	///////////////////////////

	RootAccess() {

		AccessDataBase[0][0] = "0";
		AccessDataBase[0][1] = "root";
		AccessDataBase[0][2] = "root";

		AccessDataBase[1][0] = "1";
		AccessDataBase[1][1] = "testuser";
		AccessDataBase[1][2] = "123455";

		AccessDataBase[2][0] = "2";
		AccessDataBase[2][1] = "admin";
		AccessDataBase[2][2] = "5";

	};


private:
	string AccessDataBase[3][3];

protected:
	bool isRegistered(string login, string passwd) {
		for (int i = 0; i < 3; i++) {
			if (AccessDataBase[i][1] == login) {
				if (AccessDataBase[i][2] == passwd) {

					return true;
				}
				
			}
		}
		return false;
	}
};




class MySubject : RootAccess //Субъект, который проходит авторизацию
{
public:

	//Конструкторы MySubject//
	MySubject() : StrLogin(""), StrPass("") { displayMessage(); };
	///////////////////////////



	void displayMessage() {

		cout << "Пройдите авторизацию.\n";
		setAuthentification();

		//После прохождения авторизации
		if (Access == true) {
			cout << "Вы успешно авторизированы";
		}

		else cout << "Логин или пароль неверны";
		cout << endl;

	}

	string getLogin() { return StrLogin; }
	string getPassword() { return StrPass; }

private:

	void setAuthentification() { //Авторизации

		setLogin();
		setPassword();
		Access = isRegistered(StrLogin, StrPass);

	}

	void setLogin() { //Ввод логина
		cout << "Введите логин: ";
		cin >> StrLogin;
	}

	void setPassword() { //Ввод пароля
		cout << "Введите пароль: ";
		cin >> StrPass;
	}

	bool Access;
	string StrLogin;
	string StrPass;

};




class Object
{

public:

private:
};



int main() {

	bool ProgramIsWork = true;
	while (ProgramIsWork == true) //Состояние программы
	{
		setlocale(LC_ALL, "Russian");
		
		MySubject UserTest;
		RootAccess FoundAuth;

	}
	
	

	system("pause");
	return 0;
}
