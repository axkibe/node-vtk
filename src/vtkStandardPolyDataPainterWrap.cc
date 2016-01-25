/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataPainterWrap.h"
#include "vtkStandardPolyDataPainterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkStandardPolyDataPainterWrap::constructor;

VtkStandardPolyDataPainterWrap::VtkStandardPolyDataPainterWrap()
{ }

VtkStandardPolyDataPainterWrap::VtkStandardPolyDataPainterWrap(vtkSmartPointer<vtkStandardPolyDataPainter> _native)
{ native = _native; }

VtkStandardPolyDataPainterWrap::~VtkStandardPolyDataPainterWrap()
{ }

void VtkStandardPolyDataPainterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkStandardPolyDataPainterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkPainterWrap::InitTpl(tpl);
	VtkPolyDataPainterWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkStandardPolyDataPainter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("StandardPolyDataPainter").ToLocalChecked(),tpl->GetFunction());
}

void VtkStandardPolyDataPainterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddMultiTextureCoordsArray", AddMultiTextureCoordsArray);
	Nan::SetPrototypeMethod(tpl, "addMultiTextureCoordsArray", AddMultiTextureCoordsArray);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkStandardPolyDataPainterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStandardPolyDataPainter> native = vtkSmartPointer<vtkStandardPolyDataPainter>::New();
		VtkStandardPolyDataPainterWrap* obj = new VtkStandardPolyDataPainterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkStandardPolyDataPainterWrap::AddMultiTextureCoordsArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStandardPolyDataPainterWrap *wrapper = ObjectWrap::Unwrap<VtkStandardPolyDataPainterWrap>(info.Holder());
	vtkStandardPolyDataPainter *native = (vtkStandardPolyDataPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddMultiTextureCoordsArray(
			(vtkDataArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStandardPolyDataPainterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStandardPolyDataPainterWrap *wrapper = ObjectWrap::Unwrap<VtkStandardPolyDataPainterWrap>(info.Holder());
	vtkStandardPolyDataPainter *native = (vtkStandardPolyDataPainter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStandardPolyDataPainterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStandardPolyDataPainterWrap *wrapper = ObjectWrap::Unwrap<VtkStandardPolyDataPainterWrap>(info.Holder());
	vtkStandardPolyDataPainter *native = (vtkStandardPolyDataPainter *)wrapper->native.GetPointer();
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

void VtkStandardPolyDataPainterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStandardPolyDataPainterWrap *wrapper = ObjectWrap::Unwrap<VtkStandardPolyDataPainterWrap>(info.Holder());
	vtkStandardPolyDataPainter *native = (vtkStandardPolyDataPainter *)wrapper->native.GetPointer();
	vtkStandardPolyDataPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkStandardPolyDataPainterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStandardPolyDataPainterWrap *w = new VtkStandardPolyDataPainterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStandardPolyDataPainterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStandardPolyDataPainterWrap *wrapper = ObjectWrap::Unwrap<VtkStandardPolyDataPainterWrap>(info.Holder());
	vtkStandardPolyDataPainter *native = (vtkStandardPolyDataPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStandardPolyDataPainter * r;
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
			Nan::New<v8::Function>(VtkStandardPolyDataPainterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStandardPolyDataPainterWrap *w = new VtkStandardPolyDataPainterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

