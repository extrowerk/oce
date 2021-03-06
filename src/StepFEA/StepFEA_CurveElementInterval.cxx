// Created on: 2002-12-12
// Created by: data exchange team
// Copyright (c) 2002-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.2

#include <StepFEA_CurveElementInterval.ixx>

//=======================================================================
//function : StepFEA_CurveElementInterval
//purpose  : 
//=======================================================================

StepFEA_CurveElementInterval::StepFEA_CurveElementInterval ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepFEA_CurveElementInterval::Init (const Handle(StepFEA_CurveElementLocation) &aFinishPosition,
                                         const Handle(StepBasic_EulerAngles) &aEuAngles)
{

  theFinishPosition = aFinishPosition;

  theEuAngles = aEuAngles;
}

//=======================================================================
//function : FinishPosition
//purpose  : 
//=======================================================================

Handle(StepFEA_CurveElementLocation) StepFEA_CurveElementInterval::FinishPosition () const
{
  return theFinishPosition;
}

//=======================================================================
//function : SetFinishPosition
//purpose  : 
//=======================================================================

void StepFEA_CurveElementInterval::SetFinishPosition (const Handle(StepFEA_CurveElementLocation) &aFinishPosition)
{
  theFinishPosition = aFinishPosition;
}

//=======================================================================
//function : EuAngles
//purpose  : 
//=======================================================================

Handle(StepBasic_EulerAngles) StepFEA_CurveElementInterval::EuAngles () const
{
  return theEuAngles;
}

//=======================================================================
//function : SetEuAngles
//purpose  : 
//=======================================================================

void StepFEA_CurveElementInterval::SetEuAngles (const Handle(StepBasic_EulerAngles) &aEuAngles)
{
  theEuAngles = aEuAngles;
}
