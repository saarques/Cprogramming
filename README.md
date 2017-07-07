# Cprogramming
contains c programmes for daily practice.

## Installing an editor
Installing Sublime Text in Ubuntu  
	[Installing sublime with terminal](https://askubuntu.com/questions/172698/how-do-i-install-sublime-text-2-3)


### References
[C programming.net](http://www.cprogramming.com/tutorial/c-tutorial.html)
[Tutorials Point](https://www.tutorialspoint.com/cprogramming/)
[Learn C](http://www.learn-c.org/) 

### Pattern Exercises 
[Pyramic Patterns](http://scanftree.com/programs/c/programs-to-print-pyramid-patterns-in-c-part-1/)
[Star Patterns in C](http://www.codeforwin.in/2015/07/star-patterns-program-in-c.html)

### Some Books
[The C book](http://publications.gbdirect.co.uk/c_book/thecbook.pdf)
[C text](http://www-personal.acfr.usyd.edu.au/tbailey/ctext/ctext.pdf)




Coding style
====================
I. Variables - use lowercase and '_' to separe the words: `int test_var;`

II. Pointers - use '*' near pointer name: `int *pointer name;`

III. Structures and unions - naming same as for variables:
 
```
struct test_struct {
	int test;
	int *pointer;
};
```

IV. Typedefs: use '_t' postfix: `typedef test_struct test_struct_t;` ('_t' minds that it is a type)

V. Functions - C Standard Style: 

```
size_t strlen(char *str)
{
	... FUNCTION BODY ...
}
```

VI. Code blocks - code block like for, while, do, if:

```
if (...) {
	...
} else if (...) {
	...
} else {
	...
}

do {
	...
} while (...);

for (...; ...; ...;) {
	...
}

switch (...) {
	case ...:
		...
		break;
	case ...:
		...
		break;
		
	....
	
	default:
		...
		break;
}
```

VII. Commenting - there are 3 situatuions:

a) on file start: You must write copyright and license and file description

```
/* ... name ...
 * 
 * Copyright (c) 2015 ...name... (...mail...).
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 * 
 * ... description ...
 */
```

b) in header files before function declaration

```
/*
 * ... description ...
 */
int test_func();
```

c) inside source file - use '//' comments


