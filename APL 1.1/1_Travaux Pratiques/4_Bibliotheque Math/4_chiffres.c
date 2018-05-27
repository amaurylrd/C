#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int 	main(void) {
	int     t;
    float   f;
    char*	str;

    printf("Entrez un reel : ");
    t = scanf("%s", str);
    if (t != 1 || (parse(str) == strlen(str))) {
        fprintf(stderr, "Verifiez votre valeur.\n");
        return EXIT_FAILURE;
    }
    printf("chiffre des unités : %c\n", str[parse(str)-1]);
   	printf("chiffre des dixièmes : %c\n", str[parse(str)+1]);
  	return EXIT_SUCCESS;
}

int 	parse(char * str) {
	int 	i;

    i = 0;
	while (str[i]) {
		if (str[i] == '.')
			return i;
		i++;
	}
	return i;
}