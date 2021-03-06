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

#include "RunHeader.hh"
#include "G4Types.hh"

RunHeader* RunHeader::instance = 0;



RunHeader::RunHeader()
{
  Solids = new std::vector<G4String>;
  SolidsXHalfLength = new std::vector<G4float>;
  SolidsYHalfLength = new std::vector<G4float>;
  SolidsZHalfLength = new std::vector<G4float>;
  Volumes = new std::vector<G4String>;
  
  particleList = new std::vector<G4String>;
  processList = new std::vector<G4String>;
  
  instance = this;
}



void RunHeader::Print() {
  G4cout << "================================================================" << G4endl;
  G4cout << "========RunHeader===============================================" << G4endl;
  G4cout << "================================================================" << G4endl;
  G4cout << "RunNumber:              " << RunNumber << G4endl;
  G4cout << "GDML File:              " << GDMLFile << G4endl;
  G4cout << "Particle Source:        " << ParticleSource << G4endl;
  G4cout << "Physics List:           " << PhysicsList << G4endl;
  G4cout << "enable optics:          " << enableoptics << G4endl;
  G4cout << "enable scint.:          " << enablescint << G4endl;
  G4cout << "Particle name:          " << ParticleName << G4endl;
  G4cout << "Particle Energy[GeV]:   " << ParticleEnergy << G4endl;
  G4cout << "Particle Time:          " << ParticleTime << G4endl;
  G4cout << "Particle Position:      " << ParticlePosition << G4endl;
  G4cout << "Particle Momentum:      " << ParticleMomentum << G4endl;
  G4cout << "================================================================" << G4endl;
}
