#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

class Chat {

private:
	struct User {
		string _login;
		string _pass;
		vector<string> _mails;
	};
	vector<User> _users;
	//vector<string> login;
	//vector<string> password;
	//map<string, string> logPass;

public:
	void registration();
	bool sign_in();
	string getValue();
	string getText();
	void sendMail();
	void readMail(User user);
};