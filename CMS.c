#include <stdio.h>
#include <strings.h>

int endsWithEcms(const char *str)

int main (int argc, char** argv) {
  if(argc == 3){
    char* directory = argv[2];
    char* filetoread = argv[1];
    if (endsWithEcms(filetoread) == 1){
      //goforth
    } else {
      printf("the input file to read isn't valid, write a .ecms file\n");
      return 1;
    }
  } else if (strcmp(argv[1],"help") == 0){
    printf("the simple file syntax is header for h1\n paragraph for p \n id after those for adding an id\n divopen for opening a div\n and divclose for closing a div\n you need to use .ecms as file extension\n");
    return 0;
  } else {
    printf("the usecase is ./cms (file to read) (directory for html output)\n");
    return 1;
  }

  return 0;
}



int endsWithEcms(const char *str) {
    int len = strlen(str);
    if (len < 4) {
        return 0;
    }
    return strcmp(str + len - 4, "ecms") == 0;
}
