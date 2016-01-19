#include <nan.h>

#include "node-vtk.h"

#include "vtkObjectBaseWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAlgorithmWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkAbstractMapperWrap.h"
#include "vtkAbstractMapper3DWrap.h"
#include "vtkMapperWrap.h"
#include "vtkPolyDataMapperWrap.h"
#include "vtkConeSourceWrap.h"
#include "vtkCubeSourceWrap.h"

using namespace v8;
using v8::Local;
using v8::Object;

NAN_METHOD( render );

void init( Local<Object> exports )
{
	Nan::Set(
		exports,
		Nan::New( "render" ).ToLocalChecked( ),
        Nan::GetFunction( Nan::New<FunctionTemplate>( render ) ).ToLocalChecked( )
	);

	VtkObjectBaseWrap::Init( exports );
	VtkObjectWrap::Init( exports );
	VtkAlgorithmWrap::Init( exports );
	VtkAlgorithmOutputWrap::Init( exports );
	VtkPolyDataAlgorithmWrap::Init( exports );
	VtkMapperWrap::Init( exports );
	VtkAbstractMapperWrap::Init( exports );
	VtkAbstractMapper3DWrap::Init( exports );
	VtkPolyDataMapperWrap::Init( exports );
	VtkConeSourceWrap::Init( exports );
	VtkCubeSourceWrap::Init( exports );
}


NODE_MODULE( addon, init )


