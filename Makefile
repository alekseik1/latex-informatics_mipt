.PHONY: all clean

DIR=$(shell pwd)/all_in_one

all: all

# Соберет все проекты внутри по отдельности.
all:
	for i in $(shell find . -type d -regex "\.\/lecture_[0-9]*" | sort) ; do \
		cd $$i; \
		$(MAKE); \
		cd ..; \
	done

# ACHTUNG! Очень костыльная цель. Сделал её потому, что иногда pdflatex не с первого раза делает оглавление\нумерацию\т.п.
twice_all:
	for i in $(shell find . -type d -regex "\.\/lecture_[0-9]*" | sort) ; do \
		cd $$i; \
		$(MAKE) twice; \
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

# TODO: Есть баг - 10 лекция собирается впереди остальных, т.к. имеет приоритет при сортировке функцией sort.
# TODO: Этот баг надо исправить и брать лекции в естественном порядке, т.е. 1..9,10,....
together:
	echo $(DIR)
	$(RM) $(DIR)/lecture.tex
	for i in $(shell find $(pwd) -type d -regex "\.\/lecture_[0-9]*" | sort) ; do \
		cd $$i; \
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

together_twice:
	echo $(DIR)
	$(RM) $(DIR)/lecture.tex
	for i in $(shell find $(pwd) -type d -regex "\.\/lecture_[0-9]*" | sort) ; do \
		cd $$i; \
		echo "Объединяю файлы из папки $$i..."; \
		cat lecture.tex >> $(DIR)/lecture.tex && \
		echo "\n" >> $(DIR)/lecture.tex && \
		echo "Успех!"; \
		cd ..; \
	done
	echo "ФАЙЛЫ ОБЪЕДИНЕНЫ, собираем в один pdf..."
	cd $(DIR) && \
	$(MAKE) twice && \
	echo "Сборка успешно завершена!"

