#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Global array and its size
int array[MAX_SIZE];
int size = 0;

void insert(int element, int index) {
  // Check if the array is full
  if (size == MAX_SIZE) {
    printf("Error: array is full!\n");
    return;
  }

  // Check if the index is valid
  if (index < 0 || index > size) {
    printf("Error: invalid index!\n");
    return;
  }

  // Shift elements to the right to make room for the new element
  for (int i = size; i > index; i--) {
    array[i] = array[i - 1];
  }

  // Insert the new element at the specified index
  array[index] = element;
  size++;
}

void delete(int index) {
  // Check if the index is valid
  if (index < 0 || index >= size) {
    printf("Error: invalid index!\n");
    return;
  }

  // Shift elements to the left to fill the gap
  for (int i = index; i < size - 1; i++) {
    array[i] = array[i + 1];
  }
  size--;
}

int search(int element) {
  // Search for the element in the array
  for (int i = 0; i < size; i++) {
    if (array[i] == element) {
      return i;
    }
  }
  // Return -1 if the element was not found
  return -1;
}

int main(int argc, char* argv[]) {
  insert(10, 0); // Insert 10 at index 0
  insert(20, 1); // Insert 20 at index 1
  insert(30, 2); // Insert 30 at index 2
  insert(40, 3); // Insert 40 at index 3
  insert(50, 4); // Insert 50 at index 4

  // Traverse the array and print its elements
  printf("Array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  delete(2); // Delete the element at index 2

  // Traverse the array and print its elements
  printf("Array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  int index = search(30); // Search for the element 30
  if (index == -1) {
    printf("Element not found!\n");
  } else {
    printf("Element found at index %d\n", index);
  }
  return 0;
}
