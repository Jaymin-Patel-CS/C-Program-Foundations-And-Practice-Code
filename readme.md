# C Programming: Foundations & Projects

A complete repository documenting my hands-on practice in C programming, from core syntax to memory management and modular console applications.

---

## 📚 Topics Covered

* **Fundamentals:** Variables, data types, operators, and control flow (`if-else`, loops).
* **Functions & Memory:** Modular functions, recursion, and pointer arithmetic.
* **Data Structures:** 1D/2D arrays, string algorithms, and `struct` implementations.
* **Advanced Systems:** Dynamic memory allocation (`malloc`, `free`) and file I/O operations (`fopen`, `fscanf`, `fprintf`).

---

## 🛠️ Projects Included

All projects are located in the `PROJECTS/` directory:

* **Shop Management System:** Inventory tracking, item lookup, and automated billing with file-based persistence.
* **ATM Service System:** Interactive banking console supporting withdrawals, deposits, balance verification, and input validation.
* **Rock, Paper, Scissors:** Terminal-based game using pseudo-random logic (`rand()`).
* **Number Guessing Game:** Turn-based CLI game with dynamic higher/lower feedback loops.

---

## ⚡ How to Run

Compile any source file using `gcc`:

```bash
# Example: Running the ATM System
cd PROJECTS
gcc atm_system.c -o atm_system
./atm_system
