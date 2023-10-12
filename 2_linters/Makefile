MAIN=main
CFLAGS=-Wall -Wextra

.PHONY: all
all: $(MAIN)

$(MAIN): $(MAIN).c
	$(CC) $(CFLAGS) $^ -o $@

.PHONY: flawfinder
flawfinder:
	flawfinder --context --minlevel=3 --error-level=4 $(MAIN).c

.PHONY: clang-tidy
clang-tidy:
	clang-tidy $(MAIN).c

.PHONY: clean
clean:
	$(RM) $(MAIN)
