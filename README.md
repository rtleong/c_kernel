# LSH (Linux Shell)

LSH is a simple Unix shell implemented in C. This project demonstrates the basics of a command-line interpreter, including reading input, parsing commands, and executing them, both built-in and external.

## Features

- Read and parse input from the user.
- Execute built-in commands like `cd`, `help`, and `exit`.
- Launch external programs.
- Handle simple error conditions.

## Built-in Commands

1. **cd**: Change directory.
2. **help**: Display information about built-in commands.
3. **exit**: Exit the shell.

## Getting Started

### Prerequisites

To compile and run LSH, you'll need a Unix-like environment with a C compiler installed.

### Installation

1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/lsh.git
    cd lsh
    ```

2. Compile the program:
    ```sh
    gcc -o lsh shell.c
    ```
