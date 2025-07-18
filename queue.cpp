#include "queue.h"

int main() {
    Queue<int> q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();  // Output: 10 20 30

    cout << "Front: " << q.front() << endl;

    q.dequeue();
    q.display();  // Output: 20 30

    return 0;
}
