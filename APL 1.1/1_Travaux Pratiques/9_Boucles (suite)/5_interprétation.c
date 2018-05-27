#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void 	clean(const char *buffer, FILE *fp);
 
int 	main(int argc, char** argv){
    char 	str[20] = "";
    double	x;
 
    printf("Entrez une chaine : ");
    fgets(str, sizeof(str), stdin);
    clean(str, stdin);
    x = atoi(str);
    printf(" = %2.f\n", x*x);

   	return EXIT_SUCCESS;
}
 
void 	clean(const char *buffer, FILE *fp) {
    char*	p = strchr(buffer,'\n');
    int		c;

    if (p != NULL)
        *p = 0;
    else
        while ((c = fgetc(fp)) != '\n' && c != EOF);
}