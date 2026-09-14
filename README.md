# DSAkit

A modern C++ library for data structures and algorithms.

> 🚧 DSAkit is currently under active development.

## About

DSAkit is a C++ library designed to provide reusable implementations of common data structures and algorithms through a clean and simple API.

The goal is to make data structures easy to use without requiring users to manually manage their internal implementation details.

## Current Features

### Linked List

DSAkit currently includes a singly linked list with support for:

* Adding elements to the front
* Adding elements to the back
* Accessing the first element
* Checking the size
* Checking whether the list is empty
* Clearing the list
* Pop front and back of the list

More operations and data structures will be added as development continues.

## Design Goals

* Clean and consistent APIs
* Reusable data structures
* Proper encapsulation
* Const-correct interfaces
* Efficient implementations
* Modern C++ practices
* Clear documentation
* Automated testing

## Requirements

* C++17 or later
* GCC, Clang, or MSVC

## Project Structure

The project separates public interfaces, template implementations, examples, and tests to keep the library organized and maintainable.

* `include/` — Public library headers and template implementations
* `examples/` — Usage examples
* `tests/` — Automated tests
* `CMakeLists.txt` — Build configuration
* `CHANGELOG.md` — Project change history
* `LICENSE` — License information

## Development Status

DSAkit is actively being developed.

The library will gradually expand to include additional data structures and algorithms while maintaining a consistent API and implementation quality.

## License

See the LICENSE file for details.
