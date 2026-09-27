# Contact-Manager
This folder was designed in C, though somewhat buggy but code still runs. It can store basic names and phone numbers of its users in a text file, it can be quite useful for you to backup contacts that you may use in the future.

# Features
it uses the following topics for learners.
it uses
- [x] Variables (both standard and custom designed ones using structs)
- [x] Structure and Type definitions (struct and typedef)
- [x] Pointers which was used in ```contact.c``` ```contact.h``` and ```main.c```
- [x] Headers and Macros
- [x] Calling of functions
- [x] File handling

# How to clone and use
Note: I use a Linux based environment (mostly Ubuntu and Termux) but any Linux based environment or Linux distro works. Windows also work as well but you'll need to install the official compiler for C in it, as Linux has C pre installed 

First is to clone it by
```
git clone https://github.com/APUTAZIE/cpe_club_security_analysis.git
```

Next change directory 
```
cd cpe_club_security_analysis/'Contacts Manager'
```

Then finally run this
```
gcc {main,contact}.c -o main && ./main
```

To check if your prompts or information was saved, Run this
```
nano contact.txt
```
Then to exit the editor, press this on your keyboard..
```CTRL + X```, then ```Y```, and press ```Enter```

# Contribution
Any body can contribute to this project, as it's open sourced

©2026, Built by Lawrence The Cinarian

