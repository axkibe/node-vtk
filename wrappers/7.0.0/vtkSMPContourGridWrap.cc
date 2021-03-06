/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkContourGridWrap.h"
#include "vtkSMPContourGridWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSMPContourGridWrap::ptpl;

VtkSMPContourGridWrap::VtkSMPContourGridWrap()
{ }

VtkSMPContourGridWrap::VtkSMPContourGridWrap(vtkSmartPointer<vtkSMPContourGrid> _native)
{ native = _native; }

VtkSMPContourGridWrap::~VtkSMPContourGridWrap()
{ }

void VtkSMPContourGridWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSMPContourGrid").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SMPContourGrid").ToLocalChecked(), ConstructorGetter);
}

void VtkSMPContourGridWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSMPContourGridWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContourGridWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContourGridWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSMPContourGridWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMergePieces", GetMergePieces);
	Nan::SetPrototypeMethod(tpl, "getMergePieces", GetMergePieces);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MergePiecesOff", MergePiecesOff);
	Nan::SetPrototypeMethod(tpl, "mergePiecesOff", MergePiecesOff);

	Nan::SetPrototypeMethod(tpl, "MergePiecesOn", MergePiecesOn);
	Nan::SetPrototypeMethod(tpl, "mergePiecesOn", MergePiecesOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMergePieces", SetMergePieces);
	Nan::SetPrototypeMethod(tpl, "setMergePieces", SetMergePieces);

#ifdef VTK_NODE_PLUS_VTKSMPCONTOURGRIDWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSMPCONTOURGRIDWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSMPContourGridWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSMPContourGrid> native = vtkSmartPointer<vtkSMPContourGrid>::New();
		VtkSMPContourGridWrap* obj = new VtkSMPContourGridWrap(native);
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

void VtkSMPContourGridWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkSMPContourGridWrap>(info.Holder());
	vtkSMPContourGrid *native = (vtkSMPContourGrid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSMPContourGridWrap::GetMergePieces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkSMPContourGridWrap>(info.Holder());
	vtkSMPContourGrid *native = (vtkSMPContourGrid *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMergePieces();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSMPContourGridWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkSMPContourGridWrap>(info.Holder());
	vtkSMPContourGrid *native = (vtkSMPContourGrid *)wrapper->native.GetPointer();
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

void VtkSMPContourGridWrap::MergePiecesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkSMPContourGridWrap>(info.Holder());
	vtkSMPContourGrid *native = (vtkSMPContourGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MergePiecesOff();
}

void VtkSMPContourGridWrap::MergePiecesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkSMPContourGridWrap>(info.Holder());
	vtkSMPContourGrid *native = (vtkSMPContourGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MergePiecesOn();
}

void VtkSMPContourGridWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkSMPContourGridWrap>(info.Holder());
	vtkSMPContourGrid *native = (vtkSMPContourGrid *)wrapper->native.GetPointer();
	vtkSMPContourGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSMPContourGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSMPContourGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSMPContourGridWrap *w = new VtkSMPContourGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSMPContourGridWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkSMPContourGridWrap>(info.Holder());
	vtkSMPContourGrid *native = (vtkSMPContourGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSMPContourGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSMPContourGridWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSMPContourGridWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSMPContourGridWrap *w = new VtkSMPContourGridWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSMPContourGridWrap::SetMergePieces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkSMPContourGridWrap>(info.Holder());
	vtkSMPContourGrid *native = (vtkSMPContourGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMergePieces(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

