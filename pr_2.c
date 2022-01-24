int insertSorted(int arr[], int n,int key,int capacity)
{
    // Cannot insert more elements if n is
    // already more than or equal to capacity
    if (n >= capacity)
       return n;
       arr[n] = key;
       return (n + 1);
}
 int main(){
    int arr[20] = {13, 19, 40, 50, 60, 80};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n =6;
    int i, key =26;
    printf(" Before Insertion:\n ");
    for (i = 0; i < n; i++)
     printf("%d  ", arr[i]);
      // Inserting key
      n = insertSorted(arr, n, key, capacity);
      printf("After Insertion:\n ");
      for (i = 0; i < n; i++)
      printf("%d  ",arr[i]);
      return 0;
}