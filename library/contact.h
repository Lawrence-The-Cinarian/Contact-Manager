#ifndef CONTACT_H
#define CONTACT_H

typedef struct
{
  char name[30];
  char phoneNumber[15];
  char email[20];
} Contact;

void prints();
int addContact(Contact *replace);
int searchContact(Contact *replace);
int displayAllContacts(Contact *replace);
int deleteContacts(Contact *replace);

#endif