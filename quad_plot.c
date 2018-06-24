// plotting quadratic functions
// author: Cohen Robinson
// date: 23/06/18

#include <stdlib.h>
#include <stdio.h>

// declare functions
float quadratic(float a, float b, float c, float x);

int main()
{
  FILE *quad_data;       // file pointer
  // declare integers a, b
  int a, b, c, n;
  // print user prompt to input
  printf("Enter integer value of a: \n");
  // assign user input to a
  scanf("%d", &a);
  // print user prompt to input
  printf("Enter integer value of b: \n");
  // assign user input to b
  scanf("%d", &b);
  // print user prompt to input
  printf("Enter integer value of c: \n");
  // assign user input to c
  scanf("%d", &c);
  // print user prompt
  printf("Enter number of values of x: \n");
  scanf("%d", &n);
  quad_data = fopen("quadratic.dat", "w");     // opens file
  fprintf(quad_data, "# X Y\n");
  // loops over x-values 1-5
  for(int i=1; i<=n; i++)
  {
    // prints data to file
    fprintf(quad_data, "  %0.1d %0.1f\n", i, quadratic(a, b, c, i));
  }
  return 0;
}

// quadratic function definition
float quadratic(float a, float b, float c, float x)
{
  return (a*x*x) + (b*x) + c;
}
