/*Name-Purvansha Gehlod
PRN-22070123088
Exp-20(Part-A)*/
#define ERROR -9999
#define MAXSIZE 10
#include<iostream>
using namespace std;
class Queue
{
    int front,rear;
    int array[MAXSIZE];
    int size;
    public:
    Queue()
    {
        front=rear=-1;
    }
    void EnQueue(int item);
    int DeQueue();
    void Display();
};
void Queue::EnQueue(int element)
{
    if(rear==MAXSIZE-1)
    {
        cout<<"Queue overflow";
        return;
    }
    else
    {
        if(front==-1)
        front=0;

        rear++;
        array[rear]=element;
    }
}
int Queue::DeQueue()
{
    if(front==-1||front==rear + 1)
    {
        cout<<"Queue is empty";
        return ERROR;
    }
    int ele = array[front];
    front++;
    return ele;

}
void Queue::Display()
{
    int i = front;
    if(front==-1||front==rear+1)
    {
    cout<<"Queue is empty"<<endl;
    }
    while(i<=rear)
    {
        cout<<array[i]<<endl;
        i++;
    }
}
int main()
{
    Queue q1;
    q1.EnQueue(10);
    q1.EnQueue(20);
    int v=q1.DeQueue();
    q1.Display();
}
/*Output
20
*/

/*Name-Purvansha Gehlod
PRN-22070123088
Exp-20(Part-B)
Queue implementation using array.
menu options - i) Insert ii) Delete iii) Display iv) exit
*/
#include <iostream>
using namespace std;

class Queue {
private:
    int front;
    int rear;
    int maxSize;
    int* queueArray;

public:
    Queue(int size) {
        maxSize = size;
        queueArray = new int[maxSize];
        front = -1;
        rear = -1;
    }

    ~Queue() {
        delete[] queueArray;
    }

    bool isFull() {
        return (rear == maxSize - 1);
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    void insert(int item) {
        if (isFull()) {
            cout << "Queue is full. Cannot insert." << endl;
        } else {
            rear++;
            queueArray[rear] = item;
            if (front == -1) {
                front = 0;
            }
            cout << "Inserted " << item << " into the queue." << endl;
        }
    }

    void remove() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot delete." << endl;
        } else {
            cout << "Deleted " << queueArray[front] << " from the queue." << endl;
            front++;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << queueArray[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int size;
    cout << "Enter the size of the queue: ";
    cin >> size;

    Queue queue(size);

    int choice;
    while (true) {
        cout << "Menu options:" << endl;
        cout << "i) Insert (Enqueue)" << endl;
        cout << "ii) Delete (Dequeue)" << endl;
        cout << "iii) Display" << endl;
        cout << "iv) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                int item;
                cout << "Enter an item to insert: ";
                cin >> item;
                queue.insert(item);
                break;
            case 2:
                queue.remove();
                break;
            case 3:
                queue.display();
                break;
            case 4:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    }

    return 0;
}
/*Output
Enter the size of the queue: 5

Menu options:
i) Insert (Enqueue)
ii) Delete (Dequeue)
iii) Display
iv) Exit
Enter your choice: 1
Enter an item to insert: 10
Inserted 10 into the queue.

Menu options:
i) Insert (Enqueue)
ii) Delete (Dequeue)
iii) Display
iv) Exit
Enter your choice: 1
Enter an item to insert: 20
Inserted 20 into the queue.

Menu options:
i) Insert (Enqueue)
ii) Delete (Dequeue)
iii) Display
iv) Exit
Enter your choice: 3
Queue elements: 10 20 

Menu options:
i) Insert (Enqueue)
ii) Delete (Dequeue)
iii) Display
iv) Exit
Enter your choice: 2
Deleted 10 from the queue.

Menu options:
i) Insert (Enqueue)
ii) Delete (Dequeue)
iii) Display
iv) Exit
Enter your choice: 3
Queue elements: 20 

Menu options:
i) Insert (Enqueue)
ii) Delete (Dequeue)
iii) Display
iv) Exit
Enter your choice: 4
Exiting the program.
*/
