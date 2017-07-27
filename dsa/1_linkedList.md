#Linked List
---------------------------------------------------------
As the name suggest it is a collection of lists held together through links or some kind. In some ways
a linked list is a lot like array. At this point if you are wondering "what is an array?", I don't think I can really do much.
While array is a contiguous allocation of a collection of items, linked list is not contiguous, It can be stored anywhere in
memory and the links are established using address pointers.

Now if you thinking (which is really a nice thing to do!), why would I want a data structure which does same thing as array and
sounds more complicated to implement? Array has it limitation that is you have to know how many items you are storing before hand as
it has to find that much room at the same place in memory. With linked list because it doesn't need to be stored in one place you can
store as much stuff as you like in it. Of course, till you run out of memory. Now that doesn't sound too bad does it! You might actually even find some use for it!

Few highlights of Linked List are:
- Successive elements (also referred to as nodes sometimes) are linked using pointers
- it has a data component and link component, data stores the data (duh!) and link store pointer to next node
- The last node link component points to nothing (NULL), which is suggestive to the end
- It can grow and shrink if there is enough memory
- Is more memory efficient

##Implementing it! ADT
###Critical Operations
- Insert:	inserts	an	element	into	the	list
- Delete:	removes	and	returns	the	specified	position	element	from	the	list

###Other Operations

- Delete	List:	removes	all	elements	of	the	list	(disposes	the	list)
- Count:	returns	the	number	of	elements	in	the	list
- FindANode:	n th 	node	from	the	end	of	the	list
