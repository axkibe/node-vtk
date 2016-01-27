/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPickerWrap.h"
#include "vtkPointPickerWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPointPickerWrap::ptpl;

VtkPointPickerWrap::VtkPointPickerWrap()
{ }

VtkPointPickerWrap::VtkPointPickerWrap(vtkSmartPointer<vtkPointPicker> _native)
{ native = _native; }

VtkPointPickerWrap::~VtkPointPickerWrap()
{ }

void VtkPointPickerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPointPicker").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PointPicker").ToLocalChecked(), ConstructorGetter);
}

void VtkPointPickerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPointPickerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPickerWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPickerWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPointPickerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetUseCells", GetUseCells);
	Nan::SetPrototypeMethod(tpl, "getUseCells", GetUseCells);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetUseCells", SetUseCells);
	Nan::SetPrototypeMethod(tpl, "setUseCells", SetUseCells);

	Nan::SetPrototypeMethod(tpl, "UseCellsOff", UseCellsOff);
	Nan::SetPrototypeMethod(tpl, "useCellsOff", UseCellsOff);

	Nan::SetPrototypeMethod(tpl, "UseCellsOn", UseCellsOn);
	Nan::SetPrototypeMethod(tpl, "useCellsOn", UseCellsOn);

	ptpl.Reset( tpl );
}

void VtkPointPickerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPointPicker> native = vtkSmartPointer<vtkPointPicker>::New();
		VtkPointPickerWrap* obj = new VtkPointPickerWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPointPickerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPickerWrap>(info.Holder());
	vtkPointPicker *native = (vtkPointPicker *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPointPickerWrap::GetUseCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPickerWrap>(info.Holder());
	vtkPointPicker *native = (vtkPointPicker *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointPickerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPickerWrap>(info.Holder());
	vtkPointPicker *native = (vtkPointPicker *)wrapper->native.GetPointer();
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

void VtkPointPickerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPickerWrap>(info.Holder());
	vtkPointPicker *native = (vtkPointPicker *)wrapper->native.GetPointer();
	vtkPointPicker * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPointPickerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointPickerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointPickerWrap *w = new VtkPointPickerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointPickerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPickerWrap>(info.Holder());
	vtkPointPicker *native = (vtkPointPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPointPicker * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPointPickerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPointPickerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPointPickerWrap *w = new VtkPointPickerWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointPickerWrap::SetUseCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPickerWrap>(info.Holder());
	vtkPointPicker *native = (vtkPointPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseCells(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointPickerWrap::UseCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPickerWrap>(info.Holder());
	vtkPointPicker *native = (vtkPointPicker *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseCellsOff();
}

void VtkPointPickerWrap::UseCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointPickerWrap *wrapper = ObjectWrap::Unwrap<VtkPointPickerWrap>(info.Holder());
	vtkPointPicker *native = (vtkPointPicker *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseCellsOn();
}

