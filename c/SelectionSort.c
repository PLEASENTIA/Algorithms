//Selection Sort.
/*
 * Here the smallest element is selected from the array
 *  once and then the element is swapped with the
 *  starting unsorted element. This way the array
 *  is sorted in the ascending order.
 * Actual selection sort is like this: Look at the ActualSelectionSort Program.
 *  the smallest element is removed and the elements
 *  to the right of the empty space are shifted
 *  to the leftand the whole array is shifted to the right
 *  in order to place the minimum element at the starting
 *  position.
*/
#include<stdio.h>
#define n 10
int main() {
  int a[n]={12, 5, 9, 1, 20, 7, 3, 15, 8, 10};
  int amin;
  int temp;
  //Printing the input.
  for(int i=0; i<n; i++)
  {
    printf("%d ",a[i]);
  }
  printf("\n");
  for(int j=0;j<n;j++)
  {
    amin=j;
    for(int i=j; i<n; i++)//Actual checking if current element is less than min element.
    {
      if(a[i]<a[amin])
      {
        amin=i;//We have to swap after the loop inorder to not break the checking. if we swap righ tnowe, then the rest of the elemnts are not checked.
      }
    }
    temp=a[j];//Actual swapping of the elements.
    a[j]=a[amin];
    a[amin]=temp;
    //Print the progresss after each swap.
    for(int i=0; i<n; i++)
    {
      printf("%d ",a[i]);
    }
    printf("\n");
  }
  //printing the output
  for(int i=0; i<n; i++)
  {
    printf("%d ",a[i]);
  }
  return 0;
}
