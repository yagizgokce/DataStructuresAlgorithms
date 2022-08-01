**CENG 301**

Algorithms and Data Structures

Spring 2020-2021

**Tree Assignment**

Ethan is a town librarian. The library administration has completely left the book allocation to himself.
Ethan places each book in the library with a binary search tree structure. The books are placed in the library
completely mixed, but behind each book there is own book id and the location of the other two books that
one has smaller id and other one has bigger id. Location of first book (root) is known by librarian.

People of the town have a habit. They always ask for two books. Because of that, Ethan wants to help
them with finding the smallest subtree that has two of the books that person asks for. Ethan tells root id of
the subtree to the people for helping them. For example, in the below figure yellow nodes are the books
that are asked. Red node is root book of the library. Blue node is the root of the smallest subtree that have
two yellow nodes. Blue node is the answer that Ethan search for.

For that, you need to help Ethan for solving this problem.

Desired structure for helping Ethan has some requirements.

***Book node (struct) is expected to keep these variables:***

• Integer as an id

•Address of the bigger id book node

•Address of the smaller id book node

***Library class is expected to keep these variables:***

• Address of the root node

***Library class desired methods:***

• insert

• clear

• int subtreeRootIDSearch(BookNode * book, int id1, int id2) => for finding ID of the smallest subtree
root. (Initial BookNode => root)


***Driver class also has one desired method:***

• main function

**Commands:**

There will be a command pack in three lines. The first line is the number of books. Second-line for book
ids that will be added to the tree. The books need to be added to the tree respectively. The third line is for
the two book ids that the client wanted. After this command pack, you need to give the answer that Ethan
wanted which is the id of the subtree root. This command pack will be repeated until -1 input given for the
number of books.

Command Pack:

number of books
  
list of book ids
    
<asked book 1> <asked book 2>
