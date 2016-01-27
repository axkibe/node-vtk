/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPointSetAlgorithmWrap.h"
#include "vtkProjectSphereFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkProjectSphereFilterWrap::ptpl;

VtkProjectSphereFilterWrap::VtkProjectSphereFilterWrap()
{ }

VtkProjectSphereFilterWrap::VtkProjectSphereFilterWrap(vtkSmartPointer<vtkProjectSphereFilter> _native)
{ native = _native; }

VtkProjectSphereFilterWrap::~VtkProjectSphereFilterWrap()
{ }

void VtkProjectSphereFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkProjectSphereFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ProjectSphereFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkProjectSphereFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkProjectSphereFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkProjectSphereFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "KeepPolePointsOff", KeepPolePointsOff);
	Nan::SetPrototypeMethod(tpl, "keepPolePointsOff", KeepPolePointsOff);

	Nan::SetPrototypeMethod(tpl, "KeepPolePointsOn", KeepPolePointsOn);
	Nan::SetPrototypeMethod(tpl, "keepPolePointsOn", KeepPolePointsOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "TranslateZOff", TranslateZOff);
	Nan::SetPrototypeMethod(tpl, "translateZOff", TranslateZOff);

	Nan::SetPrototypeMethod(tpl, "TranslateZOn", TranslateZOn);
	Nan::SetPrototypeMethod(tpl, "translateZOn", TranslateZOn);

	ptpl.Reset( tpl );
}

void VtkProjectSphereFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProjectSphereFilter> native = vtkSmartPointer<vtkProjectSphereFilter>::New();
		VtkProjectSphereFilterWrap* obj = new VtkProjectSphereFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkProjectSphereFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProjectSphereFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
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

void VtkProjectSphereFilterWrap::KeepPolePointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->KeepPolePointsOff();
}

void VtkProjectSphereFilterWrap::KeepPolePointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->KeepPolePointsOn();
}

void VtkProjectSphereFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
	vtkProjectSphereFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkProjectSphereFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProjectSphereFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProjectSphereFilterWrap *w = new VtkProjectSphereFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProjectSphereFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProjectSphereFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkProjectSphereFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProjectSphereFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProjectSphereFilterWrap *w = new VtkProjectSphereFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProjectSphereFilterWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetCenter(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProjectSphereFilterWrap::TranslateZOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TranslateZOff();
}

void VtkProjectSphereFilterWrap::TranslateZOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProjectSphereFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProjectSphereFilterWrap>(info.Holder());
	vtkProjectSphereFilter *native = (vtkProjectSphereFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TranslateZOn();
}
