// program that copies a file using file operations:


#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceFilename[100], destinationFilename[100], ch;


    printf("Enter the source filename: ");
    scanf("%s", sourceFilename);
    printf("Enter the destination filename: ");
    scanf("%s", destinationFilename);

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
        fputc(ch, destination);
    }

    // Close the files
    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");

    return 0;
}

