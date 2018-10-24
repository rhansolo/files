#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
  // read only
  char file1 = open("foo.txt", O_RDONLY);
  //read & write
  char file2 = open("outfoo.txt", O_RDWR); 

  //reads from file
  printf("Reading! \n");
  char info[9];
  if(read(file1, info, 9) < 0){
   	printf("reading error");
  }
  printf("Writing! \n");
 	if (write(file2, info , 9) != 9){
    printf("writing error");
 	}
  printf("Terminated");
  close(file1);
  close(file2);

  return 0;
}
