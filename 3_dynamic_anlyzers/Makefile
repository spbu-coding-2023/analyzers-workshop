ADDRESS = 01_overrun 02_stack 03_global 04_uar 05_leak
MEMORY = 06_uninit
UNDEFINED = 07_undefined
THREAD = 08_race

COMMON_FLAGS = -Wall -Wextra -g

ADDRESS_SAN = $(patsubst %, %_san, $(ADDRESS))
UNDEFINED_SAN = $(patsubst %, %_san, $(UNDEFINED))
MEMORY_SAN = $(patsubst %, %_san, $(MEMORY))
THREAD_SAN = $(patsubst %, %_san, $(THREAD))

ALL = $(ADDRESS) $(MEMORY) $(UNDEFINED) $(THREAD)
ALL_SAN = $(patsubst %, %_san, $(ALL))

.PHONY: all
all: $(ALL) $(ALL_SAN)

$(ADDRESS_SAN): %_san: %.c
	$(CC) $(COMMON_FLAGS) -fsanitize=address $< -o $@

$(MEMORY_SAN): %_san: %.c
	clang $(COMMON_FLAGS) -fsanitize=memory $< -o $@

$(UNDEFINED_SAN): %_san: %.c
	$(CC) $(COMMON_FLAGS) -fsanitize=undefined $< -o $@

$(THREAD_SAN): %_san: %.c
	$(CC) $(COMMON_FLAGS) -fsanitize=thread $< -o $@

$(ALL): %: %.c
	$(CC) $(COMMON_FLAGS) $< -o $@

.PHONY: clean
clean:
	$(RM) $(ALL) $(ALL_SAN)

