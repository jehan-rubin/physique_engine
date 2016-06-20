
Physique engine NIT 

ARCHITECTURE OF THE PHYSIC ENGINE :

This architecture is composed by three modules


nitSimulation module: This module contains the different classes that allow to create the virtual environnement and its different entities

Class World: contains the different attributes of the virtual environnement

Abstract class Entity: contains the different attributes of the entity

Abstract class Shape: contains the body attributes of the entity

Class Polygone: contains the attributes to create a polygone

Class Circle: contains the attributes to create a circle


nitPhysics module: This module is composed by the different classes which manage every physical principle of our virtual environnement (detection of collions, management of collions, gravity and different forces...)

Class Collision: this class contains the functions that allow to manage the different collions between the entities

Abstract class Force: this class contains the different force attributes and a function to apply this force

Class Gravity: this class inherit of Force and manage the gravity in the virtual environnement


nitConstraints module: this last module is composed by the different objetcs which will be used for the physic engine calculation

Class Vector_2d: manage the vector of the entity

Class Position_2d: manage the position of the entity

Class Area_2d: manage the distance between different entities

Class Dimension_2d:  Contains the dimensions of the entity

Class Request: TODO Will contains some requests to access at different informations about the virtual environnement
