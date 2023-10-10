#ifndef DOG_H
#define DOG_H

/**
 * struct asd asd asd
 * @name: dods name
 * @age: dogs age
 * @owner: 
 *
 * descriotion: just a long struct in a big kitty wolrd
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
