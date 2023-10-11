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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
