// 12S24047 - Davina Olivia Yosefanny Hutabarat
// 12S24045 - Mutiara Y.H. Sianturi

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[60];
    scanf("%60s", str);
    
    int length = strlen(str);
    for (int i = 0; i < length; i += 3) {
        char temp[4] = {str[i], str[i+1], str[i+2], '\0'}; 
        int ascii_value = atoi(temp); 
        printf("%c", ascii_value); 
    }
    
    printf("\n");
    return 0;
}
