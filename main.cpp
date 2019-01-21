#include <iostream>
#include <cstdlib>
#include "Queue.h"

int main() {

    Queue queue;
    std::cout << queue.isEmpty() << "\n";

    queue.enqueue(10);
    queue.enqueue(9);
    queue.enqueue(8);
    queue.enqueue(7);
    queue.enqueue(6);
    queue.enqueue(5);
    queue.enqueue(4);
    queue.enqueue(3);
    queue.enqueue(2);
    queue.enqueue(1);

    std::cout << queue.isEmpty() << "\n";

    std::cout << queue.dequeue() << "\n";
    std::cout << queue.dequeue() << "\n";
    std::cout << queue.dequeue() << "\n";
    std::cout << queue.dequeue() << "\n";
    std::cout << queue.dequeue() << "\n";

    std::cout << queue.isEmpty() << "\n";

    std::cout << queue.dequeue() << "\n";
    std::cout << queue.dequeue() << "\n";
    std::cout << queue.dequeue() << "\n";
    std::cout << queue.dequeue() << "\n";
    std::cout << queue.dequeue() << "\n";

    std::cout << queue.isEmpty() << "\n";
}