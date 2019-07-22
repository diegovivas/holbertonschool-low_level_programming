#ifndef DOG
#define DOG
/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float  age;
	char *owner;
};
/**
 * struct d - Typedef for unsigned int
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */
typedef struct d
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
