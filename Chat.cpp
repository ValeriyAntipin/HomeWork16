#include "Chat.h"

string Chat::getValue()
{
	while (true)
	{
		std::string str = "";
		std::cin >> str;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		else
			return str;
	}
}

string Chat::getText()
{
	std::cout << "Type text: ";
	std::string str = "";
	std::cin.get();
	getline(std::cin, str);
	return str;
}

void Chat::registration()
{
	User _user;
	cout << "Create login: ";
	_user._login = getValue();
	cout << "Create password: ";
	_user._pass = getValue();
	_users.push_back(_user);
	
	/*
	cout << "Create login: ";
	string tempLog = getValue();
	cout << endl;
	cout << "Create password: ";
	string tempPass = getValue();
	cout << endl;
	login.push_back(tempLog);
	password.push_back(tempPass);
	logPass.insert(pair<string, string>(tempLog, tempPass));
	*/
}

bool Chat::sign_in()
{
	cout << "Enter login: ";
	string temp_login = getValue();
	cout << "Enter password: ";
	string temp_pass = getValue();
	for (int i = 0; i < _users.size(); i++) {
		if (_users[i]._login == temp_login && _users[i]._pass == temp_pass)
		{
			cout << _users[i]._login << ", welcome!" << endl;
			readMail(_users[i]);
			sendMail();
			return true;
		}
		else
			continue;
	}
	cout << "wrong login or password." << endl;
	return false;
}

void Chat::sendMail()
{
	cout << "Which user send message?" << endl;
	for (int i = 0; i < _users.size(); ++i) {
		cout << i << " " << _users[i]._login << endl;
	}
	int choice = -1;
	cin >> choice;
	string msg = getText();
	if (choice < _users.size())
		_users[choice]._mails.push_back(msg);
	else return;
}

void Chat::readMail(User user)
{
	cout << "Your messages: " << endl;
	for (int i = 0; i < user._mails.size(); ++i) {
		cout << user._mails[i] << endl;
	}
}
