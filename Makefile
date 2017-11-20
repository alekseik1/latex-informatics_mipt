.PHONY: all clean

DIR=$(shell pwd)/all_in_one
LECTURE_NUMBERS := $(shell find $(pwd) -type d -regex "\.\/lecture_[0-9]*" | grep [0-9]* -o | sort -n)

# Соберет все проекты внутри по отдельности.
all:
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
	cd $(DIR) && \
	$(MAKE) clean

clean_all:
	for i in $(shell find . -type d -regex "\.\/lecture_[0-9]*" | sort) ; do \
		cd $$i; \
		$(MAKE) clean_all; \
		cd ..; \
	done
	cd $(DIR) && \
	$(MAKE) clean

together:
	echo $(DIR)
	$(RM) $(DIR)/lecture.tex
	for i in $(LECTURE_NUMBERS) ; do \
		cd lecture_$$i; \
		echo "Объединяю файлы из папки $$i..."; \
		cat lecture.tex >> $(DIR)/lecture.tex && \
		echo "\n" >> $(DIR)/lecture.tex && \
		echo "Успех!"; \
		cd ..; \
	done
	echo "ФАЙЛЫ ОБЪЕДИНЕНЫ, собираем в один pdf..."
	cd $(DIR) && \
	$(MAKE) && \
	echo "Сборка успешно завершена!"
