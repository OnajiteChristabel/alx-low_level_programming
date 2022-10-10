#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new struct
 * @name: name
 * @age: afe
 * @owner: owner
 * Return: return
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_cp;
	char *owner_cp;

	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	if (dog == NULL)
		return (NULL);
	name_cp = dog->name;
	owner_cp = dog->owner;
	if (name_cp == NULL || owner_cp == NULL)
		return (NULL);
	return (dog);
}
