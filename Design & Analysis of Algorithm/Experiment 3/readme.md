Experiment-1.3
Experiment 3

 

Aim 3:Implement Strassen Matrix Multiplication using Divide & Conquer Approach.

 

3.1            CO attained:CO1, CO3, CO5

 

3.2            Objective:

The aim is to design a program, which generates two matrices with various dimensions and multiplies the two matrices usingstrassen's algorithm. In linear algebra, the Strassen algorithm, named after Volker Strassen, is an algorithm for matrix multiplication. It is faster than the standard matrix multiplication algorithm for large matrices, with a better asymptotic complexity.

 

3.3            Resource:Turbo c/Dev C++

 

3.4            Program Logic:

Matrix multiplication is based on a divide and conquer-based approach. Here we divide our matrix into a smaller square matrix, solve that smaller square matrix and merge into larger results. For larger matrices this approach will continue until we recurse all the smaller sub matrices.

Using Strassen’s Algorithm computes the following −

M1:=(A+C)×(E+F)

M2:=(B+D)×(G+H)

M3:=(A−D)×(E+H) M4:=A×(F−H) M5:=(C+D)×(E)

M6:=(A+B)×(H) M7:=D×(G−E)

I:=M2+M3−M6−M7

 J:=M4+M6

K:=M5+M7

L:=M1−M3−M4−M5

 

3.5            Procedure:

1. Create: Open Dev C++/C and write a program after that save the program with the .c extension.

2. Compile: Alt + F9

3. Execute: Ctrl + F10

 

 

 

3.6            Source code:

#include<stdio.h>

int main(){

  int a[2][2], b[2][2], c[2][2], i, j;

  int m1, m2, m3, m4 , m5, m6, m7;

printf("Enter the 4 elements of first matrix: ");

for(i = 0;i < 2; i++)

for(j = 0;j < 2; j++)

scanf("%d", &a[i][j]);

printf("Enter the 4 elements of second matrix: ");

for(i = 0; i< 2; i++)

for(j = 0;j < 2; j++)

scanf("%d", &b[i][j]);

printf("\nThe first matrix is\n");

for(i = 0; i < 2; i++){

      printf("\n");

for(j = 0; j < 2; j++)

printf("%d\t", a[i][j]);  }

printf("\nThe second matrix is\n");

for(i = 0;i < 2; i++){

      printf("\n");

for(j = 0;j < 2; j++)

printf("%d\t", b[i][j]);

}

  m1= (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);

  m2= (a[1][0] + a[1][1]) * b[0][0];

  m3= a[0][0] * (b[0][1] - b[1][1]);

  m4= a[1][1] * (b[1][0] - b[0][0]);

  m5= (a[0][0] + a[0][1]) * b[1][1];

  m6= (a[1][0] - a[0][0]) * (b[0][0]+b[0][1]);

  m7= (a[0][1] - a[1][1]) * (b[1][0]+b[1][1]);

  c[0][0] = m1 + m4- m5 + m7;

  c[0][1] = m3 + m5;

  c[1][0] = m2 + m4;

  c[1][1] = m1 - m2 + m3 + m6;

printf("\nAfter multiplication using Strassen's algorithm \n");

for(i = 0; i < 2 ; i++){

      printf("\n");

for(j = 0;j < 2; j++)

printf("%d\t", c[i][j]);

   }

   return 0;

}

3.7            Conclusion:

 


3.8            Analysis:

The complexity of Strassen’s matrix multiplication algorithm is O(nlog7)

3.9            Lab Viva Questions:

1.      Why Strassen's matrix algorithm is better than normal matrix multiplication?

2.      What is the formula to calculate the element present in the second row, first column of the product matrix?

3.      Is there any optimum solution for Matrix multiplication?

4.      What is the recurrence relation used in Strassen’s algorithm?

