/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkLinearExtrusionFilterWrap.h"
#include "vtkPLinearExtrusionFilterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPLinearExtrusionFilterWrap::ptpl;

VtkPLinearExtrusionFilterWrap::VtkPLinearExtrusionFilterWrap()
{ }

VtkPLinearExtrusionFilterWrap::VtkPLinearExtrusionFilterWrap(vtkSmartPointer<vtkPLinearExtrusionFilter> _native)
{ native = _native; }

VtkPLinearExtrusionFilterWrap::~VtkPLinearExtrusionFilterWrap()
{ }

void VtkPLinearExtrusionFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPLinearExtrusionFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PLinearExtrusionFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkPLinearExtrusionFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPLinearExtrusionFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkLinearExtrusionFilterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkLinearExtrusionFilterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPLinearExtrusionFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetPieceInvariant", GetPieceInvariant);
	Nan::SetPrototypeMethod(tpl, "getPieceInvariant", GetPieceInvariant);

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

#ifdef VTK_NODE_PLUS_VTKPLINEAREXTRUSIONFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPLINEAREXTRUSIONFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPLinearExtrusionFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPLinearExtrusionFilter> native = vtkSmartPointer<vtkPLinearExtrusionFilter>::New();
		VtkPLinearExtrusionFilterWrap* obj = new VtkPLinearExtrusionFilterWrap(native);
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

void VtkPLinearExtrusionFilterWrap::GetPieceInvariant(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPLinearExtrusionFilterWrap>(info.Holder());
	vtkPLinearExtrusionFilter *native = (vtkPLinearExtrusionFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPieceInvariant();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPLinearExtrusionFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPLinearExtrusionFilterWrap>(info.Holder());
	vtkPLinearExtrusionFilter *native = (vtkPLinearExtrusionFilter *)wrapper->native.GetPointer();
	vtkPLinearExtrusionFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPLinearExtrusionFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPLinearExtrusionFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPLinearExtrusionFilterWrap *w = new VtkPLinearExtrusionFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPLinearExtrusionFilterWrap::PieceInvariantOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPLinearExtrusionFilterWrap>(info.Holder());
	vtkPLinearExtrusionFilter *native = (vtkPLinearExtrusionFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PieceInvariantOff();
}

void VtkPLinearExtrusionFilterWrap::PieceInvariantOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPLinearExtrusionFilterWrap>(info.Holder());
	vtkPLinearExtrusionFilter *native = (vtkPLinearExtrusionFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PieceInvariantOn();
}

void VtkPLinearExtrusionFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPLinearExtrusionFilterWrap>(info.Holder());
	vtkPLinearExtrusionFilter *native = (vtkPLinearExtrusionFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPLinearExtrusionFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPLinearExtrusionFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPLinearExtrusionFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPLinearExtrusionFilterWrap *w = new VtkPLinearExtrusionFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPLinearExtrusionFilterWrap::SetPieceInvariant(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPLinearExtrusionFilterWrap>(info.Holder());
	vtkPLinearExtrusionFilter *native = (vtkPLinearExtrusionFilter *)wrapper->native.GetPointer();
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

