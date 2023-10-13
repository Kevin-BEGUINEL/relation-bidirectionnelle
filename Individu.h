/**
 * @file Individu.h
 * @author Philou Lopistéguy
 * @brief   Spécifie une classe Individu en relation réciproque avec sa Voiture
 * @version 0.1
 * @date 2023-10-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

/**
 * @brief Cette classe définie un Individu à partir de son nom et de son prénom
 * 
 * @details Au delà de définir l'Individu par son nom et son prénom, cette classe permet aussi de désigner la Voiture conduite par l'Individu
 * 
 * La Voiture conduite par l'Individu est définie par un pointeur vers une objet Voiture. 
 * 
 * @warning Un Individu conduit au plus une seule Voiture
 */

class Individu
{
    // ATTRIBUTS
  public:
  /**
   * @brief Le nom de l'individu
   * 
   */
    string nom;
    /**
     * @brief Le prénom de l'individu
     */
    string prenom;
    /**
     * @brief Lien avec la voiture de l'individu
     */
    Voiture *maVoiture;

    // MÉTHODES
  public:
  /**
   * @brief Construit un objet Individu à partir de son nom (premier paramètre) et son prénom (2ème paramètre)
   */
    Individu(string = "", string = "");
    /**
     * @brief Détruit un objet Individu
     * 
     */
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief Affiche l'identité de l'individu
     * @return chaîne de caractères sous la forme nom prénom 
     * @bug Un espace en trop entre le nom et le prénom
     * @todo Ajouter un paramètre pour choisir si on affiche "nom prénom" ou "prénom nom"
     */
    string toString(); 
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief Définie la Voiture conduite par l'Individu. 
     * 
     * @param in voiture Un pointeur vers un objet Voiture
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H