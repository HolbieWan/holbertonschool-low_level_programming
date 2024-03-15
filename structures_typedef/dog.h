#ifndef dog_h
#define dog_h
/**
 * struct dog - Defines parameters for the dog struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Defines parameters for the dog struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} Dog;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
