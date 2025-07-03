#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog
 * @name: name for dog
 * @age: age
 * @owner: who owns it
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
