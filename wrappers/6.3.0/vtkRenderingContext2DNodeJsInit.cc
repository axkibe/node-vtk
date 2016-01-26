/* this file has been autogenerated by vtkNodeJsWrapInit */
/* editing this might proof futile */

#include <nan.h>

#include "vtkAbstractContextBufferIdWrap.h"
#include "vtkAbstractContextItemWrap.h"
#include "vtkBlockItemWrap.h"
#include "vtkBrushWrap.h"
#include "vtkContext2DWrap.h"
#include "vtkContextActorWrap.h"
#include "vtkContextClipWrap.h"
#include "vtkContextItemWrap.h"
#include "vtkContextMapper2DWrap.h"
#include "vtkContextSceneWrap.h"
#include "vtkContextTransformWrap.h"
#include "vtkImageItemWrap.h"
#include "vtkMarkerUtilitiesWrap.h"
#include "vtkPenWrap.h"
#include "vtkTooltipItemWrap.h"

using namespace v8;

extern void vtkRenderingContext2DNodeJsInit( v8::Local<v8::Object> exports )
{
	VtkAbstractContextBufferIdWrap::Init( exports );
	VtkAbstractContextItemWrap::Init( exports );
	VtkBlockItemWrap::Init( exports );
	VtkBrushWrap::Init( exports );
	VtkContext2DWrap::Init( exports );
	VtkContextActorWrap::Init( exports );
	VtkContextClipWrap::Init( exports );
	VtkContextItemWrap::Init( exports );
	VtkContextMapper2DWrap::Init( exports );
	VtkContextSceneWrap::Init( exports );
	VtkContextTransformWrap::Init( exports );
	VtkImageItemWrap::Init( exports );
	VtkMarkerUtilitiesWrap::Init( exports );
	VtkPenWrap::Init( exports );
	VtkTooltipItemWrap::Init( exports );
}

