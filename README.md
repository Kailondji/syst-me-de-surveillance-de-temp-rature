# système-de-surveillance-de-température
## Contexte :
### Dans des environnements sensibles tels que les salles informatiques, les boîtiers électroniques, les serres agricoles, ou encore les laboratoires, une surveillance thermique fiable est essentielle. Une hausse de température non détectée à temps peut endommager des équipements, affecter la sécurité ou compromettre des cultures. Ce projet a été développé dans le cadre de l’Unité d’Enseignement “Communication sans fil et spatial”, et a pour but de concevoir un système embarqué intelligent capable de : Mesurer la température et l’humidité ambiantes, Afficher ces informations en temps réel, Déclencher automatiquement une alerte en cas de dépassement de seuil critique, Activer un ventilateur de refroidissement pour réagir à la surchauffe. Le système est conçu pour être simple, autonome et adaptable, avec une interface claire et un boîtier imprimé en 3D, facilitant son intégration dans des environnements réels.

### Description :
#### Le système repose sur une carte Arduino Uno, qui constitue le cœur du dispositif. Elle est reliée à plusieurs composants :

### 📡 Capteur DHT22 : Capte à la fois la température et l’humidité ambiantes avec précision.

### 🖥️ Écran LCD 16x2 I2C : Affiche en temps réel les données captées, permettant une lecture directe par l’utilisateur.

### 🔴 LED rouge : Signalise une situation critique (température élevée).

### 🔵 LED bleue : Indique un état de fonctionnement normal (température stable).

### 🔊 Buzzer actif : Génère une alerte sonore en cas de surchauffe.

### 🌀 Ventilateur 5V : Se déclenche automatiquement pour refroidir l’environnement.

### ⚡ Transistor de puissance : Sert à commander le ventilateur sans surcharger la carte Arduino.

### 🧰 Boîtier imprimé en 3D : Conçu sur mesure pour intégrer tous les composants de façon sécurisée, propre et esthétique.

### ⚠️ Seuil critique fixé à 38 °C : au-delà de cette température, le système réagit automatiquement en activant l’alerte.

##🎯 Objectifs techniques
### Le système a été conçu pour répondre à plusieurs objectifs fonctionnels :

### ✅ Lire et afficher en temps réel la température et l’humidité ambiantes.

### 🚨 Détecter automatiquement une situation de surchauffe (T > 38 °C).

### 🔔 Déclencher une alarme visuelle et sonore : LED rouge + buzzer.

### 🌀 Activer un ventilateur en cas de besoin pour baisser la température.

### 👁️ Offrir une interface simple et visuelle à l’utilisateur grâce à l’écran LCD.

### ⚙️ Fonctionner de manière autonome et continue, sans intervention manuelle.

## 🔩 Composants utilisés
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


## 🔌 Schéma et description des branchements
#### Voici la description détaillée des connexions entre les composants du système et la carte Arduino Uno :

### 1. 🔶 Capteur DHT22 :
#### - VCC (1ère broche) → 5V de l’Arduino
#### - DATA (2e broche) → Broche D2 de l’Arduino
#### - GND (4e broche) → GND de l’Arduino
#### - Une résistance de 10 kΩ entre VCC et DATA (pull-up)

### 2. 📺 Écran LCD I2C 16x2 :
#### - VCC → 5V
#### - GND → GND
#### - SDA → A4
#### - SCL → A5

### 3. 🔴 LED Rouge :
#### - Anode (patte longue) → Broche D8 via résistance 220 Ω
#### - Cathode → GND

### 4. 🔵 LED Bleue :
#### - Anode → Broche D9 via résistance 220 Ω
#### - Cathode → GND

### 5. 🔊 Buzzer actif 5V :
#### - + → Broche D10
#### - - → GND

### 6. 🌬️ Ventilateur 5V (commandé par transistor) :
#### - + du ventilateur → 5V
#### - - du ventilateur → Collecteur du transistor NPN (ex : 2N2222)
#### - Émetteur du transistor → GND
#### - Base du transistor → Broche D11 via résistance de 220 Ω
#### - Une diode (1N4007) est connectée entre les bornes + et - du ventilateur (cathode vers +) pour protection contre le retour de courant

### Ces branchements assurent un fonctionnement fiable et protégé de tous les composants. L’alimentation 5V peut être fournie par USB ou adaptateur secteur selon les besoins.



## 💡 Innovation et valeur ajoutée
### Ce système représente bien plus qu’un simple montage Arduino :

### 🤖 Automatisation intelligente : Le système prend des décisions sans intervention humaine.

### 🔌 Faible consommation énergétique : Il reste actif uniquement en cas de besoin.

### 🛠️ Adaptabilité : Il peut être réutilisé ou modifié facilement pour d’autres applications (frigos, domotique, météo...).

### 🎨 Intégration propre : Grâce à l’impression 3D, le boîtier est fonctionnel et esthétique.

### 📈 Pédagogique : Le projet met en œuvre des compétences en électronique, en programmation embarquée, en modélisation 3D, et en présentation.



