/* this file has been autogenerated by vtkNodeJsWrapInit */
/* editing this might proof futile */

#include <nan.h>

#include "vtkExporterWrap.h"
#include "vtkGL2PSExporterWrap.h"
#include "vtkIVExporterWrap.h"
#include "vtkOBJExporterWrap.h"
#include "vtkOOGLExporterWrap.h"
#include "vtkPDFExporterWrap.h"
#include "vtkPOVExporterWrap.h"
#include "vtkRIBExporterWrap.h"
#include "vtkRIBLightWrap.h"
#include "vtkRIBPropertyWrap.h"
#include "vtkSVGExporterWrap.h"
#include "vtkVRMLExporterWrap.h"
#include "vtkX3DExporterWrap.h"

using namespace v8;

extern void vtkIOExportNodeJsInit( v8::Local<v8::Object> exports )
{
	VtkExporterWrap::Init( exports );
	VtkGL2PSExporterWrap::Init( exports );
	VtkIVExporterWrap::Init( exports );
	VtkOBJExporterWrap::Init( exports );
	VtkOOGLExporterWrap::Init( exports );
	VtkPDFExporterWrap::Init( exports );
	VtkPOVExporterWrap::Init( exports );
	VtkRIBExporterWrap::Init( exports );
	VtkRIBLightWrap::Init( exports );
	VtkRIBPropertyWrap::Init( exports );
	VtkSVGExporterWrap::Init( exports );
	VtkVRMLExporterWrap::Init( exports );
	VtkX3DExporterWrap::Init( exports );
}

