###################
# BufferOverflows #
###################

Try your hand at exploiting buffer overflows with the following apps. They're confirmed to work on 32 bit Kali, but should also work on 64 bit. 

----------
| smuPay |
----------
Author: Cameron Keith
Compile: g++ -fno-stack-protector -g  -o smuPay.out smuPay.cpp

About: 
Accepts a username, and presents 3 options: Log out, Check Balance, and Make a payment. Log out simply logs you out, Check balance returns how much money you owe before logging you out, and make a payment displays your balance, asks if you want to make a payment, then returns how much you owe after the payment.

Goal: Exploit the make payment option to get money back.

------------------
| vendingMachine |
------------------
Author: Cameron Keith
Compile: g++ -fno-stack-protector –g –o vendingMachine vendingMachine.cpp

About:
This program is a drink vending machine. You will enter the number of your drink selection and be told what the price is. From there you will deposit coins by typing the number ‘25’, ‘10’, or ‘5’. You will be given your drink and your change.

Goal: Get a drink for free.