//BubbleSort in JAVA
/*
 * Refer to the program written in C for detailed ecplanation.
*/
class BubbleSort{
  public static void main(String []args) {
    int[] a = {12, 5, 9, 1, 20, 7, 3, 15, 8, 10};
    int n=a.length;//Because int[10] does not work.
    int temp=0;
    ActualBubbleSort obj = new ActualBubbleSort();
    obj.Stuff(a, n, temp);
  }
}
//Cause otherwise it is just written in C. Classes have to be made in java for formality atleast!
class ActualBubbleSort{
  void Stuff(int[] a, int n, int temp) {
    //Print the input numbers.
    for(int i=0; i<n; i++){
      System.out.print(a[i]+" ");
    }
    System.out.println();
    //Passing/Iteration since the whole array has to be sorted not just a singlew Iteration.
    for(int pass=0; pass<n-1; pass++)
    {//The actual swapping after checking the conditions.
      for(int i=0; i<n-1-pass; i++){
        if(a[i]>a[i+1]){
          temp=a[i];
          a[i]=a[i+1];
          a[i+1]=temp;
          for(int j=0; j<n; j++){
            System.out.print(a[j]+" ");
          }
          System.out.println();
        }
      }
    }
    //Printing the output once.
    for(int i=0; i<n; i++){
      System.out.print(a[i]+" ");
    }
  }
}
