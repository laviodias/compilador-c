```
bison -d parser.y
flex scanner.l
gcc parser.tab.c lex.yy.c -o exe
./exe < entrada.txt
```
