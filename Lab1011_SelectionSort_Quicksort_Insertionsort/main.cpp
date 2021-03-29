//Jameson Hoang, 991548515

#include <iostream>

#define MaxNum 100 // max size of the array to be sorted

using namespace std;

// returns the index of the smallest number in array
int getSmallest(int A[], int low, int high) {
    int small = low; // assume the number at the first location is smallest

    for (int i = low + 1; i <= high; i++) {
        if (A[i] < A[small]) {
            small = i;
        }
    }

    // at this point the small local variable should keep the index
    return small;
}

// interchange two numbers of an array (this is the swap function)
void swap(int A[], int i, int j) {
    int hold = A[i];
    A[i] = A[j];
    A[j] = hold;
}

// SELECTION SORT

// order of O(n^2)
void selectionSort(int A[], int n) {
    for (int i = 1; i <= n; i++) {
        int small = getSmallest(A, i, n);
        swap(A, i, small);
    }
}

void printList(int A[], int start, int end) {
    for (int i = start; i <= end; i++) {
        cout << A[i] << " - ";
    }
    cout << "\n";
}

// QUICKSORT

// partition an array with respect to a pivot (for a quicksort)
int partition(int A[], int lo, int hi) {

    // select the pivot
    int pivot = A[lo];
    int lastsmall = lo;
    int j;
    for (j = lo + 1; j <= hi; j++) {
        if (A[j] < pivot) {
            ++lastsmall;
            swap(A, lastsmall, j);
        }
    }
    swap(A, lo, lastsmall); // insert the pivot in the middle
    return lastsmall;
}

// the actual quicksort
void quicksort(int A[], int lo, int hi) {
    if (lo < hi) {
        int p = partition(A, lo, hi);

        // apply the quicksort to the first list
        quicksort(A, lo, p - 1);

        // apply the quicksort to the second list
        quicksort(A, p + 1, hi);
    }
}

// merge two sorted lists
void merge(int A[], int lo, int mid, int hi) {
    static int T[MaxNum];
    int i = lo; // a counter for the first half of the array
    int j = mid + 1; // a counter for the second half of the array
    int k = lo;

    while (i <= mid || j <= hi) {

        // if this is the end of the first half, copy the values from the second half
        if (i > mid) {
            T[k++] = A[j++];
        }

        // if this is the end of the second half, copy the values from the first half
        else if (j > hi) {
            T[k++] = A[i++];
        }

        // if the current element in the first half < the current element in the second one, copy it to the current position of T
        else if (A[i] < A[j]) {
            T[k++] = A[i++];
        } else {
            T[k++] = A[j++];
        }
    }

    // copy all values from T to A
    for (j = lo; j <= hi; j++) {
        A[j] = T[j];
    }
}

// merge sort
void mergesort(int a[], int lo, int hi) {
    int i;
    if (lo < hi) {
        int mid = (int) (lo + hi) / 2;
        mergesort(a, lo, mid);
        mergesort(a, mid + 1, hi);
        merge(a, lo, mid, hi);
    }
}


int main() {

    // define array a
    int a[MaxNum];

    // fill array (unsorted list)
    a[1] = 1;
    a[2] = 50;
    a[3] = 3;
    a[4] = 10;
    a[5] = 4;
    a[6] = 32;
    a[7] = 21;
    a[8] = 53;
    a[9] = 72;
    a[10] = 20;

    // print the unsorted list
    cout << " The unsorted list is: ";
    printList(a, 1, 10);
    cout << "\n";

    // call selection sort
    selectionSort(a, 10);
    cout << " The sorted list using selection sort algorithm is: ";
    printList(a, 1, 10);
    cout << "\n";


    // demonstrate the quicksort
    // unsort the array
    swap(a, 2, 8);
    swap(a, 3, 9);
    swap(a, 1, 4);
    swap(a, 3, 6);

    // print the unsorted list
    cout << " the unsorted list is: ";
    printList(a, 1, 10);
    cout << "\n";

    // sort the array using quicksort
    quicksort(a, 1, 10);

    // print the sorted list
    cout << " the sorted list using quicksort algorithm is : ";
    printList(a, 1, 10);
    cout << "\n";

    // --- using mergesort
    swap(a, 2, 8);
    swap(a, 3, 9);
    swap(a, 1, 4);
    swap(a, 3, 6);

    // print the unsorted list
    cout << " the unsorted list is: ";
    printList(a, 1, 10);
    cout << "\n";

    // sort the array using mergesort
    mergesort(a, 1, 10);

    // print the sorted list
    cout << " the sorted list using mergesort is: ";
    printList(a, 1, 10);

    return 0;
}
