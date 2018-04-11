# PRIORITE:

```
    %b - unsigned number in binary
    %S - prints a string with characters ONLY between 32 and 127
         others chars are printed like '\<octal ascii value>'
```


# Arguments: 

```
Notation décimale: 
    Padding des 0
    Padding des espaces

int vers notation décimale signée:
Précision de 1 par défault, notation:
    %<s>    .   <p>d
  nbspaces    nbzeroes
	%d	
	%i

int vers octal %o, decimal %u et hexa %x %X non-signés
    %o  int->oct
    %u  int->dec
    %x  int->hex
    %X  int->hex
int = 8 / octal = 10

double displays:
Le float est promu à un double.
    %e  with 6 default precision
    %E
    %f  with exponent
    %F
    %g  with trailling zeroes
    %G
    %a  double->hexa
    %A

char displays
    %c  displays corresponding char from ASCII code
    %s  takes a char pointer and cycle throught all
```
