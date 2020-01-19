#include<stdio.h>
#include<stdlib.h>
 
int i,temp;  
// To heapify a subtree rooted with node i which is 
// an index in arr[]. n is size of heap 
void heapify(int a[], int n, int i) 
{ 
    int smallest = i; // Initialize smalles as root 
    int l = 2 * i + 1; // left = 2*i + 1 
    int r = 2 * i + 2; // right = 2*i + 2 
  
    // If left child is smaller than root 
    if (l < n && a[l] < a[smallest]) 
        smallest = l; 
  
    // If right child is smaller than smallest so far 
    if (r < n && a[r] < a[smallest]) 
        smallest = r; 
  
    // If smallest is not root 
    if (smallest != i) { 
        //swap(a[i], a[smallest]); 
  temp=a[i];
  a[i]=a[smallest];
  a[smallest]=temp;
        // Recursively heapify the affected sub-tree 
        heapify(a, n, smallest); 
    } 
} 
  
// main function to do heap sort 
void heapSort(int a[], int n) 
{ 

    // Build heap (rearrange array) 
    for (i = n / 2 - 1; i >= 0; i--) 
        heapify(a, n, i); 
  
    // One by one extract an element from heap 
    for (i = n - 1; i >= 0; i--) { 
        // Move current root to end 
        //swap(a[0], a[i]); 
  temp=a[0];
  a[0]=a[i];
  a[i]=temp;
        // call max heapify on the reduced heap 
        heapify(a, i, 0); 
    } 
} 
  
/* A utility function to print array of size n */
void printArray(int a[], int n) 
{ 

    for ( i = 0; i < n; ++i) 
        printf("  %d", a[i] ); 
    printf( "\n"); 
} 
  
// Driver program 
int main() 
{ 
    int a[30],n,i;
    
    printf("\n Enter no of elements : ");
    scanf("%d", &n);
    printf("\n Enter numbers : \n");
    for (i = 0; i < n; i++){
		printf("   ");
       scanf("%d", &a[i]);
	}
    heapSort(a, n); 
  
    printf( "Sorted array is \n"); 
    printArray(a, n); 
} 
