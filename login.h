///created by ccoman in 7.12.2019
#ifndef FOODORDERINGRMODULAR_LOGIN_H
#define FOODORDERINGRMODULAR_LOGIN_H

#define MAX_USER_LENGTH 100
#define USER_NOT_FOUND "Username doesn't exist"
#define DUPLICATE_USER "Please choose another username!"
#define INCORRECT_PASSWORD "Incorrect password"
#define ERROR_PASSWORD_LONG	 "The password must be at least 7 chars long"
#define ERROR_PASSWORD_NOT_USERNAME "The password must not contain the username"
#define ERROR_PASSWORD_SPECIAL_CHAR "The password must contain one of the following characters: {'.','_','!'}"
#define ERROR_PASSWORD_DIGITS "The password must contain digits"
#define SIGNING_IN "Signing in"
#define SIGNING_UP "Signing up"
#define SIGN_IN "Sign in"
#define SIGN_UP "Sign up"
#define SIGN_IN_UP "Do you want to sign in or sign up?"

void login(char *username, char *password);
void askSign(int *stateLogin);
void signingIn(char *username, char *password, int *stateLogin);
int checkUsername(char *username);
int checkPassword(char *username, char * password);
void signUp(char *username, char *password, int *stateLogin);
int passwordValidation(char *username, char *password);
void encryption(char * pass);
void decryption(char * pass);
void updateNrOfUsers();

#endif
