#include <stdio.h>
#include <string.h>

int main() {
    char line[865];
    char *token;
    char *tokens[865];
    int count = 0;

//demands input
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);
    
//tokenizes line of text 
    token = strtok(line, "");
    while (token != NULL) {
        tokens[count++] = token;
        token = strtok(NULL, "");
    }

//spits out tokens (i.e. words) in reverse order
    printf("Tokens in reverse order:\n");
    for (int i = count - 1; i >= 0; i--) {
        printf("%s\n", tokens[i]);
    }
    
    return 0;

}