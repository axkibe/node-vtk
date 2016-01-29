/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkRotationalExtrusionFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRotationalExtrusionFilterWrap::ptpl;

VtkRotationalExtrusionFilterWrap::VtkRotationalExtrusionFilterWrap()
{ }

VtkRotationalExtrusionFilterWrap::VtkRotationalExtrusionFilterWrap(vtkSmartPointer<vtkRotationalExtrusionFilter> _native)
{ native = _native; }

VtkRotationalExtrusionFilterWrap::~VtkRotationalExtrusionFilterWrap()
{ }

void VtkRotationalExtrusionFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRotationalExtrusionFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RotationalExtrusionFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkRotationalExtrusionFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRotationalExtrusionFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRotationalExtrusionFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CappingOff", CappingOff);
	Nan::SetPrototypeMethod(tpl, "cappingOff", CappingOff);

	Nan::SetPrototypeMethod(tpl, "CappingOn", CappingOn);
	Nan::SetPrototypeMethod(tpl, "cappingOn", CappingOn);

	Nan::SetPrototypeMethod(tpl, "GetAngle", GetAngle);
	Nan::SetPrototypeMethod(tpl, "getAngle", GetAngle);

	Nan::SetPrototypeMethod(tpl, "GetCapping", GetCapping);
	Nan::SetPrototypeMethod(tpl, "getCapping", GetCapping);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDeltaRadius", GetDeltaRadius);
	Nan::SetPrototypeMethod(tpl, "getDeltaRadius", GetDeltaRadius);

	Nan::SetPrototypeMethod(tpl, "GetResolution", GetResolution);
	Nan::SetPrototypeMethod(tpl, "getResolution", GetResolution);

	Nan::SetPrototypeMethod(tpl, "GetResolutionMaxValue", GetResolutionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getResolutionMaxValue", GetResolutionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetResolutionMinValue", GetResolutionMinValue);
	Nan::SetPrototypeMethod(tpl, "getResolutionMinValue", GetResolutionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTranslation", GetTranslation);
	Nan::SetPrototypeMethod(tpl, "getTranslation", GetTranslation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAngle", SetAngle);
	Nan::SetPrototypeMethod(tpl, "setAngle", SetAngle);

	Nan::SetPrototypeMethod(tpl, "SetCapping", SetCapping);
	Nan::SetPrototypeMethod(tpl, "setCapping", SetCapping);

	Nan::SetPrototypeMethod(tpl, "SetDeltaRadius", SetDeltaRadius);
	Nan::SetPrototypeMethod(tpl, "setDeltaRadius", SetDeltaRadius);

	Nan::SetPrototypeMethod(tpl, "SetResolution", SetResolution);
	Nan::SetPrototypeMethod(tpl, "setResolution", SetResolution);

	Nan::SetPrototypeMethod(tpl, "SetTranslation", SetTranslation);
	Nan::SetPrototypeMethod(tpl, "setTranslation", SetTranslation);

	ptpl.Reset( tpl );
}

void VtkRotationalExtrusionFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRotationalExtrusionFilter> native = vtkSmartPointer<vtkRotationalExtrusionFilter>::New();
		VtkRotationalExtrusionFilterWrap* obj = new VtkRotationalExtrusionFilterWrap(native);
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

void VtkRotationalExtrusionFilterWrap::CappingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationalExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationalExtrusionFilterWrap>(info.Holder());
	vtkRotationalExtrusionFilter *native = (vtkRotationalExtrusionFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CappingOff();
}

void VtkRotationalExtrusionFilterWrap::CappingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationalExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationalExtrusionFilterWrap>(info.Holder());
	vtkRotationalExtrusionFilter *native = (vtkRotationalExtrusionFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CappingOn();
}

void VtkRotationalExtrusionFilterWrap::GetAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationalExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationalExtrusionFilterWrap>(info.Holder());
	vtkRotationalExtrusionFilter *native = (vtkRotationalExtrusionFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAngle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRotationalExtrusionFilterWrap::GetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationalExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationalExtrusionFilterWrap>(info.Holder());
	vtkRotationalExtrusionFilter *native = (vtkRotationalExtrusionFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCapping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRotationalExtrusionFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationalExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationalExtrusionFilterWrap>(info.Holder());
	vtkRotationalExtrusionFilter *native = (vtkRotationalExtrusionFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRotationalExtrusionFilterWrap::GetDeltaRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationalExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationalExtrusionFilterWrap>(info.Holder());
	vtkRotationalExtrusionFilter *native = (vtkRotationalExtrusionFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDeltaRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRotationalExtrusionFilterWrap::GetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationalExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationalExtrusionFilterWrap>(info.Holder());
	vtkRotationalExtrusionFilter *native = (vtkRotationalExtrusionFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRotationalExtrusionFilterWrap::GetResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationalExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationalExtrusionFilterWrap>(info.Holder());
	vtkRotationalExtrusionFilter *native = (vtkRotationalExtrusionFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResolutionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRotationalExtrusionFilterWrap::GetResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationalExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationalExtrusionFilterWrap>(info.Holder());
	vtkRotationalExtrusionFilter *native = (vtkRotationalExtrusionFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetResolutionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRotationalExtrusionFilterWrap::GetTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationalExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationalExtrusionFilterWrap>(info.Holder());
	vtkRotationalExtrusionFilter *native = (vtkRotationalExtrusionFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTranslation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRotationalExtrusionFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationalExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationalExtrusionFilterWrap>(info.Holder());
	vtkRotationalExtrusionFilter *native = (vtkRotationalExtrusionFilter *)wrapper->native.GetPointer();
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

void VtkRotationalExtrusionFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationalExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationalExtrusionFilterWrap>(info.Holder());
	vtkRotationalExtrusionFilter *native = (vtkRotationalExtrusionFilter *)wrapper->native.GetPointer();
	vtkRotationalExtrusionFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkRotationalExtrusionFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRotationalExtrusionFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRotationalExtrusionFilterWrap *w = new VtkRotationalExtrusionFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRotationalExtrusionFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationalExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationalExtrusionFilterWrap>(info.Holder());
	vtkRotationalExtrusionFilter *native = (vtkRotationalExtrusionFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRotationalExtrusionFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkRotationalExtrusionFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRotationalExtrusionFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRotationalExtrusionFilterWrap *w = new VtkRotationalExtrusionFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRotationalExtrusionFilterWrap::SetAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationalExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationalExtrusionFilterWrap>(info.Holder());
	vtkRotationalExtrusionFilter *native = (vtkRotationalExtrusionFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAngle(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRotationalExtrusionFilterWrap::SetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationalExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationalExtrusionFilterWrap>(info.Holder());
	vtkRotationalExtrusionFilter *native = (vtkRotationalExtrusionFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCapping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRotationalExtrusionFilterWrap::SetDeltaRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationalExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationalExtrusionFilterWrap>(info.Holder());
	vtkRotationalExtrusionFilter *native = (vtkRotationalExtrusionFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDeltaRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRotationalExtrusionFilterWrap::SetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationalExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationalExtrusionFilterWrap>(info.Holder());
	vtkRotationalExtrusionFilter *native = (vtkRotationalExtrusionFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRotationalExtrusionFilterWrap::SetTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationalExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationalExtrusionFilterWrap>(info.Holder());
	vtkRotationalExtrusionFilter *native = (vtkRotationalExtrusionFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTranslation(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

