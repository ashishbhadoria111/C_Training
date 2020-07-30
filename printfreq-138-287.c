/* 
   Ashish Pratap Singh Bhadoria
   QC ID - 138287
*/

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

void  print_freq(char  *line)
{
    int freq[26];
    memset(freq, 0, sizeof(freq));
    for(int i = 0; line[i] != '\0'; i++)
    {
        freq[line[i]-'a']++;
    }
    for(int i = 0; i < 26; i++)
    {
        if(freq[i])
        {
            printf("%c -> %d\n", (char)('a'+i), freq[i]);
        }
    }
}

int main()
{
    char *str = "asudvfybejadeycberybjnjnwocwncownrfuitunrjtbkejfvnsudciun";
    print_freq(str);
}
