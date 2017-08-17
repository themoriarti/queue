#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Q
{
//char *create_queue;
unsigned char data[2048];
int max_queue = 15;
int max_data = 80;

} q1,q2;

//Q qq;

Q *create_queue()
{ // Creates a FIFO byte queue, returning a handle to it.
 queue<char*> Q *q;
}

void destroy_queue(Q *q)
{ // Destroy an earlier created byte queue.

}

void enqueue_byte(Q *q, unsigned char b)
{ // Adds a new byte to a queue.
    q.push(b);
}

unsigned char dequeue_byte(Q *q)
{ // Pops the next byte off the FIFO queue.
  char* m = q->front();
  q->pop();
  return m;
}

void on_out_of_memory();

void on_illegal_operation();

int main()
{
  Q *q0 = create_queue();
  enqueue_byte(q0, 0);
  enqueue_byte(q0, 1);
  Q *q1 = create_queue();
  enqueue_byte(q1, 3);
  enqueue_byte(q0, 2);
  enqueue_byte(q1, 4);
  printf("%d", dequeue_byte(q0));
  printf("%d\n", dequeue_byte(q0));
  enqueue_byte(q0, 5);
  enqueue_byte(q1, 6);
  printf("%d", dequeue_byte(q0));
  printf("%d\n", dequeue_byte(q0));
  destroy_queue(q0);
  printf("%d", dequeue_byte(q1));
  printf("%d", dequeue_byte(q1));
  printf("%d\n", dequeue_byte(q1));
  destroy_queue(q1);
  return 0;
}
