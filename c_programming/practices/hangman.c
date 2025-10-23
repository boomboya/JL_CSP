// hangman game in C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define MAX_TRIES 6
#define WORD_LENGTH 100

void display_hangman(int tries) {
    const char *stages[] = {
        "  _______\n |/      |\n |      (_)\n |      \\|/\n |       |\n |      / \\\n |\n_|___\n",
        "  _______\n |/      |\n |      (_)\n |      \\|/\n |       |\n |      / \n |\n_|___\n",
        "  _______\n |/      |\n |      (_)\n |      \\|/\n |       |\n |       \n |\n_|___\n",
        "  _______\n |/      |\n |      (_)\n |      \\|\n |       |\n |       \n |\n_|___\n",
        "  _______\n |/      |\n |      (_)\n |       |\n |       |\n |       \n |\n_|___\n",
        "  _______\n |/      |\n |      (_)\n |       \n |       \n |       \n |\n_|___\n",
        "  _______\n |/      |\n |       \n |       \n |       \n |       \n |\n_|___\n"
    };
    printf("%s\n", stages[MAX_TRIES - tries]);
}
int main() {
    const char *word_list[] = {"programming", "hangman", "computer", "science", "challenge"};
    
    int word_count = sizeof(word_list) / sizeof(word_list[0]);
    srand(time(0));
    
    const char *chosen_word = word_list[rand() % word_count];
    int word_len = strlen(chosen_word);
    
    char guessed[word_len + 1];
    for (int i = 0; i < word_len; i++) {
        guessed[i] = '_';
    }
    guessed[word_len] = '\0';
    int tries = MAX_TRIES;
    char guessed_letters[26] = {0};
    int guessed_count = 0;
    printf("Welcome to Hangman!\n");
    while (tries > 0) {
        printf("\nWord: %s\n", guessed);
        printf("Guessed letters: ");
        for (int i = 0; i < guessed_count; i++) {
            printf("%c ", guessed_letters[i]);
        }
        printf("\n");
        display_hangman(tries);
        printf("Enter a letter: ");
        char guess;
        scanf(" %c", &guess);
        guess = tolower(guess);
        int already_guessed = 0;
        for (int i = 0; i < guessed_count; i++) {
            if (guessed_letters[i] == guess) {
                already_guessed = 1;
                break;
            }
        }
        if (already_guessed) {
            printf("You already guessed that letter. Try again.\n");
            continue;
        }
        guessed_letters[guessed_count++] = guess;
        int correct_guess = 0;
        for (int i = 0; i < word_len; i++) {
            if (chosen_word[i] == guess) {
                guessed[i] = guess;
                correct_guess = 1;
            }
        }
        if (!correct_guess) {
            tries--;
            printf("Wrong guess! You have %d tries left.\n", tries);
        } else {
            printf("Good guess!\n");
        }
        if (strcmp(guessed, chosen_word) == 0) {
            printf("\nCongratulations! You've guessed the word: %s\n", chosen_word);
            break;
        }
    }
    if (tries == 0) {
        display_hangman(tries);
        printf("\nSorry, you've run out of tries. The word was: %s\n", chosen_word);
    }
    return 0;
}

