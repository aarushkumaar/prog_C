/*
    r  -> open file for reading. doens't create a new one, so file must exist 
    w  -> open file for writing. create a new file if doenst exist, or overrites 
    a  -> opens file for append, adds data at the end 
    r+ -> opens file for read and write, file must exist 
    w+ -> open file for write and read, overites old file or creats new one 
    a+ -> opens file for append and read, creats file if doesn't exist. 

    fopen() -> opens a file 
    fclose() -> closes a file 
    fprintf() -> writs formatted data to a file 
    fscanf() -> reads formatted data from a file 
    fgets() -> reads a line from the file 
    fgetc() -> reads a single charecter from the file 
    fputs() -> writs a string to a file 
    fputc() -> write a single charecter to a file
    fseek() -> moves the file pointer to a specific location in the file
    frewind() -> moves the file pointer to the beginning of the file

    argc[] -> argument count, number of argument passed to the program
    argv[] -> argument vector, array of strings that contains the argument passed to the program 

    Q) We need file handeling because: 
    A)  Reusability- data stored can be accessed, updated and deleted anywhere and anytime 
        portability- without using any data, file can be transferred to another in the computer system 
        efficient- large amount of input may be required in some programme, file handeling allows easy 
                    access to that part of the file. 
        storage capacity- allows users to store a large amount of data without storing everythign simentaniously 
    
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *file; 
    char ch; 

    //write to a file 
    file = fopen("myfile.txt", "w");
    if (file == NULL){
        printf("Error opening file for writing.\n");
        return 1; // Exit if file cannot be opened
    }
    fprintf(file, "I am writing this using fprintf function \n");
    fputs("I am writing this using fputs function \n", file);
    fputc('A', file); //fputc puts a single charecter in a file 
    fclose(file); // Close the file after writing
    
    //append the same file 
    file = fopen("myfile.txt", "a"); 
    if(file == NULL){
        printf("Error opening file for appending.\n");
        return 1; // Exit if file cannot be opened
    }
    fputs("\nthis line is added using fputs function \n", file);
    fputc('B', file); //fputc puts a single charecter in a file
    fclose(file); // Close the file after appending

    //READING THE FILE 
    file = fopen("myfile.txt", "r");
    if (file == NULL) {
        printf("File could not be opened for reading.\n");
        return 1;
    }
    printf("\n📂 Reading file content:\n--------------------------\n");
    while((ch = fgetc(file)) != EOF) { // read each char until the end of file 
        putchar(ch); //Print each charecter of the console 
    }
    fclose(file); 
    printf("\n--------------------------\nFile reading completed.\n");
    return 0; 
}