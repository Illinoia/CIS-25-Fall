The code makes a class BankAccount.
The class initializes private double variable balance.
The class sets the starting balance to 0.
The class sets a new method depositFunds with parameters double amount.
The method outputs "Previous balance: __$__" + balance.
The method adds amount to balance.
The method outputs "Current balance: __$__" + balance.
The method calls method saveTransaction with arguments "Deposit" and amount.
The class sets a new method makePurchase with parameters string item and double cost.
If the method checks that the cost > balance, it will output "Insufficient funds."
Otherwise, the method will deduct cost from balance
The method outputs "Item purchased: " + item + " __$__" cost.
The method calls method saveTransaction with arguments item and cost.
The class sets a new method displayFunds.
The method outputs "Current balance: __$__" + balance.
The class sets a new method saveTransaction with parameters string item and double amount.
The method opens the input file of transactions.txt.
The method checks if the file is open.
If the file is open, the method writes item + ": __$__" + amount, and enters a new line.
The method closes the file.

Main
The code makes a new object of BankAccount, myAccount.
The code calls method depositFunds with argument 1000.
The code calls method makePurchase with arguments "Chicken" and 16.99.
The code calls method makePurchase with arguments "Lettuce" and 3.99.
The code calls method makePurchase with arguments "Bread" and 5.99.
The code calls displayFunds.
The code enters a new line and outputs "From transactions.txt", and enters a new line.
The code opens the output file of transactions.txt.
The code checks if the file is open.
The code initializes new string variable line.
The code uses line to print out every line inside file transactions.txt.
The code closes output file of transactions.txt.
The code opens the input file of transactions.txt.
The code deletes the contents of transactions.txt.
The code closes the input file of transactions.txt.
The code returns 0.
