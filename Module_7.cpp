#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

//Define a struct named Item with two members: name (string) and id (int)
struct Item {
	string name;
	int id;
};

//Implement a binary search function to find an item by id.
int binarySearch(Item arr[], int size, int searchid) {
	int left = 0;
	int right = size - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (arr[mid].id == searchid) {
			return mid;
		}
		else if (arr[mid].id < searchid) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return -1;
}

int main() {
	//Use new to dynamically allocate an array of items. 
	Item* items = new Item[100];

	//Populate the array with sorted sample data(id, name - sort by name), min 100 records.
	for (int i = 0; i < 100; i++) {
		items[i].id = i + 1;
		items[i].name = "Item" + to_string(i + 1);
	}

	sort(items, items + 100, [](const Item& a, const Item& b) {
		return a.name < b.name;
		});

	//Ask the user for an ID to search for, and display the result.
	int userid;
	cout << "Enter an ID to search for (1-100): ";
	cin >> userid;

	int result = binarySearch(items, 100, userid);

	if (result != -1) {
		cout << "Item found. ID: " << items[result].id << ". Name: " << items[result].name << ".";
	}
	else {
		cout << "Item not found";
	}

	//Free the memory using delete[]. 
	delete[] items;

	return 0;

}
