# Readme MicroController

## Introduction

Ce dépot git contient l'ensemble du travail effectué sur la partie micro contrôleur du projet **Speech to Text : L'art de restranscrire la parole**. Il est composé de différentes branches, chacune comportant un travail sur une partie spécifique du micro contrôleur STM32F769I. 
Ci dessous, une rapide description du contenu et fonctionnement de chaque branche (Pour plus de détail, voir le Readme de la branche en question) :

## 1 : spec_to_ai

Dans ce projet, on lit un ensemble de fichiers sur la carte SD, contenant chacun des spectrogrammes Mel et on y applique un modèle de réseau de neurones afin de récupérer une prédiction sur le mot prononcé. 

## 2 : Sectrogram

Cette branche contient le projet permettant la capture audio et l'application du Spectrogramme Mel au signal d'entrée. Les valeurs du spectrogramme sont ensuite enregistrées dans un fichier *.txt* et l'enregistrement audio dans un fichier *.wav*, tous deux écrits sur la carte SD. 

## 3 : wav_to_spec

Ce projet permet la lecture de fichiers *.wav* sur la carte SD, et l'enregistrement dans un même dossier, du spectrogramme Mel correspondant. Les spectrogramme sont écrits en binaire dans un fichier portant le même nom que le *.wav* associé. 

## 4 : audio_to_wav

Ce projet permet la capture audio depuis les microphones de la carte STM32 ainsi que l'écriture de l'audio dans un fichier *.wav*. Le *.wav* est sauvegardé sur la carte SD.

## 5 : phase_1_complete_project

Ce projet comprend l'ensemble de la phase 1 complète. Il permet donc de faire un enregistrement audio d'une seconde, l'application du spectrogramme mel sur cet audio, puis la prédiction du réseau de neuronne. Le modèle de réseau de neurone en question (celui de la phase 1 de la partie IA du projet) permet la prédiction sur un dictionnaire de 10 mots. 

## 6 : ia_test

Ce projet permet un simple test du bon fonctionnement de XCube AI avec un exemple de model de prédiction sinus.

## 7 : Audio

Cette branche permet le test du bon fonctionnement des microphones de la carte STM32. Le signal enregistré par les microphones est directement rejoué dans les écouteurs (sortie prise jack).

## 8 : SD_RTC

Ce projet permet la lecture de la carte SD.


## Authors

- BONIFAS Elisa
- Dufour Alex
- MKNARI Béchir
- NEGRELLI WOLTER Felipe
  
- Industrial Supervisor : Yoann
- Academic Supervisor : MAIMOUR Moufida
