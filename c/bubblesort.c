//BUBBLE SORT
/*here, the algorithm checks every 2 number and if the number
 * on the left is greater than the right then swap.
 * this is done until the end of the numbers,
 * this way the largest number is on the right most/last position.
 *
 * then the same thing is repeated until the second largest is
 * in the second last position.
 * third largest is in the third last position,
 * until the smallest in the first position.
 *
 * How it works:

   1. Go through the array, one value at a time.
   2. For each value, compare the value with the next value.
   3. If the value is higher than the next one, swap the values so that the highest value comes last.
   4. Go through the array as many times as there are values in the array.
*/
#include <stdio.h>
#define n 10
int main () {
  //int n = 10; //because defined at runtime, use define instead.
  int a[n] = {12, 5, 9, 1, 20, 7, 3, 15, 8, 10};
  int temp;
  //Printing the input
  for(int i=0; i<n; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
  for(int pass=0; pass<n-1; pass++)//for loop for iteration passing. since the inner loop only arranges the largest to last once hence bubble sort. This essentially arranges second largest to second last and so on.
  {
    for (int i=0; i<n-1-pass;i++)//actual swapping of 0,1 if 0>1.(i,i+1)* if (i>i+1). Here i is position/index which is incremented.
    {/*we use n-1-pass instead of just n-1 because,
        we dont want to go the the end of the numbers
        all the time since the end is already the largest
        in ascending order.

      Using n-1-pass, we reduce the length to checks
        by pass(i.e. 0,1,2,3,..)*/

      if(a[i]>a[i+1])//Swapping of numbers if previous > next.(i>i+1)
      {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        //Printing the output for every change
        for(int i=0; i<n; i++)
        {
          printf("%d ", a[i]);
        }
        printf("\n");
      }
    }
  }
  //Printing the output
  for(int i=0; i<n; i++)
  {
    printf("%d ", a[i]);
  } 
  return 0;
}
