

### ✅ `nullptr` in C++

`nullptr` is a special keyword in C++ that represents a **null pointer** — that is, a pointer that **doesn’t point to any object or memory**.

#### 🔍 Example:

```cpp
ListNode* node = nullptr;
```

This declares a pointer to a `ListNode` and sets it to `nullptr`, meaning it doesn't point to any valid node.

#### 📜 Why use `nullptr` instead of `NULL` or `0`?

In older C++ code (pre-C++11), people used `NULL` or even `0` to represent a null pointer:

```cpp
ListNode* node = NULL;  // legacy style
```

But `NULL` is just a macro for `0`, and using `0` can lead to ambiguous code. For example:

```cpp
void func(int);
void func(ListNode*);

func(0);  // Which one gets called?
```

Using `nullptr` solves this ambiguity, because it's **a proper type** — `std::nullptr_t`.

#### 🧠 Summary

* `nullptr` is used to initialize or check if a pointer is null.
* It's safer and preferred over `NULL` or `0` in modern C++ (C++11 and later).
* Use it like this:

```cpp
if (node == nullptr) {
    // the pointer is not pointing to anything
}
```





### 🔥 What **is** a dangling pointer?

A **dangling pointer** is a pointer that **used to point to a valid object**, but that object has since been **deleted or gone out of scope** — so the pointer is now pointing to **invalid memory**.

#### ❌ It's not the same as a null pointer.

* `nullptr` = safe, intentionally points to nothing.
* **Dangling pointer** = dangerous, points to memory that may now be used for something else or is inaccessible.

---

#### 🧠 Examples

##### ✅ Null pointer (safe)

```cpp
int* p = nullptr;  // clearly points to nothing
```

##### ❌ Dangling pointer (unsafe)

```cpp
int* p;
{
    int x = 42;
    p = &x;  // p points to a valid variable
} // x goes out of scope here — p is now dangling

*p = 10; // undefined behavior! memory no longer valid
```

Or:

```cpp
int* p = new int(5);
delete p;
*p = 10; // dangling pointer after delete — undefined behavior
```

---

#### 💥 Why it's bad:

Using a dangling pointer causes **undefined behavior**, which means:

* It might crash your program.
* It might silently corrupt data.
* It might seem to work — until it doesn't.

---

#### 🔒 Pro tip:

After `delete` or after a variable goes out of scope, set the pointer to `nullptr` to avoid accidental use:

```cpp
delete p;
p = nullptr;  // safer
```

