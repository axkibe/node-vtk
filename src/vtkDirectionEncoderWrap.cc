/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkDirectionEncoderWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDirectionEncoderWrap::ptpl;

VtkDirectionEncoderWrap::VtkDirectionEncoderWrap()
{ }

VtkDirectionEncoderWrap::VtkDirectionEncoderWrap(vtkSmartPointer<vtkDirectionEncoder> _native)
{ native = _native; }

VtkDirectionEncoderWrap::~VtkDirectionEncoderWrap()
{ }

void VtkDirectionEncoderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDirectionEncoder").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DirectionEncoder").ToLocalChecked(), ConstructorGetter);
}

void VtkDirectionEncoderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDirectionEncoderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDirectionEncoderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfEncodedDirections", GetNumberOfEncodedDirections);
	Nan::SetPrototypeMethod(tpl, "getNumberOfEncodedDirections", GetNumberOfEncodedDirections);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkDirectionEncoderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDirectionEncoderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectionEncoderWrap *wrapper = ObjectWrap::Unwrap<VtkDirectionEncoderWrap>(info.Holder());
	vtkDirectionEncoder *native = (vtkDirectionEncoder *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDirectionEncoderWrap::GetNumberOfEncodedDirections(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectionEncoderWrap *wrapper = ObjectWrap::Unwrap<VtkDirectionEncoderWrap>(info.Holder());
	vtkDirectionEncoder *native = (vtkDirectionEncoder *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfEncodedDirections();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDirectionEncoderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectionEncoderWrap *wrapper = ObjectWrap::Unwrap<VtkDirectionEncoderWrap>(info.Holder());
	vtkDirectionEncoder *native = (vtkDirectionEncoder *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkDirectionEncoderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectionEncoderWrap *wrapper = ObjectWrap::Unwrap<VtkDirectionEncoderWrap>(info.Holder());
	vtkDirectionEncoder *native = (vtkDirectionEncoder *)wrapper->native.GetPointer();
	vtkDirectionEncoder * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDirectionEncoderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDirectionEncoderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDirectionEncoderWrap *w = new VtkDirectionEncoderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDirectionEncoderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectionEncoderWrap *wrapper = ObjectWrap::Unwrap<VtkDirectionEncoderWrap>(info.Holder());
	vtkDirectionEncoder *native = (vtkDirectionEncoder *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDirectionEncoder * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDirectionEncoderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDirectionEncoderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDirectionEncoderWrap *w = new VtkDirectionEncoderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

