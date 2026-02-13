# Pushswap

This project has been created as part of the 42 curriculum by yaqliu.

## Description

The Push_swap project is a simple yet highly structured algorithmic challenge: you need to sort data. In this project, you will sort data in a stack using a limited set of instructions, aiming to achieve the lowest possible number of actions.
You have at your disposal a set of integer values, 2 stacks, and a set of instructions to manipulate both stacks. Your goal is to write a C program called `push_swap` that calculates and displays the shortest sequence of Push_swap instructions needed to sort the given integers.
At the beginning:
* Stack `a` contains a random number of unique negative and/or positive integers.
* Stack `b` is empty.
* The goal is to sort the numbers in stack `a` in ascending order.

## Instructions

### Compilation
To compile the project, run `make` at the root of the repository. The Makefile will compile the source files to the required output with the flags `-Wall`, `-Wextra`, and `-Werror`, using `cc`.
```bash
make
```

### Execution
The program named `push_swap` takes as an argument the stack `a` formatted as a list of integers. The first argument should be at the top of the stack.

```bash
make
./push_swap 42 1337 24 1 5
```

The program must display the shortest sequence of instructions needed to sort stack `a` with the smallest number at the top. Instructions must be separated by a `\n` and nothing else. If no parameters are specified, the program must not display anything and should return to the prompt.

## Resources
* **AI Usage:**
* 

## Performance Analysis
![Performance Graph 1](https://github-production-user-asset-6210df.s3.amazonaws.com/183432713/549674076-32a37a2b-c0a6-4ab6-ae63-2296fb8d2600.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAVCODYLSA53PQK4ZA%2F20260213%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20260213T212349Z&X-Amz-Expires=300&X-Amz-Signature=1a32c7b3b64866ddd6b45290f7071aa688645004145bbfa84c64db4c0f92b2ad&X-Amz-SignedHeaders=host)
![Performance Graph 2](https://github-production-user-asset-6210df.s3.amazonaws.com/183432713/549674405-b199303d-a5a3-46e5-8944-cb69a2d235d7.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAVCODYLSA53PQK4ZA%2F20260213%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20260213T212408Z&X-Amz-Expires=300&X-Amz-Signature=30fdee756fd0bdb3e404a5bd8c0ead0aebb7d0820c8927bc1dbe9c8e6db09db5&X-Amz-SignedHeaders=host)

