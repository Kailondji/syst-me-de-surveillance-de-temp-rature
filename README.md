# système-de-surveillance-de-température
### Contexte :
#### Dans des environnements sensibles tels que les salles informatiques, les boîtiers électroniques, les serres agricoles, ou encore les laboratoires, une surveillance thermique fiable est essentielle. Une hausse de température non détectée à temps peut endommager des équipements, affecter la sécurité ou compromettre des cultures.

Ce projet a été développé dans le cadre de l’Unité d’Enseignement “Communication sans fil et spatial”, et a pour but de concevoir un système embarqué intelligent capable de :

Mesurer la température et l’humidité ambiantes,

Afficher ces informations en temps réel,

Déclencher automatiquement une alerte en cas de dépassement de seuil critique,

Activer un ventilateur de refroidissement pour réagir à la surchauffe.

Le système est conçu pour être simple, autonome et adaptable, avec une interface claire et un boîtier imprimé en 3D, facilitant son intégration dans des environnements réels.


### Description :
#### Le projet repose sur une carte Arduino Uno qui collecte en temps réel les données de température et d’humidité grâce à un capteur DHT22. Ces informations sont affichées sur un écran LCD I2C 16x2, ce qui permet une lecture rapide par l’utilisateur.

Lorsque la température dépasse un seuil critique (38 °C), le système déclenche automatiquement une alerte par LED rouge, buzzer, et activation d’un ventilateur pour refroidir l’environnement. En fonctionnement normal, une LED bleue est allumée. L’ensemble est intégré dans un boîtier imprimé en 3D, compact et pratique.

### Objectifs techniques :
#### Lire et afficher température et humidité ambiantes.
Alerter l’utilisateur en cas de surchauffe.
Activer un système de ventilation pour la sécurité thermique.
Proposer une interface visuelle simple et accessible.
### Composants principaux :
#### Arduino Uno;
Capteur DHT22;
Écran LCD I2C;
LEDs (rouge et bleue);
Buzzer
Ventilateur 5V;
Transistor de commande;
Boîtier imprimé en 3D;

### Innovation et valeur ajoutée :
Ce système intelligent est entièrement autonome et peut être adapté à différents contextes : surveillance thermique de matériel informatique, protection d’équipements sensibles, ou projets domotiques. Il constitue un bon exemple d’intégration entre capteurs, actionneurs, interface utilisateur et automatisation.



