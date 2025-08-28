# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRCDIR = src
INCDIR = include

# Subdirectories with C files
SRC_INIT = $(SRCDIR)/minirt_init
SRC_MINILIBX = $(SRCDIR)/minirt_minilibx
SRC_PARCING = $(SRCDIR)/minirt_parcing

# Source files
SRCS =	main.c \
		$(SRCDIR)/error.c \
    	$(SRC_INIT)/minirt_init.c \
    	$(SRC_MINILIBX)/minirt_minilibx.c \
		$(SRC_PARCING)/minirt_parcing.c

# Object files
OBJS = $(SRCS:.c=.o)

# Executable
NAME = minirt

# Default target
all: minilibx dirs $(NAME)

# Create directories
dirs:
	@mkdir -p $(INCDIR) $(SRCDIR) $(SRC_INIT) $(SRC_MINILIBX) $(SRC_PARCING)

minilibx:
	make -C minilibx-linux
# Compile executable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -Lminilibx-linux -lmlx -lXext -lX11 -lm -o $(NAME) 

# Compile object files
%.o: %.c
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJS)

# Clean object files + executable
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re dirs
