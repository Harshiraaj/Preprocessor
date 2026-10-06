#ifndef COMMENT_REMOVAL_H
#define COMMENT_REMOVAL_H
#ifndef FILE_INCLUSION_H
#define FILE_INCLUSION_H
#ifndef MACRO_HANDLER_H
#define MACRO_HANDLER_H

#include <stdio.h>
int remove_comments(FILE *in, FILE *out);
int process_file(FILE *out, const char *filename, int depth);
#define MAX_MACROS 200
#define MACRO_NAME 128
#define MACRO_VALUE 1024

typedef struct {
    char name[MACRO_NAME];
    char params[20][MACRO_NAME];
    int param_count;              /* -1 means object-like macro */
    char value[MACRO_VALUE];
} Macro;

void init_macros(void);
int define_macro(const char *line);
void substitute_macros(const char *input, char *output, int output_size);


#endif

