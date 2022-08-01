#ifndef HEADER_FILE
#define HEADER_FILE dog.h

/**
 * struct dog - dog struct
 * @name: dog_name
 * @age: dog_age
 * @owner: owner
 * Return: true
 */

struct dog
{
    char *name;
    float age;
    char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
