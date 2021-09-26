1. Multiple:
	* Entry-condition loops: These are loops that examine the test 
	condition before executing the statements in the body of the loop. E.g.
	`for` and `while` loops.
	* Exit-condition loops: These are loops that examine the test condition
	after executing the statements in the body of the loop.
**Comments:**
2. Below:
```
01234

```
3. Below:
```
0369
12

```
4. Below:
```
6
8

```
5. Below:
```
 k = 8

```
6. Below:
```cpp
for (int i = 1; i <= 64; i *= 2)
	std::cout << i << " ";	
```
7. You do it by using a block, whose start is
denoted by an opening brace and whose end is denoted
by a closing curly brace.
8. Multiple:
	* The first statement is valid, since the comma operator
	would evaluate `(1,024)` to `024`, hence `x` is set to `024`.
	Note that this value would be octal.
	* Since, the comma operator would have the lowest of all
	the precedence operators, `y = 1,024` would be equivalent to
	`(y = 1), 024`. This would set `y` to `1` and the `024` would
	do nothing.
9. `cin >> ch` ignores whitespaces, while `ch = cin.get()` and
`cin.get(ch)` treats them as the whitespaces as the same characters
