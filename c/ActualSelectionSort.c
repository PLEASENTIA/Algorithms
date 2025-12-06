/*
 * Selection Sort.
 * This is the textbbook selection sort where the
 *  element is taken out and the rest of the elements
 *  are shifted to the left from the empty spot.
 * Then the whole array is shifted to the right
 *  from the unsorted elements.
 * Finally the previously removed element is
 *  placed in the front of the unsorted array.
*/
#include<stdio.h>
#define n 10
int main() {
  int a[n] = {37, 12, 89, 5, 46, 23, 71, 8, 54, 19};
  int temp;
  //Printing the input array
  printf("Original Array: ");
  for(int i=0; i<n; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
  for(int j=0; j<n; j++)//For Iterations
  {
    int min=j;
    for(int i=j;i<n;i++)//This finds the min elem from array and takes note of index.
    {
      if(a[i]<a[min])
      {
        min=i;
      }
      
    }
    printf("Min element = ");
    printf("%d\n",a[min]);
    temp=a[min];//Here is where the element is taken out.(more like copied and then replaced later)
    //Shifting to left after empty space
    for(int i=min;i<n-1;i++)//Here the copied item spot is replaced by successor.
    {
      a[i]=a[i+1];
    }
    a[n-1]=0;//Assigned 0 since otherwise garbage value.(not good)
    //printing the array
    printf("Shifting to left\n");

    for(int i=0; i<n; i++)
    {
      printf("%d ", a[i]);
    }
    printf("\n");
    //Shifting to right from the start
    
    for(int i=n-2;i>=j; i--)
    {
      a[i+1]=a[i];
    }
    a[j]=0;//Assigning 0 since otherwise garbage value.(not good)
    printf("Shifting to right\n");
    //printing the array
    for(int i=0; i<n; i++)
    {
      printf("%d ", a[i]);
    }
    //Insert the min element back in postion!
    a[j]=temp;
    printf("\n");
    printf("Array after %dth Iteration: ", j);
    for(int i=0; i<n; i++)
    {
      printf("%d ", a[i]);
    }
    printf("\n");
  }

  return 0;
}
