DEBUG_FLAGS = -g3 -O0 -std=c99
RELEASE_FLAGS = -DNDEBUG -O3 -std=c99
WARNING_FLAGS = -Wall -Wextra -Wpedantic -Wshadow -Wconversion
SANITIZER_FLAGS = -fsanitize=address
ANALYZER_FLAGS = -fanalyzer

FLAGS = $(DEBUG_FLAGS) $(WARNING_FLAGS) $(SANITIZER_FLAGS) $(ANALYZER_FLAGS)

build:
	gcc $(FLAGS) Main.c -o Main

run:
	env ASAN_OPTIONS="detect_leaks=1" ./Main
