# 42 CPP Piscine: From Procedural to Object-Oriented Programming

## Module-by-Module Breakdown

### Module 00: Encapsulation and Basics
* **Key Learnings:** Namespaces, Classes, Member functions, `iostream`, and the `const` keyword.
* **The Shift:** Encapsulating data and logic into objects. Moving from `printf/scanf` to typesafe streams.

### Module 01: Memory Management & Pointers
* **Key Learnings:** `new` vs `delete`, References vs Pointers, and Stack vs Heap allocation.
* **The Shift:** Understanding the lifecycle of objects. References provide a safer, cleaner alternative to pointer arithmetic for passing data.

### Module 02: Ad-hoc Polymorphism & Canonical Form
* **Key Learnings:** Operator overloading, fixed-point arithmetic, and the **Orthodox Canonical Class Form** (Default Constructor, Copy Constructor, Copy Assignment Operator, Destructor).
* **The Shift:** Learning how to make user-defined classes behave with the same fluidity as built-in types.

### Module 03: Inheritance
* **Key Learnings:** Base vs. Derived classes, constructor/destructor chaining, and the `protected` access specifier.
* **The Shift:** Implementing "Is-A" relationships and code reuse through class hierarchies.

### Module 04: Subtype Polymorphism
* **Key Learnings:** `virtual` functions, Abstract classes, and Interfaces (Pure Virtual Functions).
* **The Shift:** Mastering the **vtable**. Learning to write code that interacts with a base class while executing the specific logic of a derived class at runtime.

### Module 05: Exceptions
* **Key Learnings:** `try-catch` blocks, standard exceptions, and defining custom Exception classes.
* **The Shift:** Replacing error codes (like `NULL` or `-1`) with a robust, hierarchical error-handling system that cannot be ignored by the caller.

### Module 06: Type Casting
* **Key Learnings:** `static_cast`, `dynamic_cast`, `reinterpret_cast`, and `const_cast`.
* **The Shift:** Moving away from dangerous C-style casts to explicit, intent-based casting that the compiler can verify.

### Module 07: Templates
* **Key Learnings:** Function templates and Class templates.
* **The Shift:** Generic Programming—writing logic that is independent of specific data types, enabling maximum code reusability.

### Module 08: STL Containers & Algorithms
* **Key Learnings:** Standard Template Library (STL), Iterators, and Containers (`std::vector`, `std::list`, `std::map`).
* **The Shift:** Leveraging powerful, optimized data structures and algorithms instead of manually implementing low-level containers.

### Module 09: Advanced STL (The Final Boss)
* **Key Learnings:** Choosing the right container for time complexity, Reverse Polish Notation (RPN), and complex sorting algorithms (PmergeMe).
* **The Shift:** Applying the entirety of the C++ toolkit to solve high-level algorithmic problems while respecting the constraints of specific STL containers.

## 🛠️ The 42 C++ Ruleset

1.  **C++98 Standard:** No modern C++11/14/17 features.
2.  **Orthodox Canonical Form:** Every class is built to be "well-behaved" regarding memory and assignment.
3.  **RAII:** Resource Acquisition Is Initialization. If you allocate it, the object's lifecycle must manage its destruction.
4.  **No Forbidden Functions:** No `printf`, `malloc`, or `free`. We rely on the `std` library and `new/delete`.
