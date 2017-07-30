.PHONY: all clean twice
MAIN_FILE=main.tex
REQ=../tech_stuff/preambula.tex ../tech_stuff/environments.tex ../tech_stuff/title_page.tex $(MAIN_FILE)
OUT_FILE=all_lectures.pdf
DIR=$(shell pwd)
all: main

main:	$(REQ)
	pdflatex $(MAIN_FILE) 2>&1 1>/dev/null && \
	mv -f $(MAIN_FILE:.tex=.pdf) $(OUT_FILE) && \
	echo "-------------\nУСПЕШНО СОБРАЛИ ВСЕ ЛЕКЦИИ!\n-------------\n"

# ACHTUNG! Очень костыльная цель. Сделал её потому, что иногда pdflatex не с первого раза делает оглавление\нумерацию\т.п.
twice:	$(REQ)
	echo "Костыльная сборка по 2 раза. Надеюсь, вы знаете, что делаете..."
	pdflatex $(MAIN_FILE) 2>&1 1>/dev/null && \
	pdflatex $(MAIN_FILE) 2>&1 1>/dev/null && \
	mv $(MAIN_FILE:.tex=.pdf) $(OUT_FILE) && \
	echo "-------------\nУСПЕШНО ДЛЯ $(OUT_FILE)!\n-------------\n"


clean:
	echo "Cleaning folder ../all_in_one..."
	$(RM) -rf *.log *.aux *.gz *.toc && echo "Done!"
