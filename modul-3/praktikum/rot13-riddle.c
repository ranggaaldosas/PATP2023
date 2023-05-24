#include <stdio.h>
#include <string.h>

int main()
{
    char command[100];
    char text[100];

    fgets(command, sizeof(command), stdin);
    fgets(text, sizeof(text), stdin);

    command[strlen(command) - 1] = '\0';
    text[strlen(text) - 1] = '\0';

    if (strcmp(command, "encode") == 0)
    {
        for (int i = 0; i < strlen(text); i++)
        {
            if (text[i] >= 'a' && text[i] <= 'm')
            {
                text[i] += 13;
            }
            else if (text[i] >= 'n' && text[i] <= 'z')
            {
                text[i] -= 13;
            }
            else if (text[i] >= 'A' && text[i] <= 'M')
            {
                text[i] += 13;
            }
            else if (text[i] >= 'N' && text[i] <= 'Z')
            {
                text[i] -= 13;
            }
        }
        printf("%s\n", text);
    }
    else if (strcmp(command, "decode") == 0)
    {
        for (int i = 0; i < strlen(text); i++)
        {
            if (text[i] >= 'a' && text[i] <= 'm')
            {
                text[i] += 13;
            }
            else if (text[i] >= 'n' && text[i] <= 'z')
            {
                text[i] -= 13;
            }
            else if (text[i] >= 'A' && text[i] <= 'M')
            {
                text[i] += 13;
            }
            else if (text[i] >= 'N' && text[i] <= 'Z')
            {
                text[i] -= 13;
            }
        }
        printf("%s\n", text);
    }

    return 0;
}
