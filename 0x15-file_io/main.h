
#ifndef __MAIN_H__
#define __MAIN_H__

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
=======
#ifndef HEADER_H
#define HEADER_H

/* open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* close */
#include <unistd.h>

/* dprintf */
#include <stdio.h>

/* malloc, free */
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
