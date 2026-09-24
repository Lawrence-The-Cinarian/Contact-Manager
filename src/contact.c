#include "../library/contact.h"
#include <stdio.h>
#include <string.h>

void prints()
{
  puts("Contact Manager");
  puts("");
  puts("1. Add contact");
  puts("2. Search contact");
  puts("3. Display all contacts");
  puts("4. Delete all contacts");
  puts("5. Exit by press any keyword or press 5");
  puts("");
}


int addContact(Contact *replace)
{
  printf("Enter contact name: ");
  fgets(replace->name, sizeof(replace->name), stdin);
  replace->name[strcspn(replace->name, "\n")] = '\0';
  printf("Enter contact phone number: ");
  fgets(replace->phoneNumber, sizeof(replace->phoneNumber), stdin);
  replace->phoneNumber[strcspn(replace->phoneNumber, "\n")] = '\0';
  printf("Enter contact email: ");
  fgets(replace->email, sizeof(replace->email), stdin);
  replace->email[strcspn(replace->email, "\n")] = '\0';

  FILE *open_file;
  open_file = fopen("contact.csv", "a");
  if(open_file == NULL)
  {
    puts("");
    puts("Error opening file");
    return 1;
  }

  fseek(open_file, 0, SEEK_END);
  long check = ftell(open_file);

  if(check == 0)
  {
  fprintf(open_file, "Name,Phone Number,E-mail\n");
  }

  fprintf(open_file, "%s,%s,%s\n", replace->name, replace->phoneNumber, replace->email);
  fclose(open_file);
  puts("Saved to contact.csv");
  return 0;
}


int searchContact(Contact *replace)
{
  char searchName[50];
  printf("Enter the name contact you're searching for: ");
  fgets(searchName, sizeof(searchName), stdin);
  searchName[strcspn(searchName, "\n")] = '\0';

  FILE *search_file = fopen("contact.csv", "r");
  if(search_file == NULL)
  {
    puts("No such file exist");
    return 1;
  }

  int found = 0;  // flag: did we find it?
  
  // Read through file line by line
  while(fscanf(search_file, "%49[^,],%19[^,],%49s", replace->name, replace->phoneNumber, replace->email) == 3)
  {
    // Compare THIS contact's name with search name
    if(strcmp(replace->name, searchName) == 0)
    {
      printf("%s,%s,%s\n", replace->name, replace->phoneNumber, replace->email);
      found = 1;  // mark as found
      break;      // stop searching
    }
  }
  
  if(!found)
  {
    puts("No contact in that form exist");
  }
  
  fclose(search_file);
  return 0;
}


int displayAllContacts(Contact *replace)
{
  FILE *display_file;
  display_file = fopen("contact.csv", "r");
  if(display_file == NULL)
  {
    puts("No such file exist");
    return 1;
  }
  printf("Name,Phone Number,E-mail\n");
  while(fscanf(display_file, "%49s,%19s,%49s\n", replace->name, replace->phoneNumber, replace->email)
  {
    printf("%s,%s,%s\n", replace->name, replace->phoneNumber, replace->email);
  }
  return 0;
}


int deleteContacts(Contact *replace)
{
  if(remove("contact.csv") == 0)
  {
  puts("");
  puts("File successfully deleted");
  return 1;
  }
  else
  {
  puts("No such file exist");
  perror("Reason");
  return 1;
  }
}