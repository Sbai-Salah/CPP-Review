# CPP-Review
Learning By Doing | A general practice exercise to review basic C++ concepts.

## TEST YOUR SKILLS in C++ (Part 1)

1- Déclarez une classe nommée `MyClass` qui contient deux membres privés : un entier (`privateVar`) et une chaîne de caractères (`name`). Assurez-vous d'inclure des constructeurs par défaut, par paramètres et de copie.

2-  a) Expliquez comment la classe `MyClass` met en œuvre l'encapsulation.
    b) Ajoutez une méthode membre à la classe pour obtenir la valeur de `privateVar` (getter). Marquez cette méthode comme `const`.
    
3-  a) Surchargez l'opérateur `+` pour permettre l'addition de deux objets de la classe `MyClass`. La somme doit ajouter les valeurs de `privateVar` et concaténer les noms avec un underscore.
    b) Surchargez l'opérateur `[]` pour permettre un accès aux caractères de la chaîne de caractères `name`.
    
4- Déclarez une fonction amie pour surcharger l'opérateur de sortie (`<<`) afin d'afficher les objets de la classe `MyClass`. Assurez-vous d'afficher le nom et `privateVar` de manière lisible.

5-   a)Instanciez deux objets de la classe `MyClass` avec des valeurs différentes et affichez-les en utilisant l'opérateur de sortie (`<<`).
     b) Utilisez l'opérateur `+` pour créer un troisième objet en additionnant les deux premiers et affichez le résultat.
     
6- Utilisez l'opérateur `[]` pour accéder au deuxième caractère de la chaîne de caractères `name` de l'un des objets. Gérez l'exception `std::out_of_range` si l'index est hors limite.

7- Ajoutez une méthode statique à la classe `MyClass` qui affiche un message indiquant qu'une méthode statique a été appelée. Appelez cette méthode statique à partir de la fonction `main`.

8-  a) Créez un vecteur de la classe `MyClass` et ajoutez-y plusieurs objets.
    b) Utilisez une boucle pour afficher chaque objet du vecteur en utilisant l'opérateur de sortie (`<<`).
    
9- Expliquez pourquoi un destructeur est important dans la classe `MyClass`. Que se passerait-il si le destructeur n'était pas défini?

10- Modifiez la surcharge de l'opérateur `+` pour permettre le chaînage d'opérations (`obj1 + obj2 + obj3`). Affichez le résultat.

11- Surchargez l'opérateur `=` dans la classe `MyClass`. Expliquez comment cette surcharge est utilisée et quel est son rôle dans le contexte de votre classe.
