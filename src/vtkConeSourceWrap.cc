#include <nan.h>

#include <vtkConeSource.h>
#include <vtkSmartPointer.h>

#include "node-vtk.h"

using namespace v8;


Nan::Persistent<v8::Function> VtkConeSourceWrap::constructor;


VtkConeSourceWrap::VtkConeSourceWrap( vtkSmartPointer<vtkConeSource> coneSource ) :
	coneSource( coneSource )
{
}

VtkConeSourceWrap::~VtkConeSourceWrap()
{
	// TODO delete cone
}

void VtkConeSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	// Prepare constructor template
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>( New );
	tpl->SetClassName( Nan::New( "VtkConeSourceWrap" ).ToLocalChecked( ) );
	tpl->InstanceTemplate()->SetInternalFieldCount( 1 );

	// Prototype
	Nan::SetPrototypeMethod( tpl, "SetHeight", SetHeight );
	Nan::SetPrototypeMethod( tpl, "setHeight", SetHeight );

	Nan::SetPrototypeMethod( tpl, "SetRadius", SetRadius );
	Nan::SetPrototypeMethod( tpl, "setRadius", SetRadius );

	Nan::SetPrototypeMethod( tpl, "SetResolution", SetResolution );
	Nan::SetPrototypeMethod( tpl, "setResolution", SetResolution );
	
	Nan::SetPrototypeMethod( tpl, "Update", Update );
	Nan::SetPrototypeMethod( tpl, "update", Update );

	constructor.Reset( tpl->GetFunction() );

	exports->Set( Nan::New( "vtkConeSource" ).ToLocalChecked( ), tpl->GetFunction( ) );
	exports->Set( Nan::New( "coneSource" ).ToLocalChecked( ), tpl->GetFunction( ) );
}


void VtkConeSourceWrap::New( const Nan::FunctionCallbackInfo<v8::Value>& info )
{
	if( !info.IsConstructCall( ) )
	{
		Nan::ThrowError("Constructor called outside new");
		return;
	}

	vtkSmartPointer<vtkConeSource> coneSource = vtkSmartPointer<vtkConeSource>::New( );
    VtkConeSourceWrap* obj = new VtkConeSourceWrap( coneSource );

    obj->Wrap( info.This() );
    info.GetReturnValue( ).Set( info.This( ) );
}


void VtkConeSourceWrap::SetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *obj = ObjectWrap::Unwrap<VtkConeSourceWrap>( info.Holder( ) );

	if( !info[ 0 ]->IsNumber( ) )
	{
		throw "TODO";
	}

	obj->coneSource->SetHeight( info[ 0 ]->NumberValue( ) );
}


void VtkConeSourceWrap::SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *obj = ObjectWrap::Unwrap<VtkConeSourceWrap>( info.Holder( ) );

	if( !info[ 0 ]->IsNumber( ) )
	{
		throw "TODO";
	}

	obj->coneSource->SetRadius( info[ 0 ]->NumberValue( ) );
}


void VtkConeSourceWrap::SetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *obj = ObjectWrap::Unwrap<VtkConeSourceWrap>( info.Holder( ) );

	if( !info[ 0 ]->IsNumber( ) )
	{
		throw "TODO";
	}

	obj->coneSource->SetResolution( info[ 0 ]->NumberValue( ) );
}


void VtkConeSourceWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConeSourceWrap *obj = ObjectWrap::Unwrap<VtkConeSourceWrap>( info.Holder( ) );

	obj->coneSource->Update( );
}


