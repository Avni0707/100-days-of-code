// Q123: Read a text file and count the total number of characters, words, and lines.
//  A word is defined as a sequence of non-space characters separated by spaces or newlines.


#include <stdio.h>
int main(){
    FILE *file=fopen("info.txt","r");
    if(file==NULL){
        printf("Error opening file!\n");
        return 1;
    }
    char ch;
    int characters=0,words=0,lines=0;
    while((ch=fgetc(file))!=EOF){
        characters++;
        if(ch==' ' || ch=='\n'){
            words++;
        }
        if(ch=='\n'){
            lines++;
        }
    }

    if(characters>0){
        words++;
        lines++;
    }
    fclose(file);
    printf("Characters: %d\nWords: %d\nLines: %d\n",characters,words,lines);
    return 0;
}