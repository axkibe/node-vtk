/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkVectorTextWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkVectorTextWrap::ptpl;

VtkVectorTextWrap::VtkVectorTextWrap()
{ }

VtkVectorTextWrap::VtkVectorTextWrap(vtkSmartPointer<vtkVectorText> _native)
{ native = _native; }

VtkVectorTextWrap::~VtkVectorTextWrap()
{ }

void VtkVectorTextWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkVectorText").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("VectorText").ToLocalChecked(), ConstructorGetter);
}

void VtkVectorTextWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkVectorTextWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkVectorTextWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetText", GetText);
	Nan::SetPrototypeMethod(tpl, "getText", GetText);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetText", SetText);
	Nan::SetPrototypeMethod(tpl, "setText", SetText);

	ptpl.Reset( tpl );
}

void VtkVectorTextWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkVectorText> native = vtkSmartPointer<vtkVectorText>::New();
		VtkVectorTextWrap* obj = new VtkVectorTextWrap(native);
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

void VtkVectorTextWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorTextWrap *wrapper = ObjectWrap::Unwrap<VtkVectorTextWrap>(info.Holder());
	vtkVectorText *native = (vtkVectorText *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVectorTextWrap::GetText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorTextWrap *wrapper = ObjectWrap::Unwrap<VtkVectorTextWrap>(info.Holder());
	vtkVectorText *native = (vtkVectorText *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetText();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVectorTextWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorTextWrap *wrapper = ObjectWrap::Unwrap<VtkVectorTextWrap>(info.Holder());
	vtkVectorText *native = (vtkVectorText *)wrapper->native.GetPointer();
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

void VtkVectorTextWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorTextWrap *wrapper = ObjectWrap::Unwrap<VtkVectorTextWrap>(info.Holder());
	vtkVectorText *native = (vtkVectorText *)wrapper->native.GetPointer();
	vtkVectorText * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkVectorTextWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVectorTextWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVectorTextWrap *w = new VtkVectorTextWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVectorTextWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorTextWrap *wrapper = ObjectWrap::Unwrap<VtkVectorTextWrap>(info.Holder());
	vtkVectorText *native = (vtkVectorText *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVectorText * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkVectorTextWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkVectorTextWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVectorTextWrap *w = new VtkVectorTextWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVectorTextWrap::SetText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorTextWrap *wrapper = ObjectWrap::Unwrap<VtkVectorTextWrap>(info.Holder());
	vtkVectorText *native = (vtkVectorText *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetText(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

