#ifndef SAVE_H
#define SAVE_H
#include <stdio.h>

// Enums and Associated Strings

typedef enum
{
    OTHER = 0,
    MALE,
    FEMALE
} pokemon_sex_t;

const char *pokemon_sex_t[] = {
    "Unknown",
    "Male",
    "Female",
};

/* Based on Gen VII */
typedef enum
{
    NORMAL = 0,
    FIGHTING,
    FLYING,
    POISON,
    GROUND,
    ROCK,
    BUG,
    GHOST,
    STEEL,
    FIRE,
    WATER,
    GRASS,
    ELECTRIC,
    PSYCHIC,
    ICE,
    DRAGON,
    DARK,
    FAIRY
} pokemon_type_t;

/* Strings for enums */
const char *pokemon_type_strings[] = {
    "Normal",
    "Fighting",
    "Flying",
    "Poison",
    "Ground",
    "Rock",
    "Bug",
    "Ghost",
    "Steel",
    "Fire",
    "Water",
    "Grass",
    "Electric",
    "Psychic",
    "Ice",
    "Dragon",
    "Dark",
    "Fairy",
};

// Save State
typedef enum
{
    SAVE_OK = 0,
    SAVE_FAILED,
    SAVE_SAVING,
    SAVE_LOADING,
    SAVE_LOADED
} save_state_t;

/* Strings for save state */
const char *save_state_strings_t[] = {
    "Save Ok",
    "Save Failed",
    "Save Saving",
    "Save Loading",
    "Save Loaded",
};

// Move
typedef struct
{
    int id;
    char move_name;
    pokemon_type_t move_type;
} pokemon_move_t;

// Pokemon
typedef struct
{
    int pokedex_id;
    char pokemon_name;
    char pokemon_nick;
    pokemon_type_t pokemon_type[2];
    pokemon_move_t moves[4];
    char held_item;
} pokemon_t;

typedef struct
{
    char header[4];
    int file_size;
    char save_version[4];
    int encrypted; // Either 1 or 0
} save_header_t;

typedef struct
{
    int save_id;
    pokemon_t pokemon_inv[6];
    pokemon_t pokemon_boxes[255];
} save_data_t;

save_state_t load_save(FILE *save_file, save_data_t *data);

save_state_t save_game(FILE *save_file, save_data_t *data);

#endif