#include<stdio.h>

int main ()
{
  // Declare matrices and variables
  int a[100][100], b[100][100], i, j, k, r, c, mul[100][100];
  
  // Ask the user for the number of rows and columns for the first matrix
  printf ("Enter how many rows and columns you want for first matrix A ");
  scanf ("%d%d", &r, &c);
  
  // Get the elements of the first matrix from the user
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < c; j++)
	{
	  printf ("\nEnter the element for A[%d][%d] ", i + 1, j + 1);
	  scanf ("%d", &a[i][j]);
	}
    }
    
  // Print the first matrix
  printf ("\nThe matrix A is \n");
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < c; j++)
	{
	  printf ("%d ", a[i][j]);
	}
      printf ("\n");
    }
    
  // Ask the user for the number of rows and columns for the second matrix
  printf ("Enter how many rows and columns you want for second matrix B ");
  scanf ("%d%d", &r, &c);
  
  // Get the elements of the second matrix from the user
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < c; j++)
	{
	  printf ("\nEnter the element for B[%d][%d] ", i + 1, j + 1);
	  scanf ("%d", &b[i][j]);
	}
    }
    
  // Print the second matrix
  printf ("\nThe matrix B is \n");
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < c; j++)
	{
	  printf ("%d ", b[i][j]);
	}
      printf ("\n");
    }
    
  // Multiply the matrices
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < c; j++)
	{
	  mul[i][j] = 0;
	  for (k = 0; k < c; k++)
	    {
	      mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
	    }
	}
    }
    
  // Print the result of the matrix multiplication
  printf ("\nThe matrix after multiplication of matrices a and b is \n");
  for (i = 0; i < r; i++)
    {
      for (j = 0; j < c; j++)
	{
	  printf ("%d ", mul[i][j]);
	}
      printf ("\n");
    }
}
