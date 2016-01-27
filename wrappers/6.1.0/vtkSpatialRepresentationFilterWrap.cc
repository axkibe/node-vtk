/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "vtkSpatialRepresentationFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkLocatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSpatialRepresentationFilterWrap::ptpl;

VtkSpatialRepresentationFilterWrap::VtkSpatialRepresentationFilterWrap()
{ }

VtkSpatialRepresentationFilterWrap::VtkSpatialRepresentationFilterWrap(vtkSmartPointer<vtkSpatialRepresentationFilter> _native)
{ native = _native; }

VtkSpatialRepresentationFilterWrap::~VtkSpatialRepresentationFilterWrap()
{ }

void VtkSpatialRepresentationFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSpatialRepresentationFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SpatialRepresentationFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkSpatialRepresentationFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSpatialRepresentationFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMultiBlockDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMultiBlockDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSpatialRepresentationFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddLevel", AddLevel);
	Nan::SetPrototypeMethod(tpl, "addLevel", AddLevel);

	Nan::SetPrototypeMethod(tpl, "GenerateLeavesOff", GenerateLeavesOff);
	Nan::SetPrototypeMethod(tpl, "generateLeavesOff", GenerateLeavesOff);

	Nan::SetPrototypeMethod(tpl, "GenerateLeavesOn", GenerateLeavesOn);
	Nan::SetPrototypeMethod(tpl, "generateLeavesOn", GenerateLeavesOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMaximumLevel", GetMaximumLevel);
	Nan::SetPrototypeMethod(tpl, "getMaximumLevel", GetMaximumLevel);

	Nan::SetPrototypeMethod(tpl, "GetSpatialRepresentation", GetSpatialRepresentation);
	Nan::SetPrototypeMethod(tpl, "getSpatialRepresentation", GetSpatialRepresentation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ResetLevels", ResetLevels);
	Nan::SetPrototypeMethod(tpl, "resetLevels", ResetLevels);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetSpatialRepresentation", SetSpatialRepresentation);
	Nan::SetPrototypeMethod(tpl, "setSpatialRepresentation", SetSpatialRepresentation);

	ptpl.Reset( tpl );
}

void VtkSpatialRepresentationFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSpatialRepresentationFilter> native = vtkSmartPointer<vtkSpatialRepresentationFilter>::New();
		VtkSpatialRepresentationFilterWrap* obj = new VtkSpatialRepresentationFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSpatialRepresentationFilterWrap::AddLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpatialRepresentationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSpatialRepresentationFilterWrap>(info.Holder());
	vtkSpatialRepresentationFilter *native = (vtkSpatialRepresentationFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpatialRepresentationFilterWrap::GenerateLeavesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpatialRepresentationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSpatialRepresentationFilterWrap>(info.Holder());
	vtkSpatialRepresentationFilter *native = (vtkSpatialRepresentationFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateLeavesOff();
}

void VtkSpatialRepresentationFilterWrap::GenerateLeavesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpatialRepresentationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSpatialRepresentationFilterWrap>(info.Holder());
	vtkSpatialRepresentationFilter *native = (vtkSpatialRepresentationFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateLeavesOn();
}

void VtkSpatialRepresentationFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpatialRepresentationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSpatialRepresentationFilterWrap>(info.Holder());
	vtkSpatialRepresentationFilter *native = (vtkSpatialRepresentationFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSpatialRepresentationFilterWrap::GetMaximumLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpatialRepresentationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSpatialRepresentationFilterWrap>(info.Holder());
	vtkSpatialRepresentationFilter *native = (vtkSpatialRepresentationFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSpatialRepresentationFilterWrap::GetSpatialRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpatialRepresentationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSpatialRepresentationFilterWrap>(info.Holder());
	vtkSpatialRepresentationFilter *native = (vtkSpatialRepresentationFilter *)wrapper->native.GetPointer();
	vtkLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSpatialRepresentation();
		VtkLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLocatorWrap *w = new VtkLocatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSpatialRepresentationFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpatialRepresentationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSpatialRepresentationFilterWrap>(info.Holder());
	vtkSpatialRepresentationFilter *native = (vtkSpatialRepresentationFilter *)wrapper->native.GetPointer();
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

void VtkSpatialRepresentationFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpatialRepresentationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSpatialRepresentationFilterWrap>(info.Holder());
	vtkSpatialRepresentationFilter *native = (vtkSpatialRepresentationFilter *)wrapper->native.GetPointer();
	vtkSpatialRepresentationFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSpatialRepresentationFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSpatialRepresentationFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSpatialRepresentationFilterWrap *w = new VtkSpatialRepresentationFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSpatialRepresentationFilterWrap::ResetLevels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpatialRepresentationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSpatialRepresentationFilterWrap>(info.Holder());
	vtkSpatialRepresentationFilter *native = (vtkSpatialRepresentationFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetLevels();
}

void VtkSpatialRepresentationFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpatialRepresentationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSpatialRepresentationFilterWrap>(info.Holder());
	vtkSpatialRepresentationFilter *native = (vtkSpatialRepresentationFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSpatialRepresentationFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSpatialRepresentationFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSpatialRepresentationFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSpatialRepresentationFilterWrap *w = new VtkSpatialRepresentationFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpatialRepresentationFilterWrap::SetSpatialRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpatialRepresentationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSpatialRepresentationFilterWrap>(info.Holder());
	vtkSpatialRepresentationFilter *native = (vtkSpatialRepresentationFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkLocatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkLocatorWrap *a0 = ObjectWrap::Unwrap<VtkLocatorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSpatialRepresentation(
			(vtkLocator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

