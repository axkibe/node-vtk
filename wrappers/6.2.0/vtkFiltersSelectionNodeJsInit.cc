/* this file has been autogenerated by vtkNodeJsWrapInit */
/* editing this might proof futile */

#include <nan.h>

#include "vtkKdTreeSelectorWrap.h"
#include "vtkLinearSelectorWrap.h"
#include "vtkCellDistanceSelectorWrap.h"

using namespace v8;

extern void vtkFiltersSelectionNodeJsInit( v8::Local<v8::Object> exports )
{
	VtkKdTreeSelectorWrap::Init( exports );
	VtkLinearSelectorWrap::Init( exports );
	VtkCellDistanceSelectorWrap::Init( exports );
}

