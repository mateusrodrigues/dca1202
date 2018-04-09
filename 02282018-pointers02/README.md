# Pointers
## 2/28/18

### Pointer Usage

If a pointer is **incremented**, as in `px += 1`, the pointer is incremented by the momery size of the type it points to.

```
int *px = &x;
px = px + 1;    // This gets incremented by 4 (int is 4 bytes long)

char *py = &y;
py = py + 1;    // This gets incremented by 1 (char is 1 byte long)
```

### Pointers associated with array elements

If given array is declared as:

```
int z[5] = { 1, 2, 3, 4, 5 };
```

Accessing the elements of this array with brackets is an alias to the following snippet:

```
int lastElement01 = z[4];
int lastElement02 = *(z + 4);

lastElement01 == lastElement02  // returns 1
```

### Bitwise operators

- `&`   bitwise AND operator
- `|`   bitwise OR operator