1. The second version will only compare
the character once, if it sees that
the character is a space. While,
the first version will compare twice,
regardless of what the character. Regardless,
both programs should be correct.
**comments:**
2. Replacing `++ch` with `ch+1` will convert
`ch` to an integer and add one to it and will also
return an integer. So, adding one will end up
printing the ascii values rather than their
character representation.
**comments:**
3. Output:
```
Hi!
H$i$!$
$Send $10 or $20 now!
S$e$n$d$ $ct1 = 9, ct2 = 9
```
**comments:**
4. Multiple:
	a. `weight >= 115 && weight < 125`
	b. `ch == 'q' or ch == 'Q' `
	c. `x % 2 == 0 && x != 26`
	d. `x % 2 == 0 and x % 26 != 0`
	e. `(donation >= 1000 && donation <= 2000) || guest == 1`
	f. `(ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')`
**comments:**
5. They are not the same. For example, if `x` is `int`
then `!!x` would evalute to 1 if x was non-zero, and 0 
if x was zero. But it would be correct it `x` was `bool`
**comments:**
6. Code:
```cpp
if (x >= 0)
	return x
else
	return -x
```
**comments:**
You could have used the ternary operator and written
`(x < 0) ? -x : x` or `(x >= 0) ? x : -x`
7. Code:
```cpp
switch(ch){
case 'A': a_grade++; break;
case 'B': b_grade++; break;
case 'C': c_grade++; break;
case 'D': d_grade++; break;
default: f_grade++; break;
}
```
**comments:**
8. Because the program would only work if integers were to be entered as input
If for example, a character is entered, the input statement will fail
and the while loop will cycle endlessly.
**comments:**
Alternative answer:
If you use integer and the user types a noninteger as `q`, the program
hangs because integer input can't process a characer. But if you use
character labels and the user types an integer such as `5`, character
ipnut will process 5 as a character. Then the default part of the switch
can suggest entering another character.
9. Code:
```cpp
int line = 0;
char ch;
while (cin.get(ch) && ch != 'Q')
{
	if (ch == '\n')
		line++;
}
```
**comments:**
