# DSA Lab – Queue Operations

## 1. Problem Statement
To implement different types of queues in C++ and understand their operations and working principles.

## 2. Approach

Implemented the following data structures:

- **Circular Queue:** A queue in which the last position connects back to the first position to reuse empty spaces.
- **Deque (Double Ended Queue):** Allows insertion and deletion of elements from both front and rear ends.
- **Linked List Queue:** Implements a queue using linked lists with dynamic memory allocation.

### Basic Operations
- Enqueue – Insert an element.
- Dequeue – Remove an element.
- Display – Show queue elements.
- Peek – View the front element.

## 3. Time and Space Complexity

| Operation | Time Complexity |
|---|---|
| Enqueue | O(1) |
| Dequeue | O(1) |
| Peek | O(1) |
| Display | O(n) |

**Space Complexity:** O(n), where n is the number of elements.

## 4. Sample Input / Output

**Input:**
```text
Enqueue: 10
Enqueue: 20
Enqueue: 30
Dequeue
```

**Output:**
```text
Queue: 20 30
Front Element: 20
```

## 5. Screenshots
Screenshots of Circular Queue, Deque and Linked List Queue program outputs are included.

## 6. Learning Outcomes
- Understood the FIFO principle.
- Learned circular queue implementation.
- Understood insertion and deletion at both ends of a deque.
- Learned dynamic memory allocation using linked lists.
- Practiced queue operations in C++.

## Conclusion
This lab helped me understand different queue implementations and their operations using C++.

**Subject:** Data Structures and Algorithms  
**Topics:** Circular Queue, Deque and Linked List Queue  
**Programming Language:** C++
