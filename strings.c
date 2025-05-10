//1. strcat():----------


/*#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "Hello";
    char t[] = "World";
    strcat(s, t);
    printf("String = %s", s);
}*/

//2. strlen():2. strlen():----------


/*#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "Hello";
    int len = strlen(s);
    printf("Length = %d", len);
}*/


//3. strcpy():----------

/*#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "CodeWithHarry";
    char t[50];
    strcpy(t, s);
    printf("Source string = %s\n", s);
    printf("Target string = %s", t);
}*/


//4. strcmp():----------


/*#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "Hello";
    char t[] = "World";
    int cmp = strcmp(s, t);
    printf("Comparison result = %d", cmp);
}*/



//5. strrev():----------

#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "Hello";
    printf("Reversed string = %s", strrev(s));
}