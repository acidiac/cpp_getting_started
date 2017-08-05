#Singly Linked List

We have seen Arrays before and they are great for storing data in an order but they are not very flexible and versatile.
- We have to fix size of array during declaration
- Insertion and deletion is not efficient as we have to shift cells left or right
- Resizing an Array proves to be very difficult
- Can have serious wastage of space

A linked list provides us with an alternative to arrays for storing sequential set of data. Linked list is based on pointers and does not need contiguous memory and it can grow and shrink at runtime. Data is stored in node which is made up of data and pointer address to next node. In a way, its like a train with connectors in between that allow us navigating entire length of the train.

A node contains data and address of the next node which is a pointer.
```
    struct Node{
        <datatype> data;
        struct Node* next;
    };
```

    NodeA[ data | &B ] ==> NodeB[ data | &C ] ==> NodeC[ data | &N ] ==> NodeN[ data | NULL]
.......
## Terms

**next pointer**: Is the pointer to the next node 
**Link Hopping**: When we traverse the nodes one to another sequential using the next
**Head**: First node in the list
**Tail**: Last node in the list