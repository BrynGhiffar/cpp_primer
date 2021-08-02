1. The second version will only compare
the character once, if it sees that
the character is a space. While,
the first version will compare twice,
regardless of what the character. Regardless,
both programs should be correct.
2. Replacing `++ch` with `ch+1` will convert
`ch` to an integer and at one to it and will also
return an integer. So, adding one will end up
printing the ascii values rather than their
character representation.
3. Output:
```
Hi!
H$i$!$
$Send $10 or $20 now!
S$e$n$d$ $ct1 = 9, ct2 = 9
```
4. Multiple:
	a. `weight >= 115 && weight <= 125`
	b. `ch == 'q' or ch == 'Q' `
	c. `x % 2 == 0 && x != 26`
	d. `x % 2 == 0 and x % 26 != 0`
	e. `(donation >= 1000 && donation <= 2000) || guest == 1`
	f. `(ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')`
5. They are not the same. For example, if `x` is `int`
then `!!x` would evalute to 1 if x was non-zero, and 0 
if x was zero. But it would be correct it `x` was `bool`
6. Code:
```cpp
if (x >= 0)
	return x
else
	return -x
```
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
8. 
