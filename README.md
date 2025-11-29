The program defines a struct named Item with two members: name (string) and id (int).
Then it implements a binary search function to find an item by id with parameters Item arr[], int size, int searchid.
This is done by initializing int left = 0; and int right = size - 1;. Then using a while loop, the program continually splits the array into two halves until the element with the same searchid is found.
This is done by in the while loop by initializing int mid = left + (right - left) / 2; to set the mid point. Then if arr[mid].id == searchid, it will return mid. Else if arr[mid].id < searchid (which means the element to be found is in the second half), it will set left = mid + 1;, making the next look search for the element in the second half of the array. Else (which means the element to be found is in the first half), it will set right = mid - 1;, making the next look search for the element in the first half of the array.
The loop continues until arr[mid].id == searchid. If left > right, it means that no element with the same searchid is found, the function will return -1.
In main, the program creates a new array Item called items with 100 entries.
Then it populates the array with id from 1 to 100 and name from Item1 to Item100.
Then it sorts the data by name using the sort function.
