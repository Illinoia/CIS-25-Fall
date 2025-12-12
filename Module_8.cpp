#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class BankAccount {
private:
	double balance;

public:
	BankAccount() {
		balance = 0.0;
	}

	void depositFunds(double amount) {
		cout << "Previous balance: $" << balance << endl;
		balance += amount;
		cout << "Current balance: $" << balance << endl;
		saveTransaction("Deposit", amount);
	}

	void makePurchase(string item, double cost) {
		if (cost > balance) {
			cout << "Insufficient funds." << endl;
		}
		else {
			balance -= cost;
			cout << "Item purchased: " << item << " $" << cost << endl;
			saveTransaction(item, cost);
		}
	}
	void displayFunds() {
		cout << "Current balance: $" << balance << endl;
	}

	void saveTransaction(string item, double amount) {
		ofstream file("transactions.txt", ios::app);
		if (file.is_open()) {
			file << item << ": $" << amount << endl;
			file.close();
		}
	}
};

int main() {
	BankAccount myAccount;

	myAccount.depositFunds(1000);
	myAccount.makePurchase("Chicken", 16.99);
	myAccount.makePurchase("Lettuce", 3.99);
	myAccount.makePurchase("Bread", 5.99);
	myAccount.displayFunds();

	cout << endl << "From transactions.txt: " << endl;
	ifstream file("transactions.txt", ios::app);
	if (file.is_open()) {
		string line;
		while (getline(file, line)) {
			cout << line << endl;
		}
	}
	file.close();
	ofstream ofs("transactions.txt", ofstream::out | ofstream::trunc);
	file.close();

	return 0;
}