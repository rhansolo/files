#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
  char buffer1[20] = "thisisatest\n";
  char buffer2[20];

  char file1 = open("foo.txt", O_RDWR);
  char file2 = open("foo.txt", O_RDWR); 

  write(file1, buffer1, strlen(buffer1));
  write(1, buffer2, read(file2, buffer2, 20));

  close(file1);
  close(file2);

  return 0;
}
