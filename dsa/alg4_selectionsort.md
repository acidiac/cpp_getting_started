Selection sort is like: you have face up cards and you can see all at a time. First pick up the maximum numbered card, and then choose the next best maximum number and keeping them in hand in order. Continue till all the cards exhausted. So the idea is (for increasing order sort), scan through the list of numbers and find the maximum and swap it to the last number. Now scan through remaining numbers excluding the last one to find the next best maximum. And now swap with the last number of the remaining numbers. Continue till all the numbers are done. See below example output to see the operation.

Best, Average and Worst case performance are O(N^2).
In-place and can be implemented as Stable.

http://www.sourcetricks.com/2013/03/selection-sort.html
