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

### Internal

- Added singly linked list node management using `head_` and `tail_`.
- Added automatic node cleanup through the destructor.
- Added separate `.tpp` file for template implementations.

### Notes

- `iterate()` is currently available as a temporary debugging helper.