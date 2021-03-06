/* ------------------------------------------------------------------------
            |\___/|       
            )     (    
           =\     /=
             )===(
            /     \         CaTS: Calorimeter and Tracker Simulation
            |     |         Author: Hans Wenzel (Fermilab)
           /       \
           \       /
            \__  _/
              ( (
               ) )
              (_(
-------------------------------------------------------------------------*/
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#ifndef StoppingCalorimeterSD_h
#define StoppingCalorimeterSD_h 1

#include "G4VSensitiveDetector.hh"
#include "CalorimeterHit.hh"

class G4Step;
class G4HCofThisEvent;

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class StoppingCalorimeterSD : public G4VSensitiveDetector
{
public:
     StoppingCalorimeterSD(G4String);
     ~StoppingCalorimeterSD();

      void Initialize(G4HCofThisEvent*);
      G4bool ProcessHits(G4Step*, G4TouchableHistory*);
//      void EndOfEvent(G4HCofThisEvent*);

  private:
      CalorimeterHitsCollection* calorimeterCollection;

};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif

