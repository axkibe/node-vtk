/* this file has been autogenerated by vtkNodeJsWrapInit */
/* editing this might proof futile */

#include <nan.h>

#include "vtkEnSight6BinaryReaderWrap.h"
#include "vtkEnSight6ReaderWrap.h"
#include "vtkEnSightGoldBinaryReaderWrap.h"
#include "vtkEnSightGoldReaderWrap.h"
#include "vtkEnSightMasterServerReaderWrap.h"
#include "vtkEnSightReaderWrap.h"
#include "vtkGenericEnSightReaderWrap.h"

using namespace v8;

extern void vtkIOEnSightNodeJsInit( v8::Local<v8::Object> exports )
{
	VtkEnSight6BinaryReaderWrap::Init( exports );
	VtkEnSight6ReaderWrap::Init( exports );
	VtkEnSightGoldBinaryReaderWrap::Init( exports );
	VtkEnSightGoldReaderWrap::Init( exports );
	VtkEnSightMasterServerReaderWrap::Init( exports );
	VtkEnSightReaderWrap::Init( exports );
	VtkGenericEnSightReaderWrap::Init( exports );
}

