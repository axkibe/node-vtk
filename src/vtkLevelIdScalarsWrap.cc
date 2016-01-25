/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkOverlappingAMRLevelIdScalarsWrap.h"
#include "vtkLevelIdScalarsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkLevelIdScalarsWrap::constructor;

VtkLevelIdScalarsWrap::VtkLevelIdScalarsWrap()
{ }

VtkLevelIdScalarsWrap::VtkLevelIdScalarsWrap(vtkSmartPointer<vtkLevelIdScalars> _native)
{ native = _native; }

VtkLevelIdScalarsWrap::~VtkLevelIdScalarsWrap()
{ }

void VtkLevelIdScalarsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkLevelIdScalarsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkUniformGridAMRAlgorithmWrap::InitTpl(tpl);
	VtkOverlappingAMRAlgorithmWrap::InitTpl(tpl);
	VtkOverlappingAMRLevelIdScalarsWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkLevelIdScalars").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("LevelIdScalars").ToLocalChecked(),tpl->GetFunction());
}

void VtkLevelIdScalarsWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkLevelIdScalarsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLevelIdScalars> native = vtkSmartPointer<vtkLevelIdScalars>::New();
		VtkLevelIdScalarsWrap* obj = new VtkLevelIdScalarsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkLevelIdScalarsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLevelIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkLevelIdScalarsWrap>(info.Holder());
	vtkLevelIdScalars *native = (vtkLevelIdScalars *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLevelIdScalarsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLevelIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkLevelIdScalarsWrap>(info.Holder());
	vtkLevelIdScalars *native = (vtkLevelIdScalars *)wrapper->native.GetPointer();
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

void VtkLevelIdScalarsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLevelIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkLevelIdScalarsWrap>(info.Holder());
	vtkLevelIdScalars *native = (vtkLevelIdScalars *)wrapper->native.GetPointer();
	vtkLevelIdScalars * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLevelIdScalarsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLevelIdScalarsWrap *w = new VtkLevelIdScalarsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLevelIdScalarsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLevelIdScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkLevelIdScalarsWrap>(info.Holder());
	vtkLevelIdScalars *native = (vtkLevelIdScalars *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLevelIdScalars * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkLevelIdScalarsWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLevelIdScalarsWrap *w = new VtkLevelIdScalarsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

