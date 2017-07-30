.PHONY: all clean
all: build_all

# Соберет все проекты внутри по отдельности.
build_all:
	for i in $(shell find . -type d -regex "\.\/lecture_[0-9]*" | sort) ; do \
		cd $$i; \
		$(MAKE); \
		cd ..; \
	done

clean:
	for i in $(shell find . -type d -regex "\.\/lecture_[0-9]*" | sort) ; do \
		cd $$i; \
		$(MAKE) clean; \
		cd ..; \
	done

# TODO: Сделать цель togther, собирающую все в один pdf файл
