/**********************************************************************/
/*                                                                    */
/* This file covers all of the logic for the Console and Sub-Consoles */
/*                                                                    */
/**********************************************************************/
#ifndef CONSOLE_H
#define CONSOLE_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef enum
{
    CONSOLE_UNKOWN = -1,
    CONSOLE_EXIT = 0,
    CONSOLE_OK,
    CONSOLE_BATTLE_ENTER,
    CONSOLE_BATTLE_WON,
    CONSOLE_BATTLE_LOST,
    CONSOLE_BATTLE_RAN,
    CONSOLE_POKECENTER_ENTER,
    CONSOLE_POKECENTER_HEALED,
    CONSOLE_POKECENTER_EXIT,
    CONSOLE_POKEMART_ENTER,
    CONSOLE_POKEMART_ENTER_BUY,
    CONSOLE_POKEMART_ENTER_SELL,
    CONSOLE_POKEMART_EXIT_BUY,
    CONSOLE_POKEMART_EXIT_SELL,
    CONSOLE_POKEMART_EXIT
} console_return_t;

// Command storage
char enteredCMD[10];   // Main console commands
int battlecmd;         // Battle console commands
char pokecenterCMD[1]; // Pokecenter console commands
char marketCMD[2];     // Market console commands

// Console Variables
console_return_t consoleRet;

// PokeCenter and PokeMart Variables
bool inPokecenter;
bool talking;
bool inMarket;
bool onRoute;
// Battle Variables
bool wild;
double pHP; // Player HP
double oHP; // Opponent HP
int pPN;    // Player Pokemon Number
int oPN;    // Opponent Pokemon Number

void clear();

// Pokecenter Sub-Console
int pokeConsole(char command[]);
int martConsole(char command[]);
int console(char command[]);
#endif