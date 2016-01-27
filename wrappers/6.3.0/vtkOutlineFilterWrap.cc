/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkOutlineFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOutlineFilterWrap::ptpl;

VtkOutlineFilterWrap::VtkOutlineFilterWrap()
{ }

VtkOutlineFilterWrap::VtkOutlineFilterWrap(vtkSmartPointer<vtkOutlineFilter> _native)
{ native = _native; }

VtkOutlineFilterWrap::~VtkOutlineFilterWrap()
{ }

void VtkOutlineFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOutlineFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OutlineFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkOutlineFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOutlineFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOutlineFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GenerateFacesOff", GenerateFacesOff);
	Nan::SetPrototypeMethod(tpl, "generateFacesOff", GenerateFacesOff);

	Nan::SetPrototypeMethod(tpl, "GenerateFacesOn", GenerateFacesOn);
	Nan::SetPrototypeMethod(tpl, "generateFacesOn", GenerateFacesOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGenerateFaces", GetGenerateFaces);
	Nan::SetPrototypeMethod(tpl, "getGenerateFaces", GetGenerateFaces);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGenerateFaces", SetGenerateFaces);
	Nan::SetPrototypeMethod(tpl, "setGenerateFaces", SetGenerateFaces);

	ptpl.Reset( tpl );
}

void VtkOutlineFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOutlineFilter> native = vtkSmartPointer<vtkOutlineFilter>::New();
		VtkOutlineFilterWrap* obj = new VtkOutlineFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOutlineFilterWrap::GenerateFacesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineFilterWrap>(info.Holder());
	vtkOutlineFilter *native = (vtkOutlineFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateFacesOff();
}

void VtkOutlineFilterWrap::GenerateFacesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineFilterWrap>(info.Holder());
	vtkOutlineFilter *native = (vtkOutlineFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateFacesOn();
}

void VtkOutlineFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineFilterWrap>(info.Holder());
	vtkOutlineFilter *native = (vtkOutlineFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOutlineFilterWrap::GetGenerateFaces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineFilterWrap>(info.Holder());
	vtkOutlineFilter *native = (vtkOutlineFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateFaces();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOutlineFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineFilterWrap>(info.Holder());
	vtkOutlineFilter *native = (vtkOutlineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOutlineFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineFilterWrap>(info.Holder());
	vtkOutlineFilter *native = (vtkOutlineFilter *)wrapper->native.GetPointer();
	vtkOutlineFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkOutlineFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOutlineFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOutlineFilterWrap *w = new VtkOutlineFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOutlineFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineFilterWrap>(info.Holder());
	vtkOutlineFilter *native = (vtkOutlineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOutlineFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkOutlineFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOutlineFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOutlineFilterWrap *w = new VtkOutlineFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOutlineFilterWrap::SetGenerateFaces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineFilterWrap>(info.Holder());
	vtkOutlineFilter *native = (vtkOutlineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateFaces(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

