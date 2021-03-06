/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "vtkPieceScalarsWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPieceScalarsWrap::ptpl;

VtkPieceScalarsWrap::VtkPieceScalarsWrap()
{ }

VtkPieceScalarsWrap::VtkPieceScalarsWrap(vtkSmartPointer<vtkPieceScalars> _native)
{ native = _native; }

VtkPieceScalarsWrap::~VtkPieceScalarsWrap()
{ }

void VtkPieceScalarsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPieceScalars").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PieceScalars").ToLocalChecked(), ConstructorGetter);
}

void VtkPieceScalarsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPieceScalarsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPieceScalarsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetRandomMode", GetRandomMode);
	Nan::SetPrototypeMethod(tpl, "getRandomMode", GetRandomMode);

	Nan::SetPrototypeMethod(tpl, "GetScalarMode", GetScalarMode);
	Nan::SetPrototypeMethod(tpl, "getScalarMode", GetScalarMode);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RandomModeOff", RandomModeOff);
	Nan::SetPrototypeMethod(tpl, "randomModeOff", RandomModeOff);

	Nan::SetPrototypeMethod(tpl, "RandomModeOn", RandomModeOn);
	Nan::SetPrototypeMethod(tpl, "randomModeOn", RandomModeOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetRandomMode", SetRandomMode);
	Nan::SetPrototypeMethod(tpl, "setRandomMode", SetRandomMode);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToCellData", SetScalarModeToCellData);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToCellData", SetScalarModeToCellData);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToPointData", SetScalarModeToPointData);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToPointData", SetScalarModeToPointData);

#ifdef VTK_NODE_PLUS_VTKPIECESCALARSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPIECESCALARSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPieceScalarsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPieceScalars> native = vtkSmartPointer<vtkPieceScalars>::New();
		VtkPieceScalarsWrap* obj = new VtkPieceScalarsWrap(native);
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

void VtkPieceScalarsWrap::GetRandomMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPieceScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkPieceScalarsWrap>(info.Holder());
	vtkPieceScalars *native = (vtkPieceScalars *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRandomMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPieceScalarsWrap::GetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPieceScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkPieceScalarsWrap>(info.Holder());
	vtkPieceScalars *native = (vtkPieceScalars *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPieceScalarsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPieceScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkPieceScalarsWrap>(info.Holder());
	vtkPieceScalars *native = (vtkPieceScalars *)wrapper->native.GetPointer();
	vtkPieceScalars * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPieceScalarsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPieceScalarsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPieceScalarsWrap *w = new VtkPieceScalarsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPieceScalarsWrap::RandomModeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPieceScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkPieceScalarsWrap>(info.Holder());
	vtkPieceScalars *native = (vtkPieceScalars *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RandomModeOff();
}

void VtkPieceScalarsWrap::RandomModeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPieceScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkPieceScalarsWrap>(info.Holder());
	vtkPieceScalars *native = (vtkPieceScalars *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RandomModeOn();
}

void VtkPieceScalarsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPieceScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkPieceScalarsWrap>(info.Holder());
	vtkPieceScalars *native = (vtkPieceScalars *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPieceScalars * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPieceScalarsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPieceScalarsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPieceScalarsWrap *w = new VtkPieceScalarsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPieceScalarsWrap::SetRandomMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPieceScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkPieceScalarsWrap>(info.Holder());
	vtkPieceScalars *native = (vtkPieceScalars *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRandomMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPieceScalarsWrap::SetScalarModeToCellData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPieceScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkPieceScalarsWrap>(info.Holder());
	vtkPieceScalars *native = (vtkPieceScalars *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToCellData();
}

void VtkPieceScalarsWrap::SetScalarModeToPointData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPieceScalarsWrap *wrapper = ObjectWrap::Unwrap<VtkPieceScalarsWrap>(info.Holder());
	vtkPieceScalars *native = (vtkPieceScalars *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToPointData();
}

