MultithreadedContentModerator

# Content Moderator

A modular C++ content moderation system that scans documents and emails for harmful or offensive content using a **pluggable rule engine** and a multithreaded processing pipeline.

This project is designed to simulate how real-world moderation systems separate **text processing** from **detection logic**, allowing new moderation rules to be added without modifying the core scanning code.

---

## Features

- Modular rule-engine architecture
- Pluggable moderation rules
- Offensive word detection rule
- Custom Tokenizer for fast word extraction
- Designed for future multithreaded file scanning
- Built with modern **C++20** and **CMake**

---

## Architecture Overview

The system follows a pipeline-based design that separates responsibilities into independent components:


### Components

**Scanner**
- Entry point for file scanning
- Orchestrates the moderation pipeline

**Tokenizer**
- Extracts unique tokens from files
- Responsible only for text processing (no moderation logic)

**RuleEngine**
- Executes a collection of moderation rules
- Aggregates findings from all rules
- Allows new rules to be added without changing existing code

**Rules**
- Self-contained detection modules
- Current implementation:
    - `OffensiveWordRule` — detects offensive language

This design follows the **Open/Closed Principle**:
> The system is open for extension but closed for modification.

---

## Rule Engine Example Flow

1. A file is scanned by the **Scanner**
2. The **Tokenizer** extracts words from the file
3. Tokens are passed to the **RuleEngine**
4. Each registered rule evaluates the tokens
5. Findings are returned and reported

Adding a new rule requires only one line:

engine.addRule(std::make_unique<OffensiveWordRule>());

## Installation

Make sure you have **CMake** and a **C++20 compiler** installed.

Clone the repository
- git clone https://github.com/username/content_moderator.git
- cd content_moderator

Create a build directory
- mkdir build && cd build

Generate build files
- cmake ..

## Build the project
cmake --build .

## Project Goals

This project is a learning exercise focused on:
- Modern C++ architecture and project structure
- Rule-based system design
- Separation of concerns
- Preparing for multithreaded processing

## Future Improvements

- Load offensive word lists from external files
- Add regex-based detection (PII, URLs, credit cards)
- Integrate machine learning classification
- Full multithreaded scanning pipeline
- Severity scoring and structured result reporting

## Author

Created by Matthew Damgen as a portfolio project
while returning to modern C++ and software architecture.