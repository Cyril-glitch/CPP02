*This project has been created as part of the 42 curriculum by cycolonn.*

# 🔢 C++ Module 02 - Ad-hoc Polymorphism & Orthodox Canonical Form

## 📖 1. Description
**CPP02** introduces the Orthodox Canonical Form (Coplien's Form), operator overloading, fixed-point numeric representations, and ad-hoc polymorphism.

This project is divided into two exercises:

- `ex00` (`My First Class in Orthodox Canonical Form`) establishes the four mandatory elements of Coplien's Form (default constructor, copy constructor, assignment operator, and destructor) inside a fixed-point class.
- `ex01` (`Towards a more useful fixed-point number class`) enhances the fixed-point class with fractional conversion methods (raw bits, float, and int conversions) and overload of the insertion stream operator (`<<`).

---

<br />

## 🚀 2. Instructions

Navigate to any exercise directory (`ex00` or `ex01`) and use the standard Makefile targets:

| Target | Description |
| :--- | :--- |
| `make` | Compiles the project using `c++` with `-Wall -Wextra -Werror -std=c++98`. |
| `make it` | Compiles and executes the binary immediately. |
| `make val` | Runs the binary under `valgrind` to verify memory integrity. |
| `make clean` / `fclean` / `re` | Standard 42 cleaning and recompilation rules. |

### Executables

Each exercise produces its own binary under the `bin/` directory:

```bash
cd ex00 && ./bin/fixed
cd ex01 && ./bin/moreuseful
```

### Useful commands

```bash
make
make re
make clean
make fclean
```

---

<br />

## 🛠️ 3. Technical Choices & Learning Objectives
This module transitions into strict object lifecycle management and arithmetic class customization.

---

<br />

* 🏛️ **Orthodox Canonical Form**: Guaranteed that classes always declare a default constructor, copy constructor, copy assignment operator, and destructor.
* 🛡️ **Self-Assignment Guard**: Implemented `if (this != &rhs)` systematically within the assignment operator.
* 🧮 **Fixed-Point Arithmetic**: Stored floating-point values using 8 fractional bits via bit-shift operations (`value << 8`) and rounding functions (`roundf`).
* 📤 **Stream Operator Overloading**: Overloaded `operator<<` as a non-member function to allow seamless fixed-point printing.
* ⚙️ **42 Compliance**: Clean compilation under `-Wall -Wextra -Werror -std=c++98`.

---

<br />

## 📚 4. Resources

* 📄 **Official Documentation**:
    * [C++ Reference - Operator Overloading](https://en.cppreference.com/w/cpp/language/operators) - Standard operator overload rules.
    * [42 C++ Modules Documentation](https://harm-smits.github.io/42docs/) - Module design guides.
* 🔗 **Concepts & Tutorials**:
    * [Orthodox Canonical Class Form](https://en.wikipedia.org/wiki/Coplien_form) - Historical and practical overview of Coplien's Form.
    * [Fixed Point Arithmetic](https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/) - Converting floats and integers to fixed-point representations.
