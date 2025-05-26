# système-de-surveillance-de-température
### Contexte :
#### Dans un environnement où la régulation thermique est essentielle (salles informatiques, boîtiers électroniques, serres, etc.), il est important de détecter rapidement les hausses de température pour réagir efficacement. Ce projet s’inscrit dans le cadre de l’UE Communication sans fils et spatial et vise à concevoir un système embarqué capable de surveiller la température ambiante et de déclencher une alarme en cas de dépassement de seuil.

### Description :
#### Le projet repose sur une carte Arduino Uno qui collecte en temps réel les données de température et d’humidité grâce à un capteur DHT22. Ces informations sont affichées sur un écran LCD I2C 16x2, ce qui permet une lecture rapide par l’utilisateur.

Lorsque la température dépasse un seuil critique (38 °C), le système déclenche automatiquement une alerte par LED rouge, buzzer, et activation d’un ventilateur pour refroidir l’environnement. En fonctionnement normal, une LED bleue est allumée. L’ensemble est intégré dans un boîtier imprimé en 3D, compact et pratique.

### Objectifs techniques :
#### Lire et afficher température et humidité ambiantes.
Alerter l’utilisateur en cas de surchauffe.
Activer un système de ventilation pour la sécurité thermique.
Proposer une interface visuelle simple et accessible.
### Composants principaux :
#### Arduino Uno
Capteur DHT22
Écran LCD I2C
LEDs (rouge et bleue)
Buzzer
Ventilateur 5V
Transistor de commande (MOSFET ou NPN)
Boîtier imprimé en 3D

### Innovation et valeur ajoutée :
Ce système intelligent est entièrement autonome et peut être adapté à différents contextes : surveillance thermique de matériel informatique, protection d’équipements sensibles, ou projets domotiques. Il constitue un bon exemple d’intégration entre capteurs, actionneurs, interface utilisateur et automatisation.



