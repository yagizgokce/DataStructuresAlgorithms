**CENG 301**

Algorithms and Data Structures

Spring 2020-2021

**Stack & Queue Assignment**

In this assignment, you need to find a word is palindrome or not with a weird solution. You need to
solve this problem with the stack. Stack takes “char” for operations. However, this stack does not use a
linked list for doing its operations. It uses two queues for operations. Queues also takes “char” for
operations, and it uses singly linked list.

***Queue node (struct) is expected to keep these variables:***

• Char as a value

• Address of the next queue node

***Queue class is expected to keep these variables:***

• Address of the head queue node

• Address of the tail queue node

***Stack class is expected to keep these variables:***

• First Queue (Queue1)

• Second Queue (Queue2)

*** Also, driver class is expected to keep this variable: ***

• Stack

*** Queue class desired methods: ***

• enqueue

• dequeue

• front

• isEmpty

• clear

*** Stack class desired methods: ***
• push

• pop

• top

• isEmpty

• clear

*** Driver class also has two desired methods: ***

• bool isPalindrome(String word) => Takes word and checks it is palindrome or not, using the stack
variable that in the driver class.

• main function

** Commands: **

• <word> => check this word is palindrome or not.
  
• q => quit

For submission you can submit up to 5 files (.cpp & .h).














