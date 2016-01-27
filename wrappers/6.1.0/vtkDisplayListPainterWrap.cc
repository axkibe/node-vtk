/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPainterWrap.h"
#include "vtkDisplayListPainterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationIntegerKeyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDisplayListPainterWrap::ptpl;

VtkDisplayListPainterWrap::VtkDisplayListPainterWrap()
{ }

VtkDisplayListPainterWrap::VtkDisplayListPainterWrap(vtkSmartPointer<vtkDisplayListPainter> _native)
{ native = _native; }

VtkDisplayListPainterWrap::~VtkDisplayListPainterWrap()
{ }

void VtkDisplayListPainterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDisplayListPainter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DisplayListPainter").ToLocalChecked(), ConstructorGetter);
}

void VtkDisplayListPainterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDisplayListPainterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPainterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPainterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDisplayListPainterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetTimeToDraw", GetTimeToDraw);
	Nan::SetPrototypeMethod(tpl, "getTimeToDraw", GetTimeToDraw);

	Nan::SetPrototypeMethod(tpl, "IMMEDIATE_MODE_RENDERING", IMMEDIATE_MODE_RENDERING);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkDisplayListPainterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDisplayListPainter> native = vtkSmartPointer<vtkDisplayListPainter>::New();
		VtkDisplayListPainterWrap* obj = new VtkDisplayListPainterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDisplayListPainterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDisplayListPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDisplayListPainterWrap>(info.Holder());
	vtkDisplayListPainter *native = (vtkDisplayListPainter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDisplayListPainterWrap::GetTimeToDraw(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDisplayListPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDisplayListPainterWrap>(info.Holder());
	vtkDisplayListPainter *native = (vtkDisplayListPainter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTimeToDraw();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDisplayListPainterWrap::IMMEDIATE_MODE_RENDERING(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDisplayListPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDisplayListPainterWrap>(info.Holder());
	vtkDisplayListPainter *native = (vtkDisplayListPainter *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IMMEDIATE_MODE_RENDERING();
		VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDisplayListPainterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDisplayListPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDisplayListPainterWrap>(info.Holder());
	vtkDisplayListPainter *native = (vtkDisplayListPainter *)wrapper->native.GetPointer();
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

void VtkDisplayListPainterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDisplayListPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDisplayListPainterWrap>(info.Holder());
	vtkDisplayListPainter *native = (vtkDisplayListPainter *)wrapper->native.GetPointer();
	vtkDisplayListPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDisplayListPainterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDisplayListPainterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDisplayListPainterWrap *w = new VtkDisplayListPainterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDisplayListPainterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDisplayListPainterWrap *wrapper = ObjectWrap::Unwrap<VtkDisplayListPainterWrap>(info.Holder());
	vtkDisplayListPainter *native = (vtkDisplayListPainter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDisplayListPainter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDisplayListPainterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDisplayListPainterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDisplayListPainterWrap *w = new VtkDisplayListPainterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

