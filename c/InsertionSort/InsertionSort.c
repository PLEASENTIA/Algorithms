/*InsertionSort!
 * Here, all elements are selected one by one starting from the left,
 *  then compared with all the elements to the left,
 *  move the element to left until it is no longer smaller than previous element.
 * This way, the elements are arranged in ascending order.
*/
#include <stdio.h>
#define n 10
int main()
{
  int a[n]={2,1,3,4,6,100,20,35,47,26};
  printf("The input array is: ");
  //Printing current status
  for(int i=0; i<n;i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n\n");
  //Iterator
  for(int i=1;i<n;i++)
  {
    int t=i;//We will use another variable to not break the i value when decrementing in while loop.
    //If current element is smaller than previous, enter loop.
    while(a[t]<a[t-1])//Here we use another variable temporarily for comparisions to reach the beginning of the array.
    {
      //Swapping
      int temp;
      temp=a[t];
      a[t]=a[t-1];
      a[t-1]=temp;
      t--;
      //If the index is 1, then exit loop.(to not assign assign garbage value to index 0 and skip 1 since all possible comparisions done i.e. 1)
      if(t==1 || t==0)
      {
        break;
      }
    }
    printf("Step %d: ", i);
    //Printing current status
    for(int d=0; d<n;d++)
    {
      printf("%d ", a[d]);
    }
    printf("\n");

  }
}
