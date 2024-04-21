Experiment-1.2
Experiment 2

Aim:Implementation of Quick Sort using Divide & Conquer Approach.

1.1       CO attained:CO2, CO3, 

 

1.2       Objective: Sort a given set of elements using the Quick sort method and determine the time required to sort the elements. Repeat the experiment for different values of n, the number of elements in the list to be sorted and plot a graph of the time taken versus n. The elements can be read from a file or can be generated using the random number generator.

 

1.3       Resource: C/C++, Dev C++

 

1.4       Program Logic:QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot.

There are many different versions of QuickSort that pick pivot in different ways.

1. Always pick the first element as a pivot.

2. Always pick last element as a pivot (implemented below)

3. Pick a random element as a pivot.

4. Pick the median as a pivot.

 

1 Algorithm QuickSort(p, q)

2 // Sorts the elements a[p],..., a[q] which reside in the global

3 // array a[l:n] into ascending order; a[n+1]is considered to

4 //be defined and must be >= all the elements in a[l:n].

5 {

6 if (p <q) then //If there are more than one element

7 {

8 // divide P into two sub problems.

9 j :=Partition(a,p, q + 1);

10 // j is the position of the partitioning element.

11 // Solve the sub problems.

12 QuickSort(p,j-1);

13 QuickSort(j+ l,q);

14 // There is no need for combining solutions.

15 }}

 

1.5       Procedure:

1. Create: Open Dev C++/C and write a program after that save the program with the .c extension.

2. Compile: Alt + F9

3. Execute: Ctrl + F10

 

 

 

 

 

 

1.6       Code:

 

#include<stdio.h>

 

void quicksort(int number[25],int first,int last){

 

int i, j, pivot, temp;

 

if(first<last){

 

pivot=first;

 

i=first;

 

j=last;

 

while(i<j){

 

while(number[i]<=number[pivot]&&i<last)

 

i++;

 

while(number[j]>number[pivot])

 

j--;

 

if(i<j){

 

temp=number[i];

 

number[i]=number[j];

 

number[j]=temp;

 

}}

 

temp=number[pivot];

 

number[pivot]=number[j];

 

number[j]=temp;

 

quicksort(number,first,j-1);

 

quicksort(number,j+1,last);

 

}}

 

int main(){

 

int i, count, number[25];

 

printf("Enter some elements (Max. - 25): ");

 

scanf("%d",&count);

 

printf("Enter %d elements: ", count);

 

for(i=0;i<count;i++)

 

scanf("%d",&number[i]);

 

quicksort(number,0,count-1);

 

printf("The Sorted Order is: ");

 

for(i=0;i<count;i++)

 

printf(" %d",number[i]);

 

return 0;

 

}

 

1.7       Conclusion:


1.8       Analysis:

Best complexity

Worst Complexity

Average Complexity

          O(n*log n)

O(n2)

  O(n*log n)

 

1.9       Lab Viva Questions:

1. What is the average case time complexity of quick sort.

2. Explain is divide and conquer.

3. Define in place sorting algorithm.

4. List different ways of selecting pivot element.
