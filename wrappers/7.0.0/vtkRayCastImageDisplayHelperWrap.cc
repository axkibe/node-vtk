/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkRayCastImageDisplayHelperWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRayCastImageDisplayHelperWrap::ptpl;

VtkRayCastImageDisplayHelperWrap::VtkRayCastImageDisplayHelperWrap()
{ }

VtkRayCastImageDisplayHelperWrap::VtkRayCastImageDisplayHelperWrap(vtkSmartPointer<vtkRayCastImageDisplayHelper> _native)
{ native = _native; }

VtkRayCastImageDisplayHelperWrap::~VtkRayCastImageDisplayHelperWrap()
{ }

void VtkRayCastImageDisplayHelperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRayCastImageDisplayHelper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RayCastImageDisplayHelper").ToLocalChecked(), ConstructorGetter);
}

void VtkRayCastImageDisplayHelperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRayCastImageDisplayHelperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRayCastImageDisplayHelperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPreMultipliedColors", GetPreMultipliedColors);
	Nan::SetPrototypeMethod(tpl, "getPreMultipliedColors", GetPreMultipliedColors);

	Nan::SetPrototypeMethod(tpl, "GetPreMultipliedColorsMaxValue", GetPreMultipliedColorsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getPreMultipliedColorsMaxValue", GetPreMultipliedColorsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetPreMultipliedColorsMinValue", GetPreMultipliedColorsMinValue);
	Nan::SetPrototypeMethod(tpl, "getPreMultipliedColorsMinValue", GetPreMultipliedColorsMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PreMultipliedColorsOff", PreMultipliedColorsOff);
	Nan::SetPrototypeMethod(tpl, "preMultipliedColorsOff", PreMultipliedColorsOff);

	Nan::SetPrototypeMethod(tpl, "PreMultipliedColorsOn", PreMultipliedColorsOn);
	Nan::SetPrototypeMethod(tpl, "preMultipliedColorsOn", PreMultipliedColorsOn);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPreMultipliedColors", SetPreMultipliedColors);
	Nan::SetPrototypeMethod(tpl, "setPreMultipliedColors", SetPreMultipliedColors);

	ptpl.Reset( tpl );
}

void VtkRayCastImageDisplayHelperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRayCastImageDisplayHelper> native = vtkSmartPointer<vtkRayCastImageDisplayHelper>::New();
		VtkRayCastImageDisplayHelperWrap* obj = new VtkRayCastImageDisplayHelperWrap(native);
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

void VtkRayCastImageDisplayHelperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRayCastImageDisplayHelperWrap *wrapper = ObjectWrap::Unwrap<VtkRayCastImageDisplayHelperWrap>(info.Holder());
	vtkRayCastImageDisplayHelper *native = (vtkRayCastImageDisplayHelper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRayCastImageDisplayHelperWrap::GetPreMultipliedColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRayCastImageDisplayHelperWrap *wrapper = ObjectWrap::Unwrap<VtkRayCastImageDisplayHelperWrap>(info.Holder());
	vtkRayCastImageDisplayHelper *native = (vtkRayCastImageDisplayHelper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPreMultipliedColors();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRayCastImageDisplayHelperWrap::GetPreMultipliedColorsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRayCastImageDisplayHelperWrap *wrapper = ObjectWrap::Unwrap<VtkRayCastImageDisplayHelperWrap>(info.Holder());
	vtkRayCastImageDisplayHelper *native = (vtkRayCastImageDisplayHelper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPreMultipliedColorsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRayCastImageDisplayHelperWrap::GetPreMultipliedColorsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRayCastImageDisplayHelperWrap *wrapper = ObjectWrap::Unwrap<VtkRayCastImageDisplayHelperWrap>(info.Holder());
	vtkRayCastImageDisplayHelper *native = (vtkRayCastImageDisplayHelper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPreMultipliedColorsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRayCastImageDisplayHelperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRayCastImageDisplayHelperWrap *wrapper = ObjectWrap::Unwrap<VtkRayCastImageDisplayHelperWrap>(info.Holder());
	vtkRayCastImageDisplayHelper *native = (vtkRayCastImageDisplayHelper *)wrapper->native.GetPointer();
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

void VtkRayCastImageDisplayHelperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRayCastImageDisplayHelperWrap *wrapper = ObjectWrap::Unwrap<VtkRayCastImageDisplayHelperWrap>(info.Holder());
	vtkRayCastImageDisplayHelper *native = (vtkRayCastImageDisplayHelper *)wrapper->native.GetPointer();
	vtkRayCastImageDisplayHelper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkRayCastImageDisplayHelperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRayCastImageDisplayHelperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRayCastImageDisplayHelperWrap *w = new VtkRayCastImageDisplayHelperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRayCastImageDisplayHelperWrap::PreMultipliedColorsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRayCastImageDisplayHelperWrap *wrapper = ObjectWrap::Unwrap<VtkRayCastImageDisplayHelperWrap>(info.Holder());
	vtkRayCastImageDisplayHelper *native = (vtkRayCastImageDisplayHelper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreMultipliedColorsOff();
}

void VtkRayCastImageDisplayHelperWrap::PreMultipliedColorsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRayCastImageDisplayHelperWrap *wrapper = ObjectWrap::Unwrap<VtkRayCastImageDisplayHelperWrap>(info.Holder());
	vtkRayCastImageDisplayHelper *native = (vtkRayCastImageDisplayHelper *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreMultipliedColorsOn();
}

void VtkRayCastImageDisplayHelperWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRayCastImageDisplayHelperWrap *wrapper = ObjectWrap::Unwrap<VtkRayCastImageDisplayHelperWrap>(info.Holder());
	vtkRayCastImageDisplayHelper *native = (vtkRayCastImageDisplayHelper *)wrapper->native.GetPointer();
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

void VtkRayCastImageDisplayHelperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRayCastImageDisplayHelperWrap *wrapper = ObjectWrap::Unwrap<VtkRayCastImageDisplayHelperWrap>(info.Holder());
	vtkRayCastImageDisplayHelper *native = (vtkRayCastImageDisplayHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRayCastImageDisplayHelper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkRayCastImageDisplayHelperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRayCastImageDisplayHelperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRayCastImageDisplayHelperWrap *w = new VtkRayCastImageDisplayHelperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRayCastImageDisplayHelperWrap::SetPreMultipliedColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRayCastImageDisplayHelperWrap *wrapper = ObjectWrap::Unwrap<VtkRayCastImageDisplayHelperWrap>(info.Holder());
	vtkRayCastImageDisplayHelper *native = (vtkRayCastImageDisplayHelper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPreMultipliedColors(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

