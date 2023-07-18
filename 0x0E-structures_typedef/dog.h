#ifndef dog
#define dog

/**
 * dog - the structure name
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

typedef struct my_dog dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
