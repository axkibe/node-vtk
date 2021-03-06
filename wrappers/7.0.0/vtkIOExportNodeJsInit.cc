/* this file has been autogenerated by vtkNodeJsWrapInit */
/* editing this might proof futile */

#include <nan.h>

#include "vtkExporterWrap.h"
#include "vtkIVExporterWrap.h"
#include "vtkOBJExporterWrap.h"
#include "vtkOOGLExporterWrap.h"
#include "vtkPOVExporterWrap.h"
#include "vtkRIBExporterWrap.h"
#include "vtkRIBLightWrap.h"
#include "vtkRIBPropertyWrap.h"
#include "vtkVRMLExporterWrap.h"
#include "vtkX3DExporterWrap.h"

using namespace v8;

extern void vtkIOExportNodeJsInit( v8::Local<v8::Object> exports )
{
	VtkExporterWrap::Init( exports );
	VtkIVExporterWrap::Init( exports );
	VtkOBJExporterWrap::Init( exports );
	VtkOOGLExporterWrap::Init( exports );
	VtkPOVExporterWrap::Init( exports );
	VtkRIBExporterWrap::Init( exports );
	VtkRIBLightWrap::Init( exports );
	VtkRIBPropertyWrap::Init( exports );
	VtkVRMLExporterWrap::Init( exports );
	VtkX3DExporterWrap::Init( exports );
}

