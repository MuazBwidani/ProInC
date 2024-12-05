// Second hw (Veri Yapıları).cpp 
//Ad / SoyAd : MUAZ BWIDANI
//Öğrenci Num : 1306190101

#include <iostream>
#include <time.h>
static int ccount=0;
class Queue
{
public:
    int front, rear, size;
    unsigned capacity;
    int* array;
};

Queue* createQueue(unsigned capacity)
{
    Queue* queue = new Queue();
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1; 
    queue->array = new int[(queue->capacity * sizeof(int))];
    return queue;
}

int isFull(Queue* queue)
{
    return (queue->size == queue->capacity);
}

int isEmpty(Queue* queue)
{
    return (queue->size == 0);
}

void enqueue(Queue* queue, int item)
{
    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    cout << item << " enqueued to queue\n";
}

int dequeue(Queue* queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}

int front(Queue* queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->front];
}

int rear(Queue* queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->rear];
}
void search(Queue* queue,int x)
{
    
    if (isEmpty(queue))
        break;
    if (queue->array[queue->rear] == x)
        count++;
    else
        search(queue->array[queue->rear]++);
}
int main()
{
    int x, y;
      
    Queue* queue = createQueue(100);

    cout << dequeue(queue) << " dequeued from queue\n";

    cout << "Front item is " << front(queue) << endl;
    cout << "Rear item is " << rear(queue) << endl;

    for (int i = 1; i <= 1000; i++)
    {
        x = rand();
        cout << i;
        printf(" %d\n", x);
        enqueue(queue, x);
    }
    cout << "Enter the element you want to search" << endl;
    cin >> y;
    search(queue, y);

    if (ccount == 0)
        cout << "The number is not exist" << endl;
    else
        cout << "you have " << ccount<< "   number" << endl;

    return 0;
}