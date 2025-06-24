In C++, an **lvalue** (short for "locator value") refers to an expression that **refers to a memory location** — something you can take the address of and assign to.

---

## 🧠 **Basic Definition:**

### ✅ **Lvalue**:

* An expression that **has a name or identifiable location in memory**.
* You **can assign to it** (on the left side of `=`)
* You **can take its address** with `&`.

### ❌ **Rvalue** (for contrast):

* A temporary value — **doesn’t have a persistent memory address**.
* You **can’t assign to it**.
* Exists **only for the duration of the expression**.

---

## 🔍 **Examples:**

### ✅ Lvalues:

```cpp
int x = 5;
x = 10;       // OK — x is an lvalue
int* p = &x;  // OK — you can take address of x
```

### ❌ Rvalues:

```cpp
5 = x;        // ❌ Error — 5 is not assignable
int* p = &5;  // ❌ Error — 5 has no address you can take
```

---

## 💡 Lvalue vs Rvalue in Functions:

```cpp
void foo(int& x);   // takes lvalue reference
void bar(int&& x);  // takes rvalue reference (C++11+)

int a = 10;
foo(a);     // OK — a is an lvalue
foo(5);     // ❌ Error — 5 is an rvalue

bar(5);     // OK — 5 is an rvalue
bar(a);     // ❌ Error — a is not an rvalue
```

---

## ✅ Lvalue Summary:

| Trait                     | Lvalue                                           |
| ------------------------- | ------------------------------------------------ |
| Has a memory address      | ✅                                                |
| Can appear on left of `=` | ✅                                                |
| Example                   | Variables, dereferenced pointers, array elements |

---
 if you want to go deeper into **glvalues, prvalues, and xvalues** — the full value category breakdown in modern C++.
