# Problèmes C-QUENCER_64 :
## Au niveaux des I2C : On a un inversé SCL et Sdata
-> Solution = On coupe les pistes et on rajoute des fils pour échanger les pistes.
## Aucun signal Horloge ne sort de la broche PG10 de la puce audio, au lieu de cela un signal Horloge sort de la broche PA8 lorsqu’on programme PG10 comme sortie du signal d’horloge.
-> Solution = on coupe la piste liée à PA8 et on récupère le signal Horloge via un fil.
## Impossible d’implémenter un DFU car il manque une patte sur la puce audio.
## On a refait un socket sur la puce car 2 pattes avaient été cassées.


# Améliorations pour C-QUENCER_64v2 :
## L’ajout d’un signal de synchronisation IN-OUT (clock externe), ce signal définit le BPM de notre retour.
## Ajout d'un bouton de sélection des pistes, car pour le moment on doit appuyer sur le tap-tempo pour sélectionner le signal à modifier, ce qui met sur pause le retour.
## Utiliser des touches de clavier mécanique «cherry-MX» comme bouton RGB, en mettant des Leds RGB dedans. Afin de réduire le coût des boutons, et d’optimiser la course des boutons (meilleure ergonomie).
## Bouton tap-tempo : changer le modèle du bouton pour un bouton avec une pression d’enclanchement moins importante.
## Inclure un haut-parleur sans amplificateur dans la prochaine version du PCB, il lui sera fourni le même signal que la sortie mini-jack 3.5, l’intérêt est d’avoir un retour imédiat de la sortie (savoir si on a un son ou non).
## Inclure dans la prochaine version du PCB, une led qui clignotte à même fréquence que le BPM.
## Inclure dans la prochaine version du PCB, une sortie MIDI, pour répondre à la forte demande consomateur.

