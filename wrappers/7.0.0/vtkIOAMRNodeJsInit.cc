/* this file has been autogenerated by vtkNodeJsWrapInit */
/* editing this might proof futile */

#include <nan.h>

#include "vtkAMRDataSetCacheWrap.h"
#include "vtkAMRBaseParticlesReaderWrap.h"
#include "vtkAMRBaseReaderWrap.h"
#include "vtkAMREnzoParticlesReaderWrap.h"
#include "vtkAMREnzoReaderWrap.h"
#include "vtkAMRFlashParticlesReaderWrap.h"
#include "vtkAMRFlashReaderWrap.h"

using namespace v8;

extern void vtkIOAMRNodeJsInit( v8::Local<v8::Object> exports )
{
	VtkAMRDataSetCacheWrap::Init( exports );
	VtkAMRBaseParticlesReaderWrap::Init( exports );
	VtkAMRBaseReaderWrap::Init( exports );
	VtkAMREnzoParticlesReaderWrap::Init( exports );
	VtkAMREnzoReaderWrap::Init( exports );
	VtkAMRFlashParticlesReaderWrap::Init( exports );
	VtkAMRFlashReaderWrap::Init( exports );
}

