# PokeTerm

---
### NOTE: THIS IS A VERY MUCH WIP

### Update 1(April 5th 2025): I got bored so I updated this to be a little clearer as I have better understanding of C. You can access it in the 2025 revise branch

### Update 2(April 25th 2026): Once again I am working on this project. There are a few fixes and features I want to finish.

---
## Table of Contents
- [Possible FAQ](./README.md#possible-faq)
- [Syntax](./README.md)
    - [Console](./README.md#console)
        - [Console Return Key](README.md#console-return-key)
    - [Errors](./README.md#syntax)
        - [Save](./README.md#save-errors)
        - [Game](./README.md#game-errors)

---

## Possible FAQ:
### What Is this
This originally started as a C version of a C and Assembly version of this project but has now turned in to a terminal version of pokemon.

For now there is not all pokemon will be added as there are so many. I will bundle the original 151 with this to start.

### Why
I want to get a good idea of how this will look in C so that I can make some of the other things in assembly.

## Project Structure
| File        | Purpose                                    |
| ----------- | ------------------------------------------ |
| `battle.*`  | All Battle Logic. Here for maintainability |
| `console.*` | The Engine                                 |
| `save.*`    | Save data then                             |
## Syntax:
### WIP Rewrite

### Console
#### Console State Key:
| State                         | Meaning                                 |
| ----------------------------- | --------------------------------------- |
| `CONSOLE_EXIT`                | Exit the program                        |
| `CONSOLE_OK`                  | Not in Battle or in The PokeCenter/Mart |
| `CONSOLE_BATTLE_ENTER`        | Enter Battle                            |
| `CONSOLE_BATTLE_WON`          | Battle Won                              |
| `CONSOLE_BATTLE_LOST`         | Battle Lost                             |
| `CONSOLE_BATTLE_RAN`          | Ran away from wild encounter            |
| `CONSOLE_POKECENTER_ENTER`    | Enter PokeCenter Sub-Console            |
| `CONSOLE_POKECENTER_HEALED`   | Healing Pokemon                         |
| `CONSOLE_POKECENTER_EXIT`     | Exit Pokecenter Sub-Console             |
| `CONSOLE_POKEMART_ENTER`      | Enter Market Sub-Console                |
| `CONSOLE_POKEMART_ENTER_BUY`  | Enter Buying Mode                       |
| `CONSOLE_POKEMART_ENTER_SELL` | Enter Selling Mode                      |
| `CONSOLE_POKEMART_EXIT_BUY`   | Exit Buying Mode                        |
| `CONSOLE_POKEMART_EXIT_SELL`  | Exit Selling Mode                       |
| `CONSOLE_POKEMART_EXIT`       | Exit Market Sub-Console                 |

Based on this enum [console_return_t](https://github.com/SkylarPlayz348/C-Pokemon/blob/2025-Revise/src/console.h#L27)

##### More will come as the console evolves

### ⚠️ NEED TO UPDATE SO ITS NOT JUST HEX VALUES ⚠️

### Error Key Table Of Contents
Topic
- [Save File Errors](./README.md#save-errors)
- [Game Errors](./README.md#game-errors)

### Save Errors

#### Save Errors Table
| Error | Meaning |
| ----- | ------- |
| TBD   | TBD     |


## TODO

- Make Logic for battles/Pokecenter/Pokemart
- Make Pokemon Stats
- Make Database
- Make Database connections with sqlite3
- Find a name for this project

## Credits

[Bulbapedia](https://bulbapedia.bulbagarden.net/wiki/Type#List_of_types): For type indexing

[PKHeX](https://github.com/kwsch/PKHeX/blob/c666183e6c19430667cc854716cce4f0d2293504/PKHeX.Core/Saves/SAV7.cs#L198): For Pokemon save structure inspiration

[PKSM](https://github.com/FlagBrew/PKSM/blob/master/external/tools/g7PersonalCreator.cpp): For Pokemon save structure inspiration

