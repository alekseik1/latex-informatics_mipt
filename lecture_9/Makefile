LECTURE_NUMBER=$(shell pwd | grep -oP "lecture_([0-9]*)" | grep -oP "_.*" | sed "s/_//")

.PHONY: all clean twice clean_all
MAIN_FILE=main.tex
REQ=../tech_stuff/preambula.tex ../tech_stuff/environments.tex ../tech_stuff/title_page.tex $(MAIN_FILE) lecture.tex
OUT_FILE=lecture_$(LECTURE_NUMBER).pdf
DIR=$(shell pwd)
all: main

main:	$(OUT_FILE)
	echo "-------------\nУСПЕШНО ДЛЯ $(OUT_FILE)!\n-------------\n"

$(OUT_FILE):	$(REQ)
	pdflatex $(MAIN_FILE) 2>&1 1>/dev/null && \
	pdflatex $(MAIN_FILE) 2>&1 1>/dev/null && \
	mv -f $(MAIN_FILE:.tex=.pdf) $(OUT_FILE) \

clean:
	echo "Cleaning folder ../$(shell pwd | grep -oP "lecture_[0-9]*")..."
	$(RM) -rf *.log *.aux *.gz *.toc *.out && echo "Done!"

clean_all:
	$(MAKE) clean && \
	rm -rf *.pdf
