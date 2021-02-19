#include <iostream>
#include "CircleList.h"
#include "Queue.h"

using namespace std;

void use_CircleList() {

    // create a CircleList in the stack
    CircleList c1; // auto memory allocation

    // add data to the CircleList
    c1.add("Jama");
    c1.add("Sally");
    c1.add("Kimbo");

    // print the data of the CircleList
    for (int i = 0; i < 3; i++) {
        cout << c1.front() << "\n";
        c1.advance();
    }
}

void use_Queue(){
    LinkedQueue q; // create a queue in the stack
    cout << "The size after creating a queue: " << q.size() << "\n";

    q.enqueue("Asa");
    q.enqueue("Riley");

    cout << "The size after enqueue Asa and Riley: " << q.size() << "\n";
    cout << q.front() << " is at the front of the queue \n";
    q.dequeue();
    cout << "The size after dequeuing Asa: " << q.size() << "\n";
    cout << q.front() << " is at the front of the queue \n";

}

int main() {
    use_CircleList();
    use_Queue();
    return 0;
}
