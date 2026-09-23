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
  fprintf(open_file, "Name,Phone Number,E-mail\n");
  fprintf(open_file, "%s,%s,%s\n", replace->name, replace->phoneNumber, replace->email);
  fclose(open_file);
  puts("Saved to contact.csv");
  return 0;
}


int searchContact(Contact *replace)
{
  
}


int displayAllContacts(Contact *replace)
{
  
}


int deleteContact(Contact *replace)
{
  
}