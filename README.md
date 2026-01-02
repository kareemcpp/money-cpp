# Money (C++)

> Project #1 – Foundations: correctness, testing, and design

## Why this project?

This is my first foundational C++ project.
The goal was not complexity, but correctness:
- Define behavior before implementation
- Enforce invariants
- Test edge cases explicitly

A small, type-safe monetary value primitive implemented in modern C++.

## Motivation
Represent money as a strong domain type instead of primitive integers.

## Features
- Explicit domain type (`Money`)
- Clear invariants
- Unit-tested behavior
- Simple Makefile-based build

## Build & Run
```bash
make
./bin/money_test