/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPointPlacerWrap.h"
#include "vtkPolyDataPointPlacerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPropWrap.h"
#include "vtkPropPickerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPolyDataPointPlacerWrap::ptpl;

VtkPolyDataPointPlacerWrap::VtkPolyDataPointPlacerWrap()
{ }

VtkPolyDataPointPlacerWrap::VtkPolyDataPointPlacerWrap(vtkSmartPointer<vtkPolyDataPointPlacer> _native)
{ native = _native; }

VtkPolyDataPointPlacerWrap::~VtkPolyDataPointPlacerWrap()
{ }

void VtkPolyDataPointPlacerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPolyDataPointPlacer").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PolyDataPointPlacer").ToLocalChecked(), ConstructorGetter);
}

void VtkPolyDataPointPlacerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPolyDataPointPlacerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointPlacerWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointPlacerWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPolyDataPointPlacerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddProp", AddProp);
	Nan::SetPrototypeMethod(tpl, "addProp", AddProp);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfProps", GetNumberOfProps);
	Nan::SetPrototypeMethod(tpl, "getNumberOfProps", GetNumberOfProps);

	Nan::SetPrototypeMethod(tpl, "GetPropPicker", GetPropPicker);
	Nan::SetPrototypeMethod(tpl, "getPropPicker", GetPropPicker);

	Nan::SetPrototypeMethod(tpl, "HasProp", HasProp);
	Nan::SetPrototypeMethod(tpl, "hasProp", HasProp);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllProps", RemoveAllProps);
	Nan::SetPrototypeMethod(tpl, "removeAllProps", RemoveAllProps);

	Nan::SetPrototypeMethod(tpl, "RemoveViewProp", RemoveViewProp);
	Nan::SetPrototypeMethod(tpl, "removeViewProp", RemoveViewProp);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkPolyDataPointPlacerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPolyDataPointPlacer> native = vtkSmartPointer<vtkPolyDataPointPlacer>::New();
		VtkPolyDataPointPlacerWrap* obj = new VtkPolyDataPointPlacerWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPolyDataPointPlacerWrap::AddProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointPlacerWrap>(info.Holder());
	vtkPolyDataPointPlacer *native = (vtkPolyDataPointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddProp(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataPointPlacerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointPlacerWrap>(info.Holder());
	vtkPolyDataPointPlacer *native = (vtkPolyDataPointPlacer *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPolyDataPointPlacerWrap::GetNumberOfProps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointPlacerWrap>(info.Holder());
	vtkPolyDataPointPlacer *native = (vtkPolyDataPointPlacer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfProps();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataPointPlacerWrap::GetPropPicker(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointPlacerWrap>(info.Holder());
	vtkPolyDataPointPlacer *native = (vtkPolyDataPointPlacer *)wrapper->native.GetPointer();
	vtkPropPicker * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPropPicker();
		VtkPropPickerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropPickerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropPickerWrap *w = new VtkPropPickerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyDataPointPlacerWrap::HasProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointPlacerWrap>(info.Holder());
	vtkPolyDataPointPlacer *native = (vtkPolyDataPointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->HasProp(
			(vtkProp *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataPointPlacerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointPlacerWrap>(info.Holder());
	vtkPolyDataPointPlacer *native = (vtkPolyDataPointPlacer *)wrapper->native.GetPointer();
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

void VtkPolyDataPointPlacerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointPlacerWrap>(info.Holder());
	vtkPolyDataPointPlacer *native = (vtkPolyDataPointPlacer *)wrapper->native.GetPointer();
	vtkPolyDataPointPlacer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPolyDataPointPlacerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataPointPlacerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataPointPlacerWrap *w = new VtkPolyDataPointPlacerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyDataPointPlacerWrap::RemoveAllProps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointPlacerWrap>(info.Holder());
	vtkPolyDataPointPlacer *native = (vtkPolyDataPointPlacer *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllProps();
}

void VtkPolyDataPointPlacerWrap::RemoveViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointPlacerWrap>(info.Holder());
	vtkPolyDataPointPlacer *native = (vtkPolyDataPointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveViewProp(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataPointPlacerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataPointPlacerWrap>(info.Holder());
	vtkPolyDataPointPlacer *native = (vtkPolyDataPointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPolyDataPointPlacer * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPolyDataPointPlacerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPolyDataPointPlacerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolyDataPointPlacerWrap *w = new VtkPolyDataPointPlacerWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

