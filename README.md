# OOP Person, Inheritance & Polymorphism (C++)

This project demonstrates the fundamental concepts of Object-Oriented Programming (OOP) in C++. It implements a base class (`Personne`) and two derived classes (`Etudiant` and `Professeur`) to illustrate inheritance, polymorphism, constructors, destructors, and virtual methods.

---

##  Project Overview

The application creates different types of people and stores them in a collection of base-class pointers. Using polymorphism, each object executes its own implementation of the `sePresenter()` method.

This project demonstrates:

- Classes and Objects
- Constructors and Destructors
- Inheritance
- Virtual Functions
- Runtime Polymorphism
- Dynamic Memory Allocation
- STL Vector

---

##  Features

- Create a `Personne`
- Create an `Etudiant`
- Create a `Professeur`
- Store objects in a `vector<Personne*>`
- Demonstrate runtime polymorphism
- Proper memory management using virtual destructors

---

##  Technologies

- C++
- Object-Oriented Programming (OOP)
- Standard Template Library (STL)

---

##  Project Structure

```
OOP-Person-Inheritance-Polymorphism/
│
├── main.cpp
└── README.md
```

---

##  How to Compile

Compile the program using:

```bash
g++ main.cpp -o oop_demo
```

Run the program:

```bash
./oop_demo
```

---

##  Concepts Demonstrated

### Base Class

- Personne

### Derived Classes

- Etudiant
- Professeur

### OOP Concepts

- Encapsulation
- Inheritance
- Polymorphism
- Virtual Functions
- Constructors
- Destructors

---

##  Program Flow

1. Create different objects.
2. Store them in a vector of `Personne*`.
3. Call `sePresenter()` for each object.
4. Observe runtime polymorphism.
5. Delete all dynamically allocated objects.

---

##  Future Improvements

- Add more derived classes.
- Read data from a file.
- Save objects to a database.
- Use smart pointers instead of raw pointers.
- Implement exception handling.

---
