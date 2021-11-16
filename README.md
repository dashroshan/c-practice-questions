## C Practice

Questions are from the [**Programming in Ansi C**](https://drive.google.com/file/d/1zo9PIKeEm_R_omY9D-smdn7FGnjWvKM5/view?usp=drivesdk) book by E. Balagurusamy

### Boilerplate

```c
/*Q*/
#include <stdio.h>
int main()
{
	return (0);
}
```

### .replit File

> This is needed while using the Replit online IDE. **ch8.c** is the file to run and **-lm** is for including **math.h** 

Run without any messages :

```bash
run = "gcc ch8.c -o out -lm\nclear\n./out\nrm out"
```

Run with possible error messages :

```bash
run = "gcc ch8.c -o out -lm\n./out\nrm out"
```
