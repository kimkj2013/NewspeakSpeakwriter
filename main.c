// Copyright (C) 2016 Kwangju Kim.
// Esoteric language compiler.

#include <stdio.h>
#include <string.h>
/*
 * Syntax
 * good - increment the pointer by 1
 * ungood - decrement the pointer by 1
 * plus - x 2
 * doubleplus - x 4
 * goodthink - increment the value where the pointer points by 1
 * crimethink - decrement the value where the pointer points by 1
 * BB watch % - print the pointer
 * % blackwhite - write the ascii char to the pointer
 * light - enter the loop
 * unlight - exit the loop
 * % luv BB - exit the program with 0
 * % unluv BB - exit the program with 1
 *
 */

int main(int argc, char** argv) {
  if (argc < 2) {
    fprintf(stderr, "NewSpeakII, doubleplusgood speak.\n");
    fprintf(stderr, "NewSpeakII speakwriter (Oldspeak: compiler), Version 1.0\n");
    fprintf(stderr, "Copyright (C) Kwangju Kim\n");
    fprintf(stderr, "Brainfuck is oldspeak.\n");
    fprintf(stderr, "Prole use oldspeak, Ingsoc use NewSpeakII.\n");
    return 1;
  } else if (argc < 3) {
    if (!strncmp(argv[1], "--help", 6)) {
      fprintf(stderr, "BB writed oldspeak:\n\n");
      fprintf(stderr, "  Usage: ./Speakwriter <newspeak> [<file.asm>]\n");
      fprintf(stderr, "  Option:\n");
      fprintf(stderr, "    --help: prints this page.\n");
      fprintf(stderr, "    --credit: prints the credit.\n");
      return 1;
    }
    if (!strncmp(argv[1], "--credit", 8)) {
      fprintf(stderr, "BB writed oldspeak:\n\n");
      fprintf(stderr, "  This program is inspired by\n");
      fprintf(stderr, "    George Orwell's Nineteen-eighty-four AND\n");
      fprintf(stderr, "    Brainfuck by Urban Muller.\n");
      return 1;
    }
    fprintf(stderr, "NewSpeak is malreported.\n");
    fprintf(stderr, "You is unperson. Thinkpol comed.\n");
    fprintf(stderr, "You is vaporized.\n");
    return 1;
  }
  return 0;
}
