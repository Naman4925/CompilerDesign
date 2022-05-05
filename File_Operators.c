#include<stdio.h> 
#include<string.h>
int main( ) {
FILE *filePointer ;

char dataToBeWritten[200]= "SRM INSTITUTE OF SCIENCE AND TECHNOLOGY CHENNAI.";
filePointer = fopen("Test.txt", "w") ;
if ( filePointer == NULL )
{
printf( "Test.txt file failed to open." ) ; }
else
{ printf("The file is now opened.\n") ;
if ( strlen ( dataToBeWritten ) > 0 ) {
fputs(dataToBeWritten, filePointer) ;
fputs("\n", filePointer) ;
}
fclose(filePointer) ;
printf("Data successfully written in file Test.txt\n");
printf("The file is now closed.") ;
}
char dataToBeRead[200];
filePointer = fopen("Test.txt", "r") ;
if ( filePointer == NULL )
{
printf( "Test.txt file failed to open." ) ;
} else {
printf("\n\nReading the contents of the File....\n") ;
while( fgets ( dataToBeRead, 200, filePointer ) != NULL ) {
printf( "%s" , dataToBeRead ) ; }
fclose(filePointer) ;
printf("Data successfully read from file Test.txt\n");
printf("The file is now closed.") ; }
return 0; }
