MultithreadedContentModerator

# Content Moderator

A multithreaded C++ content moderation system that scans documents and emails for offensive or sensitive words using a custom thread pool and rule-based classification engine.

## Features
- Parallel file processing
- Keyword categorization
- Severity scoring and flagging of high-risk content
- Uses a custom `Tokenizer` class for word extraction

## Installation

Make sure you have **CMake** and a **C++20 compiler** installed.

```bash
# Clone the repository
git clone https://github.com/username/content_moderator.git
cd content_moderator

# Create a build directory
mkdir build && cd build

# Generate build files using CMake
cmake ..

# Build the project
cmake --build .