


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    FILE *source, *destination;
    char sourceFilename[100], destinationFilename[100], ch;
    int option, i;

    // Check if the user has provided enough arguments
    if (argc < 3) {
        printf("Usage: %s [-u | -l | -s] source_file destination_file\n", argv[0]);
        return 1;
    }

    // Get the user's option
    option = 0;
    for (i = 1; i < argc - 2; i++) {
        if (argv[i][0] == '-') {
            option = argv[i][1];
        }
    }

    // Get the source and destination filenames from the user
    strcpy(sourceFilename, argv[argc - 2]);
    strcpy(destinationFilename, argv[argc - 1]);

    // Open the source file for reading
    source = fopen(sourceFilename, "r");
    if (source == NULL) {
        printf("Error: could not open %s for reading.\n", sourceFilename);
        return 1;
    }

    // Open the destination file for writing
    destination = fopen(destinationFilename, "w");
    if (destination == NULL) {
        printf("Error: could not open %s for writing.\n", destinationFilename);
        return 1;
    }

    // Copy the contents of the source file to the destination file
    while ((ch = fgetc(source)) != EOF) {
        if (option == 'u') {
            fputc(toupper(ch), destination);
        } else if (option == 'l') {
            fputc(tolower(ch), destination);
        } else if (option == 's') {
            fputc(toupper(ch), destination);
        } else {
            fputc(ch, destination);
        }
    }

    // Close the files
    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");

    return 0;
}


