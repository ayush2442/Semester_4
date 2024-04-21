experiment 1.1
Experiment 1

Aim: Implementation of Binary Search using the Divide & Conquer Approach.

 

1.1CO Attained: CO2 and CO3

1.2Objective:

Inthisalgorithm,wewanttofindwhetherelementxbelongstoasetofnumbersstoredinanarray of numbers[]. Where l and r represent the left and right index of a sub-array in which the searchingoperationshould beperformed.

1.3 Resources:C/C++, Dev C++

1.4Program Logic:

Binary search follows the divide and conquer approach in which the list is divided into two halves, and the item is compared with the middle element of the list. If the match is found then, the location of the middle element is returned. Otherwise, we search into either of the halves depending upon the result produced through the match.

Algorithm:Binary-Search(numbers[],x,l,r)

ifl=rthenreturnlelse

m:=⌊(l +r)/ 2⌋

ifx ≤ numbers[m]then

return Binary-Search(numbers[], x, l, m)else

returnBinary-Search(numbers[],x,m+1,r)


 

 

1.5 PROCEDURE:

 

1. Create: Open Dev C++/Cand write a program after that save the program with the .c extension.

2. Compile: Alt + F9

3. Execute: Ctrl + F10

 

 

1.6 Code:

#include <stdio.h>

int main()

{

int c, first, last, middle, n, search, array[100];

printf("Enter number of elements\n");

scanf("%d",&n);

printf("Enter %d integers\n", n);

for (c = 0; c < n; c++)

scanf("%d",&array[c]);

printf("Enter value to find\n");

scanf("%d", &search);

first = 0; last = n - 1;

middle = (first+last)/2;

while (first <= last) {

if (array[middle] < search)

first = middle + 1;

else if (array[middle] == search)

 {

printf("%d found at location %d.\n", search, middle+1); break;

}

else

last = middle - 1;

middle = (first + last)/2;

}

if (first > last)

printf("Not found! %d isn't present in the list.\n", search);

return 0; 

}

1.7  Conclusion:

 


1.8  Analysis:

LinearsearchrunsinONotime.WhereasbinarysearchproducestheresultinO(logn)time.Let TNobe the numberofcomparisonsin worst-caseinanarrayofelements.Using this recurrence relation TNo=(logn) Therefore, binary search uses O(logn)time.

 

1.9  VIVA-VOCE QUESTIONS:

 

1.         Differentiate between a recursive approach and an iterative approach?

2.         What is the worst-case complexity of binary search using recursion?

3.         What are the applications of binary search?  
