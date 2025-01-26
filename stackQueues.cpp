// C++ code to train stacks and queues

#include <iostream>
#include <stack> // LIFO
// empty() – Returns whether the stack is empty.
// size() – Returns the size of the stack.
// top() – Returns a reference to the top most element of the stack.
// push(g) – Adds the element ‘g’ at the top of the stack.
// pop() – Deletes the most recent entered element of the stack.

#include <queue> // FIFO
// empty()	Returns whether the queue is empty. It returns true if the queue is empty; otherwise, false.
// size()	Returns the size of the queue.
// swap()	Exchange the contents of two queues. The queues must be of the same data type, although sizes may differ.
// emplace() Insert a new element into the queue container. The new element is added to the end of the queue.
// front()	Returns a reference to the first element of the queue.
// back()	Returns a reference to the last element of the queue.
// push(g)	Adds the element 'g' at the end of the queue.
// pop()	Deletes the first element of the queue.

using namespace std;

int main(){
    stack<int> armut;
    armut.push(42);
    armut.push(43);
    armut.push(44);

    cout << "Size of the stack: " << armut.size() << endl;
    cout << "Top element: " << armut.top() << endl;
    armut.pop();
    cout << "Top element after pop: " << armut.top() << endl;

    cout << "-------------------------" << endl;
    queue<int> elma;
    elma.emplace(21);
    elma.emplace(22);
    elma.emplace(23);

    cout << "Size of the queue: " << elma.size() << endl; 
    cout << "Front element: " << elma.front() << endl;
    cout << "Back element: " << elma.back() << endl;
    elma.pop();
    cout << "Front element after pop: " << elma.front() << endl;
    cout << "Back element after pop: " << elma.back() << endl;

    return 0;
}