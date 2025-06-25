In C++, a **lambda function** (also called a **lambda expression**) is a way to define an anonymous function (a function without a name) inline.

### 🔹 Basic Syntax

```cpp
[ capture_list ] ( parameter_list ) -> return_type {
    function_body
};
```

### 🔹 Example

```cpp
#include <iostream>

int main() {
    auto add = [](int a, int b) -> int {
        return a + b;
    };

    std::cout << add(2, 3) << std::endl; // Output: 5
    return 0;
}
```

### 🔹 Components Breakdown

* `[ ]` – **Capture list**: captures variables from the surrounding scope.
* `(int a, int b)` – **Parameter list**: like a regular function.
* `-> int` – **Return type** (optional; often deduced).
* `{ return a + b; }` – Function body.

### 🔹 Capture List Examples

```cpp
int x = 5;
int y = 10;

// Capture by value
auto f1 = [x]() { return x + 1; };

// Capture by reference
auto f2 = [&y]() { y += 1; };

// Capture all by value
auto f3 = [=]() { return x + y; };

// Capture all by reference
auto f4 = [&]() { x += 1; y += 1; };
```

### 🔹 Lambda in STL Algorithms

```cpp
#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};

    std::for_each(nums.begin(), nums.end(), [](int n) {
        std::cout << n << " ";
    });

    return 0;
}
```


