# **AIM**

Queue implementation using array.

menu options - i) Insert ii) Delete iii) Display iv) exit

## **THEORY**

A queue is an abstract data structure that contains a collection of elements. Queue implements the FIFO mechanism i.e., the element that is inserted first is also deleted first. In other words, the least recently added element is removed first in a queue.

In software terms, the queue can be viewed as a set or collection of elements as shown below. The elements are arranged linearly.

![image](https://github.com/Purvansha022609/Queue/assets/139473344/db815fd1-1165-41dc-9ef9-a7e467e28ec3)

We have two ends i.e. “front” and “rear” of the queue. When the queue is empty, then both the pointers are set to -1.

The “rear” end pointer is the place from where the elements are inserted in the queue. The operation of adding /inserting elements in the queue is called “enqueue”.

The “front” end pointer is the place from where the elements are removed from the queue. The operation to remove/delete elements from the queue is called “dequeue”.

When the rear pointer value is size-1, then we say that the queue is full. When the front is null, then the queue is empty.

- Basic Operations

The queue data structure includes the following operations:

EnQueue: Adds an item to the queue. Addition of an item to the queue is always done at the rear of the queue.

DeQueue: Removes an item from the queue. An item is removed or de-queued always from the front of the queue.

isEmpty: Checks if the queue is empty.

isFull: Checks if the queue is full.

peek: Gets an element at the front of the queue without removing it.

- **Enqueue**
In this process, the following steps are performed:

Check if the queue is full.

If full, produce overflow error and exit.

Else, increment ‘rear’.

Add an element to the location pointed by ‘rear’.

Return success.

- **Dequeue**

Dequeue operation consists of the following steps:

Check if the queue is empty.

If empty, display an underflow error and exit.

Else, the access element is pointed out by ‘front’.

Increment the ‘front’ to point to the next accessible data.

Return success.

## **ALGORITHM**

- Algorithm for Queue Implementation Program:

1.Start.

2.Create a Queue class with private members:

front: an integer to track the front of the queue.

rear: an integer to track the rear of the queue.

array: an integer array to store queue elements.

size: an integer (not explicitly mentioned in the code, assumed to be MAXSIZE) to represent the maximum size of the queue.

3.Define the constructor Queue() for the Queue class:

Initialize front and rear to -1 to indicate an empty queue.

4.Implement the EnQueue(int element) method:

Check if rear is equal to MAXSIZE - 1 (indicating a full queue).

If the queue is full, print "Queue overflow" and return.

If the queue is empty (front is -1), set front to 0.

Increment rear and add the element to the array.

5.Implement the DeQueue() method:

Check if the queue is empty, which is either when front is -1 or when front is equal to rear + 1 (indicating no elements).

If the queue is empty, print "Queue is empty" and return ERROR.

Retrieve the element from the array at the front, increment front, and return the element.

6.Implement the Display() method:

Check if the queue is empty (same conditions as in DeQueue()).

If the queue is empty, print "Queue is empty" and exit.

Loop from the front to the rear, and for each index, print the corresponding element in the array.

7.In the main function:

Create an instance of the Queue class (q1).

Enqueue two elements, 10 and 20, using the EnQueue method.

Dequeue an element and store it in variable v using the DeQueue method.

Display the elements in the queue using the Display method.

8.End.

This program provides a simple interface for managing a queue, allowing elements to be enqueued, dequeued, and displayed. It checks for overflow and underflow conditions before performing enqueue and dequeue operations.

- Algorithm for Queue Implementation Program:

1.Start.

2.Create a Queue class with private members:

front: an integer to track the front of the queue.

rear: an integer to track the rear of the queue.

maxSize: an integer to store the maximum size of the queue.

queueArray: a dynamic integer array to store queue elements.

3.Define the constructor Queue(int size) for the Queue class:


Initialize maxSize with the given size.

Allocate memory for the queueArray with a size of maxSize.

Initialize front and rear to -1 to indicate an empty queue.

4.Define the destructor ~Queue() for the Queue class:

Deallocate the memory for the queueArray.

Implement the isFull() method to check if the queue is full by comparing rear with maxSize - 1.

Implement the isEmpty() method to check if the queue is empty by checking if front is -1 or if front is greater than rear.

5.Define the insert(int item) method (enqueue):

Check if the queue is full using isFull().

If the queue is full, print "Queue is full. Cannot insert."

If the queue is empty (front is -1), set front to 0.

Increment rear, add the item to the queueArray, and print "Inserted [item] into the queue."

6.Define the remove() method (dequeue):

Check if the queue is empty using isEmpty().

If the queue is empty, print "Queue is empty. Cannot delete."

Otherwise, print "Deleted [item] from the queue," where [item] is the element at the front, and increment front.

7.Define the display() method:

Check if the queue is empty (same conditions as in remove()).

If the queue is empty, print "Queue is empty."

Loop from front to rear and for each index, print the corresponding element in the queueArray.

8.In the main function.

Prompt the user to enter the size of the queue.

Create a Queue instance called queue with the specified size.

Create a loop for displaying a menu of options:

Insert (enqueue) an item into the queue.

Remove (dequeue) an item from the queue.

9.Display the elements in the queue.

10.Exit the program.

11.Based on the user's choice, call the corresponding methods from the Queue class.

Continue the loop until the user chooses to exit.

12.End.

This program provides a simple menu-driven interface for managing a queue, allowing elements to be enqueued, dequeued, and displayed. It checks for overflow and underflow conditions before performing enqueue and dequeue operations. The program allows the user to interact with the queue by inserting and removing elements and displaying the queue's contents.

## **OUTPUT**

1.
![exp20_1](https://github.com/Purvansha022609/Queue/assets/139473344/0fa4cc35-75b5-4a8a-9d42-c4a9c8f39e15)

2.
![exp20_2](https://github.com/Purvansha022609/Queue/assets/139473344/585fc76e-aed7-4fa3-92a9-35bd4ba23756)
![exp20_3](https://github.com/Purvansha022609/Queue/assets/139473344/06237df8-ac4e-435d-ba2f-ab64ea1dec11)
![exp20_4](https://github.com/Purvansha022609/Queue/assets/139473344/1270553f-3c98-4e92-a5a5-9559427062ff)
