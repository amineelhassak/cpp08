# cpp08
Containers templates
## Comparaison des conteneurs en C++

| Conteneur            | Description                                                                                  | Accès aléatoire | Insertion/Suppression en tête | Insertion/Suppression en queue | Insertion/Suppression au milieu | Complexité d'accès | Complexité d'insertion/suppression |
|----------------------|----------------------------------------------------------------------------------------------|-----------------|-------------------------------|-------------------------------|-------------------------------|--------------------|----------------------------------|
| `std::vector`        | Tableau dynamique contigu en mémoire.                                                        | Oui             | Non                           | Oui                           | Oui                           | O(1)               | O(n) pour insertion/suppression au milieu |
| `std::deque`         | Tableau double-ended avec accès aléatoire, utilisant des blocs pour gérer la mémoire.        | Oui             | Oui                           | Oui                           | Oui                           | O(1)               | O(1) pour insertion/suppression en tête et en queue, O(n) pour le milieu |
| `std::list`          | Liste doublement chaînée, où chaque élément contient des pointeurs vers les éléments voisins. | Non             | Oui                           | Oui                           | Oui                           | O(n)               | O(1) pour insertion/suppression au milieu |
| `std::forward_list`  | Liste simplement chaînée, où chaque élément contient un pointeur vers l'élément suivant.   | Non             | Oui                           | Non                           | Non                           | O(n)               | O(1) pour insertion/suppression en tête |

### Explications :

- **Accès aléatoire** : Permet d'accéder directement à un élément par son indice (comme un tableau).
- **Insertion/Suppression en tête** : Efficacité d'ajout ou de suppression d'éléments au début du conteneur.
- **Insertion/Suppression en queue** : Efficacité d'ajout ou de suppression d'éléments à la fin du conteneur.
- **Insertion/Suppression au milieu** : Efficacité d'ajout ou de suppression d'éléments au milieu du conteneur.
- **Complexité d'accès** : Temps nécessaire pour accéder à un élément par son indice.
- **Complexité d'insertion/suppression** : Temps nécessaire pour ajouter ou supprimer un élément (en fonction de la position).
