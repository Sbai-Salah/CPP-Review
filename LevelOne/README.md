## **Level 1 test de C++**

🟢 You can ask GPT for guidance, but true learning happens when you roll up your sleeves, dive into the code, and make it your own. No shortcuts to mastery—get your hands dirty, debug, and grow.

### **Instructions :**  
- **Ce test est conçu pour stimuler la réflexion**⛔ Soyez concis mais clair dans vos réponses.  
- Vous pouvez inclure des extraits de code pour justifier vos réponses.  
- Certaines questions nécessitent de déboguer ou d'analyser du code fourni.  
- Temps total : Take your time 😊



---

### **Partie 1 : Révision des concepts avancés en C**  

**Q1.1 (Pointeurs et tableaux)** :  
Écrivez une fonction en C qui prend en paramètre un pointeur vers un tableau d'entiers et sa taille. La fonction doit inverser le tableau directement en mémoire. Donnez un exemple de son utilisation dans une fonction `main()`.  

**Q1.2 (Structures)** :  
Expliquez ce qui se passe en mémoire dans le code suivant :  
```c
struct Point {
    int x;
    int y;
};
struct Point p1 = {10, 20};
struct Point* ptr = &p1;
ptr->x = 30;
```
Pourquoi l’utilisation de pointeurs est-elle efficace dans ce cas ?  

---

### **Partie 2 : Introduction au C++**  

**Q2.1 (Compatibilité)** :  
Identifiez et expliquez deux caractéristiques du langage C qui sont incompatibles en C++. Donnez des exemples de code qui compilent en C mais échouent en C++.  

**Q2.2 (Caractéristiques du C++)** :  
Expliquez en quoi les références diffèrent des pointeurs en C++. Écrivez un extrait de code qui montre comment échanger deux nombres en utilisant des références.  

---

### **Partie 3 : Travail avec les structures et les tableaux**  

**Q3.1 (Tableaux de structures)** :  
Vous concevez un système d'inventaire simple. Définissez une structure `Produit` en C++ contenant l'ID du produit, le nom et le prix. Écrivez un programme qui crée un tableau de `Produit` et affiche les détails de tous les produits dont le prix dépasse 50 €.  

**Q3.2 (Espaces de noms)** :  
Deux développeurs créent des variables conflictuelles ayant le même nom dans différentes parties du programme. Expliquez comment les espaces de noms résolvent ce problème. Écrivez un petit programme qui illustre l’utilisation des espaces de noms pour éviter les conflits.  

---

### **Partie 4 : Programmation orientée objet en C++**  

**Q4.1 (Classes de base)** :  
Concevez une classe `Etudiant` en C++ avec les attributs et méthodes suivants :  
- **Attributs** : Nom, Âge, Note  
- **Méthodes** : Constructeur, accesseurs (getters) et mutateurs (setters) pour chaque attribut  
Écrivez un programme qui crée un objet de la classe, définit ses valeurs et les affiche.  

**Q4.2 (Constructeurs et destructeurs)** :  
Expliquez pourquoi un destructeur est important en C++. Modifiez votre classe `Etudiant` pour inclure un destructeur qui affiche un message lorsque l’objet est détruit.  

**Q4.3 (Débogage)** :  
Le programme suivant contient une erreur. Identifiez-la et corrigez-la :  
```cpp
#include <iostream>
using namespace std;

class Cercle {
    double rayon;
public:
    Cercle(double r) {
        rayon = r;
    }
    void setRayon(double r) {
        rayon = r;
    }
    double getAire() {
        return 3.14 * rayon * rayon;
    }
};

int main() {
    Cercle c1;
    c1.setRayon(5);
    cout << "Aire : " << c1.getAire() << endl;
    return 0;
}
```

---

### **Partie 5 : Défi**  

**Q5.1 (Mélange des concepts)** :  
Écrivez un programme en C++ qui fait ce qui suit :  
- Définit une structure `Livre` avec les attributs : titre, auteur et prix.  
- Crée un tableau d’objets `Livre`.  
- Inclut une classe `Bibliothèque` qui gère ce tableau.  
- La classe doit avoir des méthodes pour ajouter un nouveau livre, trouver le livre le plus cher, et afficher tous les livres.  
- Assurez-vous d’utiliser correctement les constructeurs, destructeurs et références.  

---
```
سبحان الله وبحمده، سبحان الله العظيم
```