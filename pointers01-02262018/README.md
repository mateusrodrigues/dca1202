# Pointers
## 2/26/18

### Memory Allocation

- Global and static variables go into the memory **heap**
- Local variables go into the memory **stack**

### Pointer Usage

- if `x` is a regular variable, `&x` is the address of `x`
- if `x` is a pointer, `*x` returns the content of `x`

In order to declare a pointer in C, one does:

```
type *var;
```

Example:

```
int x = 4;      // Contains the number 4 (regular variable)

int *px = &x;   // Containes the memory address of x (e.g. 0x7ffd63afc0b0)
```

If a pointer is **incremented**, as in `px += 1`, the pointer is incremented by the momery size of the type it points to.