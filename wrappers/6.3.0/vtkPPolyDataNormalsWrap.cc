/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataNormalsWrap.h"
#include "vtkPPolyDataNormalsWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPPolyDataNormalsWrap::ptpl;

VtkPPolyDataNormalsWrap::VtkPPolyDataNormalsWrap()
{ }

VtkPPolyDataNormalsWrap::VtkPPolyDataNormalsWrap(vtkSmartPointer<vtkPPolyDataNormals> _native)
{ native = _native; }

VtkPPolyDataNormalsWrap::~VtkPPolyDataNormalsWrap()
{ }

void VtkPPolyDataNormalsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPPolyDataNormals").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PPolyDataNormals").ToLocalChecked(), ConstructorGetter);
}

void VtkPPolyDataNormalsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPPolyDataNormalsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataNormalsWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataNormalsWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPPolyDataNormalsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPieceInvariant", GetPieceInvariant);
	Nan::SetPrototypeMethod(tpl, "getPieceInvariant", GetPieceInvariant);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PieceInvariantOff", PieceInvariantOff);
	Nan::SetPrototypeMethod(tpl, "pieceInvariantOff", PieceInvariantOff);

	Nan::SetPrototypeMethod(tpl, "PieceInvariantOn", PieceInvariantOn);
	Nan::SetPrototypeMethod(tpl, "pieceInvariantOn", PieceInvariantOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPieceInvariant", SetPieceInvariant);
	Nan::SetPrototypeMethod(tpl, "setPieceInvariant", SetPieceInvariant);

#ifdef VTK_NODE_PLUS_VTKPPOLYDATANORMALSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPPOLYDATANORMALSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPPolyDataNormalsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPPolyDataNormals> native = vtkSmartPointer<vtkPPolyDataNormals>::New();
		VtkPPolyDataNormalsWrap* obj = new VtkPPolyDataNormalsWrap(native);
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

void VtkPPolyDataNormalsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPPolyDataNormalsWrap *wrapper = ObjectWrap::Unwrap<VtkPPolyDataNormalsWrap>(info.Holder());
	vtkPPolyDataNormals *native = (vtkPPolyDataNormals *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPPolyDataNormalsWrap::GetPieceInvariant(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPPolyDataNormalsWrap *wrapper = ObjectWrap::Unwrap<VtkPPolyDataNormalsWrap>(info.Holder());
	vtkPPolyDataNormals *native = (vtkPPolyDataNormals *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPieceInvariant();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPPolyDataNormalsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPPolyDataNormalsWrap *wrapper = ObjectWrap::Unwrap<VtkPPolyDataNormalsWrap>(info.Holder());
	vtkPPolyDataNormals *native = (vtkPPolyDataNormals *)wrapper->native.GetPointer();
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

void VtkPPolyDataNormalsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPPolyDataNormalsWrap *wrapper = ObjectWrap::Unwrap<VtkPPolyDataNormalsWrap>(info.Holder());
	vtkPPolyDataNormals *native = (vtkPPolyDataNormals *)wrapper->native.GetPointer();
	vtkPPolyDataNormals * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPPolyDataNormalsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPPolyDataNormalsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPPolyDataNormalsWrap *w = new VtkPPolyDataNormalsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPPolyDataNormalsWrap::PieceInvariantOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPPolyDataNormalsWrap *wrapper = ObjectWrap::Unwrap<VtkPPolyDataNormalsWrap>(info.Holder());
	vtkPPolyDataNormals *native = (vtkPPolyDataNormals *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PieceInvariantOff();
}

void VtkPPolyDataNormalsWrap::PieceInvariantOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPPolyDataNormalsWrap *wrapper = ObjectWrap::Unwrap<VtkPPolyDataNormalsWrap>(info.Holder());
	vtkPPolyDataNormals *native = (vtkPPolyDataNormals *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PieceInvariantOn();
}

void VtkPPolyDataNormalsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPPolyDataNormalsWrap *wrapper = ObjectWrap::Unwrap<VtkPPolyDataNormalsWrap>(info.Holder());
	vtkPPolyDataNormals *native = (vtkPPolyDataNormals *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPPolyDataNormals * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkPPolyDataNormalsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPPolyDataNormalsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPPolyDataNormalsWrap *w = new VtkPPolyDataNormalsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPPolyDataNormalsWrap::SetPieceInvariant(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPPolyDataNormalsWrap *wrapper = ObjectWrap::Unwrap<VtkPPolyDataNormalsWrap>(info.Holder());
	vtkPPolyDataNormals *native = (vtkPPolyDataNormals *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPieceInvariant(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

