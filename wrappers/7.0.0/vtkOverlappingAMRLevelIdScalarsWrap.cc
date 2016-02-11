/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkOverlappingAMRAlgorithmWrap.h"
#include "vtkOverlappingAMRLevelIdScalarsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOverlappingAMRLevelIdScalarsWrap::ptpl;

VtkOverlappingAMRLevelIdScalarsWrap::VtkOverlappingAMRLevelIdScalarsWrap()
{ }

VtkOverlappingAMRLevelIdScalarsWrap::VtkOverlappingAMRLevelIdScalarsWrap(vtkSmartPointer<vtkOverlappingAMRLevelIdScalars> _native)
{ native = _native; }

VtkOverlappingAMRLevelIdScalarsWrap::~VtkOverlappingAMRLevelIdScalarsWrap()
{ }

void VtkOverlappingAMRLevelIdScalarsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOverlappingAMRLevelIdScalars").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OverlappingAMRLevelIdScalars").ToLocalChecked(), ConstructorGetter);
}

void VtkOverlappingAMRLevelIdScalarsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOverlappingAMRLevelIdScalarsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkOverlappingAMRAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkOverlappingAMRAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOverlappingAMRLevelIdScalarsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkOverlappingAMRLevelIdScalarsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOverlappingAMRLevelIdScalars> native = vtkSmartPointer<vtkOverlappingAMRLevelIdScalars>::New();
		VtkOverlappingAMRLevelIdScalarsWrap* obj = new VtkOverlappingAMRLevelIdScalarsWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOverlappingAMRLevelIdScalarsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverlappingAMRLevelIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkOverlappingAMRLevelIdScalarsWrap>(info.Holder());
	vtkOverlappingAMRLevelIdScalars *native = (vtkOverlappingAMRLevelIdScalars *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOverlappingAMRLevelIdScalarsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverlappingAMRLevelIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkOverlappingAMRLevelIdScalarsWrap>(info.Holder());
	vtkOverlappingAMRLevelIdScalars *native = (vtkOverlappingAMRLevelIdScalars *)wrapper->native.GetPointer();
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

void VtkOverlappingAMRLevelIdScalarsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverlappingAMRLevelIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkOverlappingAMRLevelIdScalarsWrap>(info.Holder());
	vtkOverlappingAMRLevelIdScalars *native = (vtkOverlappingAMRLevelIdScalars *)wrapper->native.GetPointer();
	vtkOverlappingAMRLevelIdScalars * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkOverlappingAMRLevelIdScalarsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOverlappingAMRLevelIdScalarsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOverlappingAMRLevelIdScalarsWrap *w = new VtkOverlappingAMRLevelIdScalarsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOverlappingAMRLevelIdScalarsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOverlappingAMRLevelIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkOverlappingAMRLevelIdScalarsWrap>(info.Holder());
	vtkOverlappingAMRLevelIdScalars *native = (vtkOverlappingAMRLevelIdScalars *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOverlappingAMRLevelIdScalars * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkOverlappingAMRLevelIdScalarsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOverlappingAMRLevelIdScalarsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOverlappingAMRLevelIdScalarsWrap *w = new VtkOverlappingAMRLevelIdScalarsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

