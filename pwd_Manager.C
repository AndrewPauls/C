/* pwd_manager.C
	A very, very simple password manager */

#include <stdio.h>
#include <string.h>

main() 
{

	/* greet the user */
	printf("Hello there! Please enter your name to use the password manager.\n");

	char name[20];
	char usernames[5][20] = {"", "", "", "", ""};		/* initialize everything to empty string */
	char passwords[5][20] = {"", "", "", "", ""};		/* initialize everything to empty string */
	scanf(" %s", name);


	bool while_Active = true;
	while (while_Active) 
	{
		/* tell the user their options */
		printf("Ok %s, here are your options: \n", &name);
		printf("1: View entries\n");
		printf("2: Add entry\n");
		printf("3: Modify entry\n");
		printf("4: Delete entry\n");
		printf("5: Exit Application\n");
		printf("Please enter the number of your choice, and then hit enter\n");
	

		/* gather the users choice */
		int choice;
		scanf(" %d", &choice);
		if ((0 < choice) && (choice < 6))
		{
			switch (choice)
			{

				case 1:				/* view entries */
					printf("case 1\n");
					break;
					


				case 2:				/* add entry */
					printf("case 2\n");
					int index;
					for (index = 0; index < 5; index++)
					{
						if (strcmp(usernames[index], "") != 0) {continue;}
						if (strcmp(usernames[index], "") == 0) {
						printf("please enter the user name now\n");
						char username[20];
						scanf(" %s", username);
						strcpy(usernames[index], username);
						printf("Username at index %d updated to: %s\n", index, usernames[index]);
						
						printf("please enter the password now\n");
						char password[20];
						scanf(" %s", password);
						strcpy(passwords[index], password);
						printf("Password at index %d updated to: %s\n", index, passwords[index]);
						break;
						}
					}
					break;

				case 3: 			/* modify entry */
					printf("case 3\n");
					break;



				case 4: printf("case 4\n");	/* delete entry */
					printf("please enter the index of the entry to be deleted:\n");
					int index2;
					scanf(" %d", &index2);
					if ((0 <= index2) && (index2 <6)) 
					{
						/* set the value at that position of both arrays to be "" */
						strcpy(usernames[index2], "");
						strcpy(passwords[index2], "");
					}
					printf("You have set the entries in position %d of the database back to empty string\n", index2);
					break;


				case 5: printf("case 5\n");	/* close application */
					while_Active = false;
					break;
			}
		}
		else printf("Please enter a valid option next time\n");
		
	}
	printf("\n\n%s, upon request the application is now shutting down.", name);
	return 0;
}