/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDepthImageProcessingPassWrap.h"
#include "vtkDepthOfFieldPassWrap.h"
#include "vtkObjectWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDepthOfFieldPassWrap::ptpl;

VtkDepthOfFieldPassWrap::VtkDepthOfFieldPassWrap()
{ }

VtkDepthOfFieldPassWrap::VtkDepthOfFieldPassWrap(vtkSmartPointer<vtkDepthOfFieldPass> _native)
{ native = _native; }

VtkDepthOfFieldPassWrap::~VtkDepthOfFieldPassWrap()
{ }

void VtkDepthOfFieldPassWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDepthOfFieldPass").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DepthOfFieldPass").ToLocalChecked(), ConstructorGetter);
}

void VtkDepthOfFieldPassWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDepthOfFieldPassWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDepthImageProcessingPassWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDepthImageProcessingPassWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDepthOfFieldPassWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AutomaticFocalDistanceOff", AutomaticFocalDistanceOff);
	Nan::SetPrototypeMethod(tpl, "automaticFocalDistanceOff", AutomaticFocalDistanceOff);

	Nan::SetPrototypeMethod(tpl, "AutomaticFocalDistanceOn", AutomaticFocalDistanceOn);
	Nan::SetPrototypeMethod(tpl, "automaticFocalDistanceOn", AutomaticFocalDistanceOn);

	Nan::SetPrototypeMethod(tpl, "GetAutomaticFocalDistance", GetAutomaticFocalDistance);
	Nan::SetPrototypeMethod(tpl, "getAutomaticFocalDistance", GetAutomaticFocalDistance);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAutomaticFocalDistance", SetAutomaticFocalDistance);
	Nan::SetPrototypeMethod(tpl, "setAutomaticFocalDistance", SetAutomaticFocalDistance);

	ptpl.Reset( tpl );
}

void VtkDepthOfFieldPassWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDepthOfFieldPass> native = vtkSmartPointer<vtkDepthOfFieldPass>::New();
		VtkDepthOfFieldPassWrap* obj = new VtkDepthOfFieldPassWrap(native);
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

void VtkDepthOfFieldPassWrap::AutomaticFocalDistanceOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthOfFieldPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthOfFieldPassWrap>(info.Holder());
	vtkDepthOfFieldPass *native = (vtkDepthOfFieldPass *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutomaticFocalDistanceOff();
}

void VtkDepthOfFieldPassWrap::AutomaticFocalDistanceOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthOfFieldPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthOfFieldPassWrap>(info.Holder());
	vtkDepthOfFieldPass *native = (vtkDepthOfFieldPass *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutomaticFocalDistanceOn();
}

void VtkDepthOfFieldPassWrap::GetAutomaticFocalDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthOfFieldPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthOfFieldPassWrap>(info.Holder());
	vtkDepthOfFieldPass *native = (vtkDepthOfFieldPass *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutomaticFocalDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDepthOfFieldPassWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthOfFieldPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthOfFieldPassWrap>(info.Holder());
	vtkDepthOfFieldPass *native = (vtkDepthOfFieldPass *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDepthOfFieldPassWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthOfFieldPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthOfFieldPassWrap>(info.Holder());
	vtkDepthOfFieldPass *native = (vtkDepthOfFieldPass *)wrapper->native.GetPointer();
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

void VtkDepthOfFieldPassWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthOfFieldPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthOfFieldPassWrap>(info.Holder());
	vtkDepthOfFieldPass *native = (vtkDepthOfFieldPass *)wrapper->native.GetPointer();
	vtkDepthOfFieldPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDepthOfFieldPassWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDepthOfFieldPassWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDepthOfFieldPassWrap *w = new VtkDepthOfFieldPassWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDepthOfFieldPassWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthOfFieldPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthOfFieldPassWrap>(info.Holder());
	vtkDepthOfFieldPass *native = (vtkDepthOfFieldPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkWindowWrap *a0 = ObjectWrap::Unwrap<VtkWindowWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ReleaseGraphicsResources(
			(vtkWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDepthOfFieldPassWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthOfFieldPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthOfFieldPassWrap>(info.Holder());
	vtkDepthOfFieldPass *native = (vtkDepthOfFieldPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDepthOfFieldPass * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDepthOfFieldPassWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDepthOfFieldPassWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDepthOfFieldPassWrap *w = new VtkDepthOfFieldPassWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDepthOfFieldPassWrap::SetAutomaticFocalDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDepthOfFieldPassWrap *wrapper = ObjectWrap::Unwrap<VtkDepthOfFieldPassWrap>(info.Holder());
	vtkDepthOfFieldPass *native = (vtkDepthOfFieldPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAutomaticFocalDistance(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

