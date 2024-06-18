# CMPT 125 Week 5

## Memory
Addressing system = naming memory space
0x Hexadecimal = memory address of 8 to 16 hexadecimal digit after 0x, where 0x represents hexadecimal string.

### Addressing statements
`int x;` x refers to a memory space; x is a container that can store int data type values in a memory space.
`x = 5;` 5 is stored in a container; where 5 is an L-value and x is an R-value.

## L and R value 
L-value = Container (variable)
R-value = Value being stored/contained
`x = 5;` X is L-value, 5 is R value

Consider the following main program:
```
int main() {
    int a;
    int &b = a;
}
```
Both a and b are L-values!! a is not containing/storing any R-value, since the &b variable is referencing the a variable, both values are L-values!

Per Yonas:
> A variable name behaves as an L-value when it refers to an identifiable memory space but it behaves as an R-value when it refers to the literal value stored in a memory space

### & vs *
& has two uses:
- Reference: only during variable declaration: `int a; int &b = a;`
- Memory address: everywhere except variable declaration `int a; int *b; b = &a;`

* has two uses:
- Pointer: only during variable declaration: `int *b;`
- De-reference: everywhere except variable declaration: `int a = 5; int *b = &a; cout << *b << endl;`
- Pointers work by inference!! Not direct like referencing!

## Pointers
Never return a pointer or reference from an external function of a local variable!!! Will result in corrupted pointer!!! Local variable = call stack, if dereferenced, runtime error occurrs.