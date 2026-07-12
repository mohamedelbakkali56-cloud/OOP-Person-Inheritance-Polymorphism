/******************************************************************
 *  TP POO en C++ : Classe Personne, Héritage et Polymorphisme
 ******************************************************************/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

/* =====================================================
   PARTIE 1 : Classe de base Personne
   ===================================================== */
class Personne {
public:
    string nom;
    int age;

    // Constructeur
    Personne(string n, int a) : nom(n), age(a) {
        cout << "Construction de la personne " << nom << endl;
    }

    // Destructeur virtuel (indispensable pour le polymorphisme)
    virtual ~Personne() {
        cout << "Destruction de la personne " << nom << endl;
    }

    // Méthode virtuelle
    virtual void sePresenter() {
        cout << "Je m'appelle " << nom
             << " et j'ai " << age << " ans." << endl;
    }
};

/* =====================================================
   PARTIE 2 : Héritage - Classe Etudiant
   ===================================================== */
class Etudiant : public Personne {
public:
    string niveau;

    Etudiant(string n, int a, string niv)
        : Personne(n, a), niveau(niv) {
        cout << "Construction de l'etudiant " << nom << endl;
    }

    ~Etudiant() override {
        cout << "Destruction de l'etudiant " << nom << endl;
    }

    void sePresenter() override {
        cout << "Je m'appelle " << nom
             << ", j'ai " << age << " ans"
             << " et je suis en " << niveau << "." << endl;
    }
};

/* =====================================================
   PARTIE 3 : Polymorphisme - Classe Professeur
   ===================================================== */
class Professeur : public Personne {
public:
    string matiere;

    Professeur(string n, int a, string m)
        : Personne(n, a), matiere(m) {
        cout << "Construction du professeur " << nom << endl;
    }

    ~Professeur() override {
        cout << "Destruction du professeur " << nom << endl;
    }

    void sePresenter() override {
        cout << "Je m'appelle " << nom
             << ", j'ai " << age << " ans"
             << " et j'enseigne " << matiere << "." << endl;
    }
};

/* =====================================================
   PARTIE 4 : Programme principal
   ===================================================== */
int main() {
    cout << "===== Creation des objets =====" << endl;

    vector<Personne*> personnes;
    personnes.push_back(new Personne("Ali", 40));
    personnes.push_back(new Etudiant("Sara", 21, "Master"));
    personnes.push_back(new Professeur("Karim", 50, "Informatique"));

    cout << "\n===== Appel de sePresenter() (polymorphisme) =====" << endl;
    for (Personne* p : personnes) {
        p->sePresenter();
    }

    cout << "\n===== Destruction des objets =====" << endl;
    for (Personne* p : personnes) {
        delete p;
    }
    personnes.clear();

    cout << "\n===== Fin du programme =====" << endl;
    return 0;
}