#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkCallbackWrap.h"
#include <vtkCommand.h>
#include <vtkCallbackCommand.h>

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCallbackWrap::ptpl;


void vtkCallback::Execute(vtkObject *, unsigned long, void*)
{
   const unsigned argc = 1;
   v8::Local<v8::Value> argv[argc] = { Nan::New("hello world").ToLocalChecked() };

   v8::Local<v8::Function> cb = Nan::New(callback);
   Nan::MakeCallback(Nan::GetCurrentContext()->Global(), cb, argc, argv);
}
 

VtkCallbackWrap::VtkCallbackWrap()
{ }


VtkCallbackWrap::VtkCallbackWrap(vtkSmartPointer<vtkCallback> _native)
{
	native = _native;
}

VtkCallbackWrap::~VtkCallbackWrap()
{ }


void VtkCallbackWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCallback").ToLocalChecked(), ConstructorGetter);
 	Nan::SetAccessor(exports, Nan::New("Callback").ToLocalChecked(), ConstructorGetter);
}


void VtkCallbackWrap::ConstructorGetter(
    v8::Local<v8::String> property,
	    const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCallbackWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCommandWrap::InitPtpl( );
    tpl->Inherit(Nan::New<FunctionTemplate>(VtkCommandWrap::ptpl));
    tpl->SetClassName(Nan::New("VtkCallbackWrap").ToLocalChecked());
    tpl->InstanceTemplate()->SetInternalFieldCount(1);

	ptpl.Reset( tpl );
}


void VtkCallbackWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
    if(!info.IsConstructCall())
    {
        Nan::ThrowError("Constructor not called in a construct call.");
        return;
    }
            
	//Nan::ThrowError("MuhKuh");

    if(info.Length() != 1)
    {
		Nan::ThrowError("Parameter Error");
        return;
    }

	if(!info[0]->IsFunction())
	{
		Nan::ThrowError("Parameter Error");
        return;
	}

	vtkSmartPointer<vtkCallback> native = vtkSmartPointer<vtkCallback>::New();
	native->callback.Reset(info[0].As<v8::Function>());

    VtkCallbackWrap* obj = new VtkCallbackWrap(native);
    obj->Wrap(info.This());

    info.GetReturnValue().Set(info.This());
}


