# Pointers
## 3/5/18

### Review

Pointers are:
- Declared;
- Associated with a data type;
- Increment/decrement are type-dependent;
- Pointers can also point to other data types other than primitives;

### Dynamic Memory Allocation

When we don't know the size of the data type (e.g.: an array `n` of size `t`):

```C
void *malloc(size_t size);
```

Where:
- _size_: long int to determine size to be allocated in bytes

**OBS**: When working with dynamic memory allocation, a pointer to void means it's a **general pointer**, without a type associated. To turn it into a type-dependent pointer, one should _type cast_:

```C
int *x;
x = (int*)malloc(16);   // the typecast will occurr whether the (int*) is there or not

free(x);                // free the memory allocated before
```

- _malloc_ allocates memoty at **runtime**. A variable declaration such as int[40] allocates memory at compile time.
- For each malloc call, there should be a free call to avoid memory leak.
- _malloc_ allocates memory in the heap, not stack.

### Copying memory content

To copy memory content from one allocation block to another, one should use `memcpy`:

```C
void *memcpy(void *dest, const void *src, size_t n);
```

Where:
- `dest` is the pointer to destination memory block
- `src` is the pointer to source memory block
- `n` is the amount of bytes to copy