# -Wall	: pour afficher tous les warnings
# -g 	: pour activer le debugging, utile pour gdb
CFLAGS=-Wall -g

# Grâce à cette section on compile ex02 et ex01 avec seulement 'make'
all: ex02 ../ex01/ex01

# Section clean pour indiquer comment nettoyer le projet
# Le contenu des sections doit être indenté.
clean:
	rm -f ex02

# Pour compiler l'exercice 2: make ex02
# Etapes:
#	1. Y a-t-il un fichier ex02 ou qui commence par ex02 ?
#	2. Oui: ex02.c. Do I know how to build .c files ?
#	3. Oui, mais on prend en compte aussi les C flags déclarés ci-dessus.
#	4. Créons ce fameux ex01: cc -Wall -g ex02.c -o ex02

# make sait automatiquement quels sont les bouts du projet à recompiler.

# Pour nettoyer le projet: make clean