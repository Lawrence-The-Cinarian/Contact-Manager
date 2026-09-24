#ifndef CONTACT_H
#define CONTACT_H

typedef struct
{
  char name[50];
  char phoneNumber[20];
  char email[50];
} Contact;

void prints();
int addContact(Contact *replace);
int searchContact(Contact *replace);
int displayAllContacts(Contact *replace);
int deleteContacts(Contact *replace);

#endif
