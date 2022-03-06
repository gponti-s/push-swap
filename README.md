# push-swap

**** HOW TO USE ****

• Compile using the command "$> make"

• run the program using the command "$>./push_swap 2 1 3 6 5 8" (a range of unsorted numbers)

But, before run the program, you must understand what the project is by reading the folowing lines.


**** THE PROJECT ****

• You have to write a program named push_swap that takes as an argument the stack a formatted as a list of integers. The first argument should be at the top of the stack (be careful about the order).

• The goal is to sort the stack with the lowest possible number of operations. During the evaluation process, the number of instructions found by your program will be compared against a limit: the maximum number of operations tolerated. If your program either displays a longer list or if the numbers aren’t sorted properly, your grade will be 0.


**** THE RULES ****

• Global variables are forbidden.

• You can use only:
  - read, write, malloc, free, exit;
  - ft_printf and any equivalent YOU coded.

• The program must display the smallest list of instructions possible to sort the stack a, the smallest number being at the top.

• Instructions must be separated by a ’\n’ and nothing else.

• If no parameters are specified, the program must not display anything and give the prompt back.

• In case of error, it must display "Error" followed by a ’\n’ on the standard error. Errors include for example: some arguments aren’t integers, some arguments are bigger than an integer and/or there are duplicates.


**** THE INSTRUCTION ****

You have 2 stacks named a and b.
  • At the beginning:
  
  ◦ The stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.
  
  ◦ The stack b is empty.
  
  • The goal is to sort in ascending order numbers into stack a. To do so you have the following operations at your disposal:
    - sa (swap a): Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
    - sb (swap b): Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
    - ss : sa and sb at the same time.
    - pa (push a): Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
    - pb (push b): Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
    - ra (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.
    - rb (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.
    - rr : ra and rb at the same time.
    - rra (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.
    - rrb (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.
    - rrr : rra and rrb at the same time.


**** THE EVALUATION ****

If our instruction list is correct, we’ll be rated by the amount of instructions we use.

With 3 numbers, we need to sort it with not more than 3 instructions.

With 5 numbers, we need to sort it with not more than 12 instructions.

With 100 numbers, we can get:
  - 5 points if the size of the list of instructions is less than 700
  - 4 points if the size of the list of instructions is less than 900
  - 3 points if the size of the list of instructions is less than 1100
  - 2 points if the size of the list of instructions is less than 1300
  - 1 points if the size of the list of instructions is less than 1500

With 500 numbers, we can get:
  - 5 points if the size of the list of instructions is less than 5500
  - 4 points if the size of the list of instructions is less than 7000
  - 3 points if the size of the list of instructions is less than 8500
  - 2 points if the size of the list of instructions is less than 10000
  - 1 points if the size of the list of instructions is less than 11500
