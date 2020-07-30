/* 
   Ashish Pratap Singh Bhadoria
   QC ID - 138287
*/

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int word_count(char  *line)
{
    int count = 0;
    for(int i  = 0; line[i] != '\0'; i++)
    {
        if(line[i] == ' ' || line[i] == '\n') count++;
    }
    return count;
}

int main()
{
    char buffer[1000];
    char *text = NULL;  
    int total_length = 0; 
    // takes input till gets 2 consecutive newline
    while (fgets(buffer, sizeof(buffer), stdin) && buffer[0] != '\n') {
        int length = strlen(buffer);  
        char *new_text = realloc(text, total_length + length + 1); 
        if (!new_text) { 
            free(text);   
            fputs("Not enough memory :(\n\n", stderr);                   
            return EXIT_FAILURE;
        }
        text = new_text;  
        strcpy(text + total_length, buffer); 
        total_length += length;              
    }      

    printf("total %d words", word_count(text));
    free(text); 
}
