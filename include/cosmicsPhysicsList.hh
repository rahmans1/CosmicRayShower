
//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
/// \file persistency/gdml/cosmics/include/cosmicsPhysicsList.hh
/// \brief Definition of the cosmicsPhysicsList class
//
//
// $Id: cosmicsPhysicsList.hh 69988 2013-05-21 12:36:24Z gcosmo $
//
//

#ifndef _cosmicsPHYSICSLIST_H_
#define _cosmicsPHYSICSLIST_H_

#include "G4VUserPhysicsList.hh"
#include "G4ParticleTypes.hh"
#include "globals.hh"

/// Physics list for the GDML senstive detector example

class cosmicsPhysicsList : public G4VUserPhysicsList
{
  public:
    cosmicsPhysicsList();
   ~cosmicsPhysicsList();

  protected:

    virtual void ConstructParticle();
    virtual void ConstructProcess();
    virtual void SetCuts();
    virtual void ConstructLeptons();
    //virtual void ConstructEM();	
};

#endif
