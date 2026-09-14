# Changelog

All notable changes to DSAkit will be documented in this file.

## [Unreleased]

### Added

- Added `LinkedList<T>` data structure.
- Added `push_front()` operation.
- Added `push_back()` operation.
- Added `size()` operation.
- Added `empty()` operation.
- Added `clear()` operation.
- Added `front()` operation with const-correct overloads.
- Added empty-list validation for `front()`.
- Added `back()` operation with mutable and const overloads.
- Added empty-list validation for `back()`.

### Internal

- Added singly linked list node management using `head_` and `tail_`.
- Added automatic node cleanup through the destructor.
- Added separate `.tpp` file for template implementations.

### Notes

- `iterate()` is currently available as a temporary debugging helper.