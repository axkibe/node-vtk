#include <nan.h>

#include "node-vtk.h"

using namespace v8;
using v8::Local;
using v8::Object;

void init( Local<Object> exports )
{
	Nan::Set(
		exports,
		Nan::New( "render" ).ToLocalChecked( ),
        Nan::GetFunction( Nan::New<FunctionTemplate>( render ) ).ToLocalChecked( )
	);

	VtkConeSourceWrap::Init( exports );
}


NODE_MODULE( addon, init )


