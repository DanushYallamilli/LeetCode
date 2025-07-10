
# Two Sum in C – Q&A Summary

## Q1. Why did we use `int* returnSize` and not `int returnSize`?
**Answer:**  
We use `int* returnSize` so that the function can **return an extra value** (the size of the result array) by modifying the variable in the caller function via a pointer. C does not support returning multiple values directly.

---

## Q2. Why did we write `*returnSize = 2;` instead of using `malloc` for it?
**Answer:**  
`*returnSize = 2;` sets the value at the address passed by the caller. We don't need to allocate memory (`malloc`) because we are only returning a single integer value, not an array.

---

## Q3. If `int* returnSize` is used to return a value, why not use `int* numsSize` too?
**Answer:**  
We only read `numsSize` inside the function, so passing it as a simple `int` is enough. We use a pointer (`int*`) only when we need to modify or return a value.

---

## Q4. Does `*returnSize = 2;` increase memory or just change value?
**Answer:**  
It just **changes the value** at the memory location. It doesn't allocate memory or increase storage; it stores the integer `2` in the variable passed by the caller.

---

## Q5. Why do we write `*returnSize = 0; free(out); return NULL;`?
**Answer:**  
This is the **fallback case**: if no valid pair is found, we indicate the result is empty by setting `*returnSize = 0`, freeing the memory, and returning `NULL`.

---

## Q6. Isn’t `*returnSize = 0;` overwriting `*returnSize = 2;`?
**Answer:**  
No. The function exits early using `return` after setting `*returnSize = 2` if a pair is found. So `*returnSize = 0` only runs if no result is found.

---

## Q7. Should we use `if...else` instead of two separate `*returnSize` lines?
**Answer:**  
Not necessary. Since the `return` exits the function early, the `else` is optional. It's cleaner to avoid nested `else` when early return is used.

---

## Q8. Can we write `if (*returnSize = 2)`?
**Answer:**  
No. That’s an **assignment**, not a comparison. It always evaluates to true. Use `*returnSize == 2` for comparison. Use `*returnSize = 2` only when assigning.

---

## Q9. Can we execute the function without `if (!out) return NULL;`?
**Answer:**  
Yes, but it’s unsafe. If `malloc` fails and returns `NULL`, using `out[0]` would crash the program. The check is **defensive programming** to prevent that.

---

## Q10. Why check `if (!out)` before knowing if we found a pair?
**Answer:**  
Because we need memory **ready** to store the result if we find it. We check `malloc` right after allocating to avoid writing to `NULL` later.

