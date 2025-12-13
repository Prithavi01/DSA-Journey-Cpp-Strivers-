#include<bits/stdc++.h>
using namespace std;
void sets(){
  set<int> s;
  for (int i = 1; i <= 10; i++) {  //Iterate through 10 and insert the value of i in the set
    s.insert(i);
  }

  cout << "Elements present in the set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";  //If element is found print it
  }
  cout << endl;

  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in set" << endl;  //Print the element

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the set is: " << s.size() << endl;  ///Return the size of the set

  if (s.empty() == false)
    cout << "The set is not empty " << endl;  //If set is not empty and elements are still present in it
  else
    cout << "The set is empty" << endl;  //If set is empty
  s.clear();
  cout << "Size of the set after clearing all the elements: " << s.size();
}

void multisets(){
     // Declare a multiset of integers
    multiset<int> s;

    // Insert elements 1 to 10
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    // Insert a duplicate element
    s.insert(5);

    // Display elements in the multiset (ordered automatically)
    cout << "Elements present in the multiset: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Search for a specific element (2 in this case)
    int n = 2;
    if (s.find(2) != s.end())
        cout << n << " is present in multiset" << endl;

    // Erase the first element
    s.erase(s.begin());

    // Display elements after deletion
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Display the size of the multiset
    cout << "The size of the multiset is: " << s.size() << endl;

    // Check if the multiset is empty
    if (!s.empty())
        cout << "The multiset is not empty" << endl;
    else
        cout << "The multiset is empty" << endl;

    // Clear all elements
    s.clear();

    // Display size after clearing
    cout << "Size of the multiset after clearing: " << s.size();
}

void unordered_sets(){
    // Declare an unordered_set of integers
    unordered_set<int> us;

    // Insert elements from 1 to 10 into the unordered_set
    for (int i = 1; i <= 10; i++) {
        us.insert(i); // insert() adds a new element to the set
    }

    // Display all elements present in the unordered_set
    cout << "Elements present in the unordered set: ";
    for (auto it = us.begin(); it != us.end(); it++) {
        cout << *it << " "; // Dereference iterator to access the element
    }
    cout << endl;

    int n = 2;
    // Check if element 2 exists in the set using find()
    if (us.find(2) != us.end()) // find() returns an iterator to element if found, else s.end()
        cout << n << " is present in unordered set" << endl;

    // Erase the first element from the set using iterator
    us.erase(us.begin()); // erase() removes element at given iterator position

    // Display elements after deletion
    cout << "Elements after deleting the first element: ";
    for (auto it = us.begin(); it != us.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Display size of the unordered set
    cout << "The size of the unordered set is: " << us.size() << endl;

    // Check if the unordered set is empty
    if (us.empty() == false) // empty() returns true if set has no elements
        cout << "The unordered set is not empty " << endl;
    else
        cout << "The unordered set is empty" << endl;

    // Clear all elements from the unordered set
    us.clear(); // clear() removes all elements

    // Display size after clearing
    cout << "Size of the unordered set after clearing all the elements: " << us.size();
}

int main() {
    sets();
    multisets();
    unordered_sets();
}
