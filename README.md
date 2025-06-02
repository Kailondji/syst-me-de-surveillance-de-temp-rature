# système-de-surveillance-de-température
### Contexte :
#### Dans des environnements sensibles tels que les salles informatiques, les boîtiers électroniques, les serres agricoles, ou encore les laboratoires, une surveillance thermique fiable est essentielle. Une hausse de température non détectée à temps peut endommager des équipements, affecter la sécurité ou compromettre des cultures. Ce projet a été développé dans le cadre de l’Unité d’Enseignement “Communication sans fil et spatial”, et a pour but de concevoir un système embarqué intelligent capable de : Mesurer la température et l’humidité ambiantes, Afficher ces informations en temps réel, Déclencher automatiquement une alerte en cas de dépassement de seuil critique, Activer un ventilateur de refroidissement pour réagir à la surchauffe. Le système est conçu pour être simple, autonome et adaptable, avec une interface claire et un boîtier imprimé en 3D, facilitant son intégration dans des environnements réels.

### Description :
#### Le système repose sur une carte Arduino Uno, qui constitue le cœur du dispositif. Elle est reliée à plusieurs composants :

#### 📡 Capteur DHT22 : Capte à la fois la température et l’humidité ambiantes avec précision.

#### 🖥️ Écran LCD 16x2 I2C : Affiche en temps réel les données captées, permettant une lecture directe par l’utilisateur.

#### 🔴 LED rouge : Signalise une situation critique (température élevée).

#### 🔵 LED bleue : Indique un état de fonctionnement normal (température stable).

#### 🔊 Buzzer actif : Génère une alerte sonore en cas de surchauffe.

#### 🌀 Ventilateur 5V : Se déclenche automatiquement pour refroidir l’environnement.

#### ⚡ Transistor de puissance : Sert à commander le ventilateur sans surcharger la carte Arduino.

#### 🧰 Boîtier imprimé en 3D : Conçu sur mesure pour intégrer tous les composants de façon sécurisée, propre et esthétique.

#### ⚠️ Seuil critique fixé à 38 °C : au-delà de cette température, le système réagit automatiquement en activant l’alerte.

###🎯 Objectifs techniques
#### Le système a été conçu pour répondre à plusieurs objectifs fonctionnels :

#### ✅ Lire et afficher en temps réel la température et l’humidité ambiantes.

#### 🚨 Détecter automatiquement une situation de surchauffe (T > 38 °C).

#### 🔔 Déclencher une alarme visuelle et sonore : LED rouge + buzzer.

#### 🌀 Activer un ventilateur en cas de besoin pour baisser la température.

#### 👁️ Offrir une interface simple et visuelle à l’utilisateur grâce à l’écran LCD.

#### ⚙️ Fonctionner de manière autonome et continue, sans intervention manuelle.

### 🔩 Composants utilisés
#### Composant	Rôle dans le système
### Arduino Uno:              	Unité de traitement centrale
### DHT22:                     	Capteur de température et d’humidité
### Écran LCD I2C (16x2) :    	Affichage en temps réel
### LED rouge:                	Indication visuelle de température élevée
### LED bleue:                	Indication de température normale
### Buzzer actif 5V:           	Alerte sonore
### Ventilateur 5V:           	Refroidissement automatique
### Transistor NPN:            	Contrôle du ventilateur
### Diode de roue libre:      	Protection contre retour de courant du moteur
### Résistances diverses:      	Protection des LEDs et du capteur
### Boîtier imprimé en 3D:    	Support physique du montage



### Innovation et valeur ajoutée :
Ce système intelligent est entièrement autonome et peut être adapté à différents contextes : surveillance thermique de matériel informatique, protection d’équipements sensibles, ou projets domotiques. Il constitue un bon exemple d’intégration entre capteurs, actionneurs, interface utilisateur et automatisation.



