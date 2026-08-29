#include <iostream>
#include <memory> // needed for smart pointers
using namespace std;

// Function that takes a pointer and modifies the original value
void updateValue(int *p)
{
  *p = 100; // dereference and change the value at that address
}

int main()
{

  // 1. BASIC POINTER
  int x = 10;
  int *ptr = &x; // ptr stores the address of x

  cout << "1. Basic Pointer\n";
  cout << "Value of x: " << x << endl;
  cout << "Address of x: " << &x << endl;
  cout << "Value stored in ptr (address): " << ptr << endl;
  cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;
  cout << "-----------------------------\n";

  // 2. POINTER + ARRAY
  int arr[3] = {1, 2, 3};
  int *arrPtr = arr; // array name decays into pointer to first element

  cout << "2. Pointer with Array\n";
  for (int i = 0; i < 3; i++)
  {
    // *(arrPtr + i) is the same as arr[i]
    cout << "arr[" << i << "] = " << *(arrPtr + i) << endl;
  }
  cout << "-----------------------------\n";

  // 3. POINTER + FUNCTION
  cout << "3. Pointer with Function\n";
  cout << "Before update, x = " << x << endl;
  updateValue(&x); // pass address of x, function edits original value
  cout << "After update, x = " << x << endl;
  cout << "-----------------------------\n";

  // 4. DYNAMIC MEMORY (new / delete)
  cout << "4. Dynamic Memory Allocation\n";
  int *dynamicInt = new int(5); // allocate single int on heap
  cout << "Dynamic int value: " << *dynamicInt << endl;
  delete dynamicInt; // free memory, avoid memory leak

  int *dynamicArr = new int[5]; // allocate array on heap
  for (int i = 0; i < 5; i++)
  {
    dynamicArr[i] = i * 10; // fill array
  }
  cout << "Dynamic array values: ";
  for (int i = 0; i < 5; i++)
  {
    cout << dynamicArr[i] << " ";
  }
  cout << endl;
  delete[] dynamicArr; // free array memory (note the [])
  cout << "-----------------------------\n";

  // 5. REFERENCES vs POINTERS
  cout << "5. Reference vs Pointer\n";
  int y = 50;
  int &ref = y; // reference: another name for y, no & needed to use it
  ref = 75;     // this changes y directly
  cout << "y after changing ref: " << y << endl;
  cout << "-----------------------------\n";

  // 6. SMART POINTER (modern C++, auto-manages memory)
  cout << "6. Smart Pointer (unique_ptr)\n";
  unique_ptr<int> smartPtr = make_unique<int>(42);
  cout << "Smart pointer value: " << *smartPtr << endl;
  // no need to call delete — memory is freed automatically
  cout << "-----------------------------\n";

  return 0;
}