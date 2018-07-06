/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkScalarsToColorsItemWrap.h"
#include "vtkPiecewiseFunctionItemWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkPiecewiseFunctionWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPiecewiseFunctionItemWrap::ptpl;

VtkPiecewiseFunctionItemWrap::VtkPiecewiseFunctionItemWrap()
{ }

VtkPiecewiseFunctionItemWrap::VtkPiecewiseFunctionItemWrap(vtkSmartPointer<vtkPiecewiseFunctionItem> _native)
{ native = _native; }

VtkPiecewiseFunctionItemWrap::~VtkPiecewiseFunctionItemWrap()
{ }

void VtkPiecewiseFunctionItemWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPiecewiseFunctionItem").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PiecewiseFunctionItem").ToLocalChecked(), ConstructorGetter);
}

void VtkPiecewiseFunctionItemWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPiecewiseFunctionItemWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkScalarsToColorsItemWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkScalarsToColorsItemWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPiecewiseFunctionItemWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetPiecewiseFunction", GetPiecewiseFunction);
	Nan::SetPrototypeMethod(tpl, "getPiecewiseFunction", GetPiecewiseFunction);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPiecewiseFunction", SetPiecewiseFunction);
	Nan::SetPrototypeMethod(tpl, "setPiecewiseFunction", SetPiecewiseFunction);

#ifdef VTK_NODE_PLUS_VTKPIECEWISEFUNCTIONITEMWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPIECEWISEFUNCTIONITEMWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPiecewiseFunctionItemWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPiecewiseFunctionItem> native = vtkSmartPointer<vtkPiecewiseFunctionItem>::New();
		VtkPiecewiseFunctionItemWrap* obj = new VtkPiecewiseFunctionItemWrap(native);
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

void VtkPiecewiseFunctionItemWrap::GetPiecewiseFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseFunctionItemWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseFunctionItemWrap>(info.Holder());
	vtkPiecewiseFunctionItem *native = (vtkPiecewiseFunctionItem *)wrapper->native.GetPointer();
	vtkPiecewiseFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPiecewiseFunction();
	VtkPiecewiseFunctionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPiecewiseFunctionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPiecewiseFunctionWrap *w = new VtkPiecewiseFunctionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPiecewiseFunctionItemWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseFunctionItemWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseFunctionItemWrap>(info.Holder());
	vtkPiecewiseFunctionItem *native = (vtkPiecewiseFunctionItem *)wrapper->native.GetPointer();
	vtkPiecewiseFunctionItem * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPiecewiseFunctionItemWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPiecewiseFunctionItemWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPiecewiseFunctionItemWrap *w = new VtkPiecewiseFunctionItemWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPiecewiseFunctionItemWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseFunctionItemWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseFunctionItemWrap>(info.Holder());
	vtkPiecewiseFunctionItem *native = (vtkPiecewiseFunctionItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPiecewiseFunctionItem * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPiecewiseFunctionItemWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPiecewiseFunctionItemWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPiecewiseFunctionItemWrap *w = new VtkPiecewiseFunctionItemWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPiecewiseFunctionItemWrap::SetPiecewiseFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPiecewiseFunctionItemWrap *wrapper = ObjectWrap::Unwrap<VtkPiecewiseFunctionItemWrap>(info.Holder());
	vtkPiecewiseFunctionItem *native = (vtkPiecewiseFunctionItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPiecewiseFunctionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPiecewiseFunctionWrap *a0 = ObjectWrap::Unwrap<VtkPiecewiseFunctionWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPiecewiseFunction(
			(vtkPiecewiseFunction *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

