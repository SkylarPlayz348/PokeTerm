#include <stdio.h>
#include "console.h"

int start()
{
    clear();
    consoleRet = CONSOLE_OK;
    while (consoleRet != CONSOLE_EXIT)
    {
        switch (consoleRet)
        {
        case CONSOLE_POKECENTER_ENTER:
            scanf("%s", enteredCMD);
            pokeConsole(enteredCMD);
            break;
        case CONSOLE_POKECENTER_HEALED:
            printf("Your Pokemon are Healed\n");
            consoleRet = CONSOLE_OK;
            break;
        case CONSOLE_POKECENTER_EXIT:
        case CONSOLE_POKEMART_EXIT:
        case CONSOLE_OK:
            printf("Enter Command: ");
            scanf("%s", enteredCMD);
            console(enteredCMD);
            break;
        }
    }
    return consoleRet;
}

int main()
{
    return start();
}