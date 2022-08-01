**CENG 301**

Algorithms and Data Structures

Spring 2020-2021

**Linked List Assignment**


In this assignment, a simple management system of a cargo company should be made. Items come

to the cargo company and they need to be loaded into the cargo truck. The company has a primitive

system.

• Each cargo truck can carry a maximum of 8 items.

• When a new item arrives, if there is an empty place in the existing trucks, that truck must be

filled. If all trucks are full, one more truck must be added to the end of the queue.

• The company is also capable of removing an item in the desired truck and position. After the

operation, there is no item remains from the desired truck, need to extract that truck also.

• The company can depart the full cargo trucks at any time.

• The company can receive status reports in two different ways, one in summary and the other

in detail.



It was decided to create a simple simulation to make this system. Both trucks and items will be

represented as two different node types. While the truck nodes were creating a doubly linked list, it

was deemed to create a one-way linked list with items. The reason for this was to provide efficient

traversal as the number of trucks could never be determined. However, since there will be a maximum

of 8 node linked lists in a single truck, a one-way linked list was found appropriate.


***Item node is expected to keep these variables:***

• Position of the item (starts with 1)

• Address of the next item

• Value of the item

***Truck node is expected to keep these variables:***

• Total value of the items

• Address of the next truck

• Address of the previous truck

• Address of the head item

• Address of the tail item

***Also, system is expected to keep these variables:***

• Total number of trucks

• Address of the head truck

• Address of the tail truck




In this assignment, you are expected to code the desired system. Your code should perform the

following commands in the most efficient way, specific to the given system. For submission just one

“.cpp” file required.

**Commands:**

• ai <itemValue> => for adding an item

• ri <truckPosition> <itemPosition> => for removing an item (positions start from 1)

• depart => for departing the full cargo trucks

• rd => detailed report

• rs => summary report

• q => quit




