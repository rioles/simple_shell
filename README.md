# Simple Shell





This repository contains the files for alx-Holberton's simple_shell project. It can be compiled using GCC and will execute a simple shell that can be used for some basic tasks and programs most commonly found in the $PATH.



## Pre-requisites

Authorized functions and macros:

- access (man 2 access)

- chdir (man 2 chdir)

- close (man 2 close)

- closedir (man 3 closedir)

- execve (man 2 execve)

- exit (man 3 exit)

- _exit (man 2 _exit)

- fflush (man 3 fflush)

- fork (man 2 fork)

- free (man 3 free)

- getcwd (man 3 getcwd)

- getline (man 3 getline)

- isatty (man 3 isatty)

- kill (man 2 kill)

- malloc (man 3 malloc)

- open (man 2 open)

- opendir (man 3 opendir)

- perror (man 3 perror)

- read (man 2 read)

- readdir (man 3 readdir)

- signal (man 2 signal)

- stat (__xstat) (man 2 stat)

- lstat (__lxstat) (man 2 lstat)

- fstat (__fxstat) (man 2 fstat)

- strtok (man 3 strtok)

- wait (man 2 wait)

- waitpid (man 2 waitpid)

- wait3 (man 2 wait3)

- wait4 (man 2 wait4)

- write (man 2 write)





### GCC command to compile:

```sh

gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

```





This wil compile all the '.c' files and change the output's name to 'hsh'.

## Features



hsh is a simple shell made in C to interact with a linux operating system.





## Test Output



#### It works both



Interactive mode:

```sh

rioles$|./hsh

hsh$ ls

append_path.c  free_function.c    path.c             shell.c                                                                                                                                    

AUTHORS        handle_builtins.c  print_env.c        shell.h                                                                                                                                    

checker.c      handle_signal.c    print_functions.c  string_functions.c                                                                                                                         

execution.c    hsh                prompt_user.c      test_path.c                                                                                                                                

exit_cmd.c     man_simple_shell   README.md          tokenizer.c 

hsh$ exit

rioles$|

```



#### Non-interactive mode:



```sh

$| echo "ls" | ./hsh

append_path.c  free_function.c    path.c             shell.c                                                                                                                                    

AUTHORS        handle_builtins.c  print_env.c        shell.h                                                                                                                                    

checker.c      handle_signal.c    print_functions.c  string_functions.c                                                                                                                         

execution.c    hsh                prompt_user.c      test_path.c                                                                                                                                

exit_cmd.c     man_simple_shell   README.md          tokenizer.c 

$|

```



#### To exit program in interactive mode:



The output of this program when executed it look like:

```sh

exit

```



## Example



```sh

ls -l *.c

```




