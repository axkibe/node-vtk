/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkSubPixelPositionEdgelsWrap.h"
#include "vtkObjectWrap.h"
#include "vtkStructuredPointsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkSubPixelPositionEdgelsWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkSubPixelPositionEdgelsWrap::ptpl;

VtkSubPixelPositionEdgelsWrap::VtkSubPixelPositionEdgelsWrap()
{ }

VtkSubPixelPositionEdgelsWrap::VtkSubPixelPositionEdgelsWrap(vtkSmartPointer<vtkSubPixelPositionEdgels> _native)
{ native = _native; }

VtkSubPixelPositionEdgelsWrap::~VtkSubPixelPositionEdgelsWrap()
{ }

void VtkSubPixelPositionEdgelsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSubPixelPositionEdgels").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SubPixelPositionEdgels").ToLocalChecked(), ConstructorGetter);
}

void VtkSubPixelPositionEdgelsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSubPixelPositionEdgelsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSubPixelPositionEdgelsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGradMaps", GetGradMaps);
	Nan::SetPrototypeMethod(tpl, "getGradMaps", GetGradMaps);

	Nan::SetPrototypeMethod(tpl, "GetTargetFlag", GetTargetFlag);
	Nan::SetPrototypeMethod(tpl, "getTargetFlag", GetTargetFlag);

	Nan::SetPrototypeMethod(tpl, "GetTargetValue", GetTargetValue);
	Nan::SetPrototypeMethod(tpl, "getTargetValue", GetTargetValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGradMapsData", SetGradMapsData);
	Nan::SetPrototypeMethod(tpl, "setGradMapsData", SetGradMapsData);

	Nan::SetPrototypeMethod(tpl, "SetTargetFlag", SetTargetFlag);
	Nan::SetPrototypeMethod(tpl, "setTargetFlag", SetTargetFlag);

	Nan::SetPrototypeMethod(tpl, "SetTargetValue", SetTargetValue);
	Nan::SetPrototypeMethod(tpl, "setTargetValue", SetTargetValue);

	Nan::SetPrototypeMethod(tpl, "TargetFlagOff", TargetFlagOff);
	Nan::SetPrototypeMethod(tpl, "targetFlagOff", TargetFlagOff);

	Nan::SetPrototypeMethod(tpl, "TargetFlagOn", TargetFlagOn);
	Nan::SetPrototypeMethod(tpl, "targetFlagOn", TargetFlagOn);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkSubPixelPositionEdgelsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSubPixelPositionEdgels> native = vtkSmartPointer<vtkSubPixelPositionEdgels>::New();
		VtkSubPixelPositionEdgelsWrap* obj = new VtkSubPixelPositionEdgelsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSubPixelPositionEdgelsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubPixelPositionEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkSubPixelPositionEdgelsWrap>(info.Holder());
	vtkSubPixelPositionEdgels *native = (vtkSubPixelPositionEdgels *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSubPixelPositionEdgelsWrap::GetGradMaps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubPixelPositionEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkSubPixelPositionEdgelsWrap>(info.Holder());
	vtkSubPixelPositionEdgels *native = (vtkSubPixelPositionEdgels *)wrapper->native.GetPointer();
	vtkStructuredPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGradMaps();
		VtkStructuredPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkStructuredPointsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredPointsWrap *w = new VtkStructuredPointsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSubPixelPositionEdgelsWrap::GetTargetFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubPixelPositionEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkSubPixelPositionEdgelsWrap>(info.Holder());
	vtkSubPixelPositionEdgels *native = (vtkSubPixelPositionEdgels *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTargetFlag();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSubPixelPositionEdgelsWrap::GetTargetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubPixelPositionEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkSubPixelPositionEdgelsWrap>(info.Holder());
	vtkSubPixelPositionEdgels *native = (vtkSubPixelPositionEdgels *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTargetValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSubPixelPositionEdgelsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubPixelPositionEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkSubPixelPositionEdgelsWrap>(info.Holder());
	vtkSubPixelPositionEdgels *native = (vtkSubPixelPositionEdgels *)wrapper->native.GetPointer();
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

void VtkSubPixelPositionEdgelsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubPixelPositionEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkSubPixelPositionEdgelsWrap>(info.Holder());
	vtkSubPixelPositionEdgels *native = (vtkSubPixelPositionEdgels *)wrapper->native.GetPointer();
	vtkSubPixelPositionEdgels * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSubPixelPositionEdgelsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSubPixelPositionEdgelsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSubPixelPositionEdgelsWrap *w = new VtkSubPixelPositionEdgelsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSubPixelPositionEdgelsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubPixelPositionEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkSubPixelPositionEdgelsWrap>(info.Holder());
	vtkSubPixelPositionEdgels *native = (vtkSubPixelPositionEdgels *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSubPixelPositionEdgels * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSubPixelPositionEdgelsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkSubPixelPositionEdgelsWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSubPixelPositionEdgelsWrap *w = new VtkSubPixelPositionEdgelsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSubPixelPositionEdgelsWrap::SetGradMapsData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubPixelPositionEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkSubPixelPositionEdgelsWrap>(info.Holder());
	vtkSubPixelPositionEdgels *native = (vtkSubPixelPositionEdgels *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkStructuredPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkStructuredPointsWrap *a0 = ObjectWrap::Unwrap<VtkStructuredPointsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGradMapsData(
			(vtkStructuredPoints *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSubPixelPositionEdgelsWrap::SetTargetFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubPixelPositionEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkSubPixelPositionEdgelsWrap>(info.Holder());
	vtkSubPixelPositionEdgels *native = (vtkSubPixelPositionEdgels *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTargetFlag(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSubPixelPositionEdgelsWrap::SetTargetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubPixelPositionEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkSubPixelPositionEdgelsWrap>(info.Holder());
	vtkSubPixelPositionEdgels *native = (vtkSubPixelPositionEdgels *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTargetValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSubPixelPositionEdgelsWrap::TargetFlagOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubPixelPositionEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkSubPixelPositionEdgelsWrap>(info.Holder());
	vtkSubPixelPositionEdgels *native = (vtkSubPixelPositionEdgels *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TargetFlagOff();
}

void VtkSubPixelPositionEdgelsWrap::TargetFlagOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSubPixelPositionEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkSubPixelPositionEdgelsWrap>(info.Holder());
	vtkSubPixelPositionEdgels *native = (vtkSubPixelPositionEdgels *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TargetFlagOn();
}

