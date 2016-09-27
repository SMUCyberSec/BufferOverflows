###################
# BufferOverflows #
###################

Try your hand at exploiting buffer overflows with the following apps. They're confirmed to work on 32 bit Kali, but should also work on 64 bit. 

----------
| smuPay |
----------
Author: C. Keith

Compile: g++ -fno-stack-protector -g  -o smuPay.out smuPay.cpp

About: 
Accepts a username, and presents 3 options: Log out, Check Balance, and Make a payment. Log out simply logs you out, Check balance returns how much money you owe before logging you out, and make a payment displays your balance, asks if you want to make a payment, then returns how much you owe after the payment.

Goal: Exploit the make payment option to get money back.


---------------
| timeBreaker |
---------------
Author: A. Buck

Compile: gcc timebreaker.c -o timebreaker -g -fno-stack-protector

About: 
Welcome to TimeBreaker, the panic simulation game where you play a highschooler who just had a party and trashed his parents house! You had an awesome party while your parents were out of town, but you overslept and need to clean up before they get home. You just got a phone call that they are only 5 minutes away! 

Goal: 
You need to find a way to freeze time so you can clean the house before they arrive! You are given several options and then prompted for your decision. Enter your choice and hopefully you can stop time before your parents get home! Luckily I think there is a cheatcode function that will give you the magic powers to stop time. Good luck!


------------------
| vendingMachine |
------------------
Author: Unknown

Compile: g++ -fno-stack-protector –g –o vendingMachine vendingMachine.cpp

About:
This program is a drink vending machine. You will enter the number of your drink selection and be told what the price is. From there you will deposit coins by typing the number ‘25’, ‘10’, or ‘5’. You will be given your drink and your change.

Goal: Get a drink for free.
