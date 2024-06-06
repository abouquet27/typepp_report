
name=thesis

all: *.tex *.bib 
	rubber --shell-escape --pdf $(name).tex

clean:
	rubber --clean --pdf $(name).tex

