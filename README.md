=== Module_4 ===
The code declares int type variable choice.
The code outputs three options: 1. Add Item 2. View Items 3. Exit.
The code outputs "Choose an option: ".
The code takes the user input and stores it in the variable choice.
If the number stored in choice is 1, the code outputs "Item added!".
Otherwise, if the number stored in choice is 2, the code outputs "Displaying items...".
Otherwise, if the number stored in choice is 3, the code outputs "Exiting...".
If anything other than the aforementioned numbers is stored in choice, the code outputs "Invalid option.".
The code returns 0.

=== Module_4_Part_2 ===
// Changelog
line 5 : float n1 n2 n3, >>> float n1, n2, n3 (Syntax error)
line 8 : cin >> n1 > n1 > n3; >>> cin >> n1 >> n2 >> n3; (Syntax & Logical error)
line 10 - 25 : Rewrote using nested-if statements and added possibility of equal numbers (Syntax & Logical errors) 
--  if(n1 = n2 && n1 >= n3 (Logical error)
--  cout << "Largest number: " << n1; (Logical error)
--  if(n2 == n1 && n2 >= n3) (Logical error)
--  cout << "Largest number: " << n1; (Logical error)
--  cout << "Largest number: " << n2 (Syntax & Logical error)
--  From line 13 and 18 of original code, unnecessary nesting {} (Logical error)

// Explanation
The code declares 3 float type variables: n1 , n2 and n3.
The code outputs "Enter three numbers: ".
The code takes the three user inputs and stores them in n1 , n2 and n3.
If n1 is greater than or equal n2, and n1 is greater than or equal to n3, the code will output n1.
If n1 is greater than or equal n2, and n1 is NOT greater than or equal to n3, the code will output n3.
If n1 is NOT greater than or equal n2, and n2 is greater than or equal to n3, the code will output n2.
If n1 is NOT greater than or equal n2, and n2 is NOT greater than or equal to n3, the code will output n3.
The code returns 0.
