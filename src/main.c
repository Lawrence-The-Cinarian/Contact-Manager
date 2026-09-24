#include "../library/contact.h"
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>


int main(void)
{
  do
  {
    Contact file;
    int option = 0;
    char symbol = '\0';

    prints();
    printf("Enter your desired option: ");
    scanf("%d", &option);
    (void)getchar();

    switch(option)
    {
      case 1:
      puts("");
      addContact(&file);
      break;

      case 2:
      puts("");
      searchContact(&file);
      break;

      case 3:
      puts("");
      displayAllContacts(&file);
      break;

      case 4:
      puts("");
      deleteContacts(&file);
      break;

      case 5:
      puts("");
      puts("Exiting....");
      sleep(2);
      return 0;

      default:
      puts("Invalid Option");
    }

    printf("Would you like to continue? Y[es] or N[o]: ");
    scanf(" %c", &symbol);
    if(!(symbol == 'Y' || symbol == 'y'))
    {
      break;
    }

  }
  while(true);
  return 0;
}