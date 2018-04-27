# Standard Template Library
## 04/27/2018

The Standard Template Library contains several data structures and algorithms that are common across programs and are also implemented in a generic way for developers to use.

### Working with `vector`

`vector` is a data structure for a randomly-accessed list and can be used as follows:

```C++
#include <vector>

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(3);

    // v = { 2, 3 }

    return 0;
}
```
#### Applying the concept of **iterators**

Iterators are objects that can be used to sweep over elements in a data structure. For `vector`, a way to print out the elements inside of the structure with iterators is:

```C++
...
vector<int>::iterator vi;
vector<int>::reverse_iterator ri;

// sweeping forwards
for (vi = v.begin(); vi != v.end(); vi++)
{
    cout << *vi << ", ";
}

// sweeping backwards
for (ri = v.rbegin(); ri != v.rend(); ri++)
{
    cout << *ri << ", ";
}
...
```

To **find** an element inside of the data structure, the `find` command can be used, such as:

```C++
#include <algorithm>
...

// find the element 37 inside data structure and return
// iterator position to it
vi = find(v.begin(), v.end(), 37);
```

There is also an **accumulator** method that can be used such as:

```C++
// it receives first element iterator, last element iterator
// and first number in the accumulator sequence.
iota(v.begin(), v.end(), 1);
```