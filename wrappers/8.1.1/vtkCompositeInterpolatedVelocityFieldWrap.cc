/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAbstractInterpolatedVelocityFieldWrap.h"
#include "vtkCompositeInterpolatedVelocityFieldWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCompositeInterpolatedVelocityFieldWrap::ptpl;

VtkCompositeInterpolatedVelocityFieldWrap::VtkCompositeInterpolatedVelocityFieldWrap()
{ }

VtkCompositeInterpolatedVelocityFieldWrap::VtkCompositeInterpolatedVelocityFieldWrap(vtkSmartPointer<vtkCompositeInterpolatedVelocityField> _native)
{ native = _native; }

VtkCompositeInterpolatedVelocityFieldWrap::~VtkCompositeInterpolatedVelocityFieldWrap()
{ }

void VtkCompositeInterpolatedVelocityFieldWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCompositeInterpolatedVelocityField").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CompositeInterpolatedVelocityField").ToLocalChecked(), ConstructorGetter);
}

void VtkCompositeInterpolatedVelocityFieldWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCompositeInterpolatedVelocityFieldWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractInterpolatedVelocityFieldWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractInterpolatedVelocityFieldWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCompositeInterpolatedVelocityFieldWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetLastDataSetIndex", GetLastDataSetIndex);
	Nan::SetPrototypeMethod(tpl, "getLastDataSetIndex", GetLastDataSetIndex);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKCOMPOSITEINTERPOLATEDVELOCITYFIELDWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCOMPOSITEINTERPOLATEDVELOCITYFIELDWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCompositeInterpolatedVelocityFieldWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkCompositeInterpolatedVelocityFieldWrap::GetLastDataSetIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCompositeInterpolatedVelocityField *native = (vtkCompositeInterpolatedVelocityField *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastDataSetIndex();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompositeInterpolatedVelocityFieldWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCompositeInterpolatedVelocityField *native = (vtkCompositeInterpolatedVelocityField *)wrapper->native.GetPointer();
	vtkCompositeInterpolatedVelocityField * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCompositeInterpolatedVelocityFieldWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositeInterpolatedVelocityFieldWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeInterpolatedVelocityFieldWrap *w = new VtkCompositeInterpolatedVelocityFieldWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeInterpolatedVelocityFieldWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeInterpolatedVelocityFieldWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeInterpolatedVelocityFieldWrap>(info.Holder());
	vtkCompositeInterpolatedVelocityField *native = (vtkCompositeInterpolatedVelocityField *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkCompositeInterpolatedVelocityField * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkCompositeInterpolatedVelocityFieldWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCompositeInterpolatedVelocityFieldWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCompositeInterpolatedVelocityFieldWrap *w = new VtkCompositeInterpolatedVelocityFieldWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

