#include "Chat.h"
#include <map>
#include <utility>

int main()
{	
	
	Chat chat;
	cout << "Welcome to console chat!\n"
		<< "choose action: 1)registration 2)sign in 3)quit\n";
	int choice = 0;
	cin >> choice;
	while (choice != 3) {
		if (choice == 1) {
			chat.registration();
		}
		else if (choice == 2) {
			chat.sign_in();
		}
		else if (choice == 3) {
			cout << "Goodbye!" << endl;
			break;
		}
		cout << "choose action : 1)registration 2)sign in 3)quit\n" << endl;
		cin >> choice;
		std::cin.clear();
		std::cin.ignore(32767, '\n');
	}
	
	/*
	vector<string> login{"Lapa"};
	vector<string> password{ "1234" };
	map<string, string> User;
	User.insert(pair<string, string>(login[0], password[0]));
	map<string, string>::iterator it = User.begin();
	cout << (*it).first << " " << (*it).second;
	*/
	
	return 0;
}