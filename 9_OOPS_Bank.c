class BankAccount:
    def __init__(self, account_number, holder_name, balance=0):
        self.account_number = account_number
        self.holder_name = holder_name
        self.__balance = balance  # Private attribute (Encapsulation)

    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount
            print(f"Deposited {amount}. New balance: {self.__balance}")
        else:
            print("Deposit amount must be positive.")

    def withdraw(self, amount):
        if 0 < amount <= self.__balance:
            self.__balance -= amount
            print(f"Withdrew {amount}. Remaining balance: {self.__balance}")
        else:
            print("Insufficient balance or invalid amount.")

    def get_balance(self):
        return self.__balance
# Inheritance
class SavingsAccount(BankAccount):
    def __init__(self, account_number, holder_name, balance=0, interest_rate=2.5):
        super().__init__(account_number, holder_name, balance)
        self.interest_rate = interest_rate
    def add_interest(self):
        interest = self.get_balance() * (self.interest_rate / 100)
        self.deposit(interest)
        print(f"Interest added: {interest}")
# Polymorphism
def display_account_info(account):
    print(f"Account Holder: {account.holder_name}, Balance: {account.get_balance()}")
# Usage
acc1 = BankAccount("12345", "Alice", 1000)
acc1.deposit(500)
acc1.withdraw(200)
display_account_info(acc1)
savings_acc = SavingsAccount("67890", "Bob", 2000, 3)
savings_acc.add_interest()
display_account_info(savings_acc)
