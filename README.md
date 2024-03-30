# Minishell

Minishell is a project in the 42 school curriculum, designed to introduce students to the concepts of process creation and management, signal handling, and basic shell functionality. The goal of this project is to create a simple shell program that can execute shell commands and handle basic shell features such as input/output redirection, pipes, and environment variables.

## Introduction

In this project, you will implement a program called `minishell` that behaves similarly to the standard Unix shell (`sh`). The `minishell` program should read commands from the user, execute them, and then display the prompt again, waiting for the next command.

## Features

- Command execution using `execve`.
- Process creation and management using `fork`.
- Input/output redirection using files.
- Pipeline support using Unix pipes.
- Basic shell built-in commands (e.g., `cd`, `env`, `exit`).

## Installation

To compile the Minishell program, run the following command:

```bash
make
```
This will generate an executable file named minishell.

## Usage
To use the Minishell program, simply run it:

```bash
./minishell
```

You will then see the Minishell prompt, where you can enter shell commands and interact with the shell.

## Example
Here's an example of how to use Minishell to execute shell commands:

```bash
$ ./minishell
minishell$ ls -l
total 8
-rwxr-xr-x 1 user group 8600 Mar 22 10:00 minishell
minishell$ pwd
/home/user
minishell$ exit
$
```
## Contributing
Contributions are welcome! If you want to improve the project, please submit a pull request. Make sure to follow the contribution guidelines.

## Contact
If you have any questions or suggestions, feel free to contact me via email.

Thank you for using Minishell!
