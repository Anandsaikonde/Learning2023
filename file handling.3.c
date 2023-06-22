
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 1000
#define MAX_LINE_LENGTH 100

typedef struct {
    int entry_no;
    char sensor_no[3]; // assuming sensor number is 2 characters + null terminator
    float temperature;
    int humidity;
    int light;
    char timestamp[9]; // assuming timestamp is in format hh:mm:ss + null terminator
} Entry;

Entry entries[MAX_ENTRIES];
int num_entries = 0;

// Function to read data from CSV file and store in array of Entry structures
void read_data(char* file_name) {
    FILE* file = fopen(file_name, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    char line[MAX_LINE_LENGTH];
    int line_num = 0;
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        if (line_num == 0) {
            // skip header line
            line_num++;
            continue;
        }
        char* token;
        token = strtok(line, ",");
        entries[num_entries].entry_no = atoi(token);
        token = strtok(NULL, ",");
        strcpy(entries[num_entries].sensor_no, token);
        token = strtok(NULL, ",");
        entries[num_entries].temperature = atof(token);
        token = strtok(NULL, ",");
        entries[num_entries].humidity = atoi(token);
        token = strtok(NULL, ",");
        entries[num_entries].light = atoi(token);
        token = strtok(NULL, ",");
        strncpy(entries[num_entries].timestamp, token, 9);
        num_entries++;
    }
    fclose(file);
}

// Function to display contents of array of Entry structures
void display_data() {
    for (int i = 0; i < num_entries; i++) {
        printf("Entry No: %d\n", entries[i].entry_no);
        printf("Sensor No: %s\n", entries[i].sensor_no);
        printf("Temperature: %.1f\n", entries[i].temperature);
        printf("Humidity: %d\n", entries[i].humidity);
        printf("Light: %d\n", entries[i].light);
        printf("Timestamp: %s\n", entries[i].timestamp);
        printf("\n");
    }
}

// Example usage
int main() {
    read_data("data.csv");
    display_data();
    return 0;
}


