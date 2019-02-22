#include <iostream>
#include <string>
#include <list>

using namespace std;

class RootAccess
{
public:
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
				if (AccessDataBase[i][2] == passwd) return true;
			}
		}
		return false;
	}
};



class MySubject:RootAccess
{
public:

	MySubject(): StrLogin(""), StrPass("") { displayMessage(); };

	void displayMessage() {

		cout << "Пройдите авторизацию.\n";

		setAuthentification();

		if (access == true) cout << "Вы успешно авторизированы";
		else cout << "Логин или пароль неверны";
		cout << endl;

	}

	string getLogin()	 { return StrLogin; }
	string getPassword() { return StrPass;  }

private:

	void setAuthentification() {
		
		setLogin();
		setPassword();
		access = isRegistered(StrLogin, StrPass);
		
	}

	void setLogin() {
		cout << "Введите логин: ";
		cin >> StrLogin;
	}

	void setPassword() {
		cout << "Введите пароль: ";
		cin >> StrPass;
	}

	bool access;
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

	RootAccess FoundAuth;

	MySubject UserTest;


	
	system("pause");
	return 0;
}
