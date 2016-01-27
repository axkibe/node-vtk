/* this file has been autogenerated by vtkNodeJsWrapInit */
/* editing this might proof futile */

#include <nan.h>

#include "vtkCMLMoleculeReaderWrap.h"
#include "vtkMoleculeAlgorithmWrap.h"
#include "vtkMoleculeMapperWrap.h"
#include "vtkMoleculeToAtomBallFilterWrap.h"
#include "vtkMoleculeToBondStickFilterWrap.h"
#include "vtkMoleculeToPolyDataFilterWrap.h"
#include "vtkPeriodicTableWrap.h"
#include "vtkProgrammableElectronicDataWrap.h"
#include "vtkProteinRibbonFilterWrap.h"
#include "vtkSimpleBondPerceiverWrap.h"

using namespace v8;

extern void vtkDomainsChemistryNodeJsInit( v8::Local<v8::Object> exports )
{
	VtkCMLMoleculeReaderWrap::Init( exports );
	VtkMoleculeAlgorithmWrap::Init( exports );
	VtkMoleculeMapperWrap::Init( exports );
	VtkMoleculeToAtomBallFilterWrap::Init( exports );
	VtkMoleculeToBondStickFilterWrap::Init( exports );
	VtkMoleculeToPolyDataFilterWrap::Init( exports );
	VtkPeriodicTableWrap::Init( exports );
	VtkProgrammableElectronicDataWrap::Init( exports );
	VtkProteinRibbonFilterWrap::Init( exports );
	VtkSimpleBondPerceiverWrap::Init( exports );
}

