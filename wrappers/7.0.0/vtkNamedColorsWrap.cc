/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkNamedColorsWrap.h"
#include "vtkStringArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkNamedColorsWrap::ptpl;

VtkNamedColorsWrap::VtkNamedColorsWrap()
{ }

VtkNamedColorsWrap::VtkNamedColorsWrap(vtkSmartPointer<vtkNamedColors> _native)
{ native = _native; }

VtkNamedColorsWrap::~VtkNamedColorsWrap()
{ }

void VtkNamedColorsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkNamedColors").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("NamedColors").ToLocalChecked(), ConstructorGetter);
}

void VtkNamedColorsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkNamedColorsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkNamedColorsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColorNames", GetColorNames);
	Nan::SetPrototypeMethod(tpl, "getColorNames", GetColorNames);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfColors", GetNumberOfColors);
	Nan::SetPrototypeMethod(tpl, "getNumberOfColors", GetNumberOfColors);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ResetColors", ResetColors);
	Nan::SetPrototypeMethod(tpl, "resetColors", ResetColors);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkNamedColorsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkNamedColors> native = vtkSmartPointer<vtkNamedColors>::New();
		VtkNamedColorsWrap* obj = new VtkNamedColorsWrap(native);
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

void VtkNamedColorsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNamedColorsWrap *wrapper = ObjectWrap::Unwrap<VtkNamedColorsWrap>(info.Holder());
	vtkNamedColors *native = (vtkNamedColors *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkNamedColorsWrap::GetColorNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNamedColorsWrap *wrapper = ObjectWrap::Unwrap<VtkNamedColorsWrap>(info.Holder());
	vtkNamedColors *native = (vtkNamedColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkStringArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkStringArrayWrap *a0 = ObjectWrap::Unwrap<VtkStringArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetColorNames(
			(vtkStringArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNamedColorsWrap::GetNumberOfColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNamedColorsWrap *wrapper = ObjectWrap::Unwrap<VtkNamedColorsWrap>(info.Holder());
	vtkNamedColors *native = (vtkNamedColors *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfColors();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNamedColorsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNamedColorsWrap *wrapper = ObjectWrap::Unwrap<VtkNamedColorsWrap>(info.Holder());
	vtkNamedColors *native = (vtkNamedColors *)wrapper->native.GetPointer();
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

void VtkNamedColorsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNamedColorsWrap *wrapper = ObjectWrap::Unwrap<VtkNamedColorsWrap>(info.Holder());
	vtkNamedColors *native = (vtkNamedColors *)wrapper->native.GetPointer();
	vtkNamedColors * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkNamedColorsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkNamedColorsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkNamedColorsWrap *w = new VtkNamedColorsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNamedColorsWrap::ResetColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNamedColorsWrap *wrapper = ObjectWrap::Unwrap<VtkNamedColorsWrap>(info.Holder());
	vtkNamedColors *native = (vtkNamedColors *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetColors();
}

void VtkNamedColorsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNamedColorsWrap *wrapper = ObjectWrap::Unwrap<VtkNamedColorsWrap>(info.Holder());
	vtkNamedColors *native = (vtkNamedColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkNamedColors * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkNamedColorsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkNamedColorsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkNamedColorsWrap *w = new VtkNamedColorsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

