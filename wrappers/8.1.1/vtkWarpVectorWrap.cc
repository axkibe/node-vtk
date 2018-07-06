/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPointSetAlgorithmWrap.h"
#include "vtkWarpVectorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkInformationWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkWarpVectorWrap::ptpl;

VtkWarpVectorWrap::VtkWarpVectorWrap()
{ }

VtkWarpVectorWrap::VtkWarpVectorWrap(vtkSmartPointer<vtkWarpVector> _native)
{ native = _native; }

VtkWarpVectorWrap::~VtkWarpVectorWrap()
{ }

void VtkWarpVectorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkWarpVector").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("WarpVector").ToLocalChecked(), ConstructorGetter);
}

void VtkWarpVectorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkWarpVectorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkWarpVectorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "FillInputPortInformation", FillInputPortInformation);
	Nan::SetPrototypeMethod(tpl, "fillInputPortInformation", FillInputPortInformation);

	Nan::SetPrototypeMethod(tpl, "GetScaleFactor", GetScaleFactor);
	Nan::SetPrototypeMethod(tpl, "getScaleFactor", GetScaleFactor);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetScaleFactor", SetScaleFactor);
	Nan::SetPrototypeMethod(tpl, "setScaleFactor", SetScaleFactor);

#ifdef VTK_NODE_PLUS_VTKWARPVECTORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKWARPVECTORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkWarpVectorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkWarpVector> native = vtkSmartPointer<vtkWarpVector>::New();
		VtkWarpVectorWrap* obj = new VtkWarpVectorWrap(native);
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

void VtkWarpVectorWrap::FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWarpVectorWrap *wrapper = ObjectWrap::Unwrap<VtkWarpVectorWrap>(info.Holder());
	vtkWarpVector *native = (vtkWarpVector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->FillInputPortInformation(
				info[0]->Int32Value(),
				(vtkInformation *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWarpVectorWrap::GetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWarpVectorWrap *wrapper = ObjectWrap::Unwrap<VtkWarpVectorWrap>(info.Holder());
	vtkWarpVector *native = (vtkWarpVector *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWarpVectorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWarpVectorWrap *wrapper = ObjectWrap::Unwrap<VtkWarpVectorWrap>(info.Holder());
	vtkWarpVector *native = (vtkWarpVector *)wrapper->native.GetPointer();
	vtkWarpVector * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkWarpVectorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkWarpVectorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkWarpVectorWrap *w = new VtkWarpVectorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWarpVectorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWarpVectorWrap *wrapper = ObjectWrap::Unwrap<VtkWarpVectorWrap>(info.Holder());
	vtkWarpVector *native = (vtkWarpVector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkWarpVector * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkWarpVectorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkWarpVectorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkWarpVectorWrap *w = new VtkWarpVectorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWarpVectorWrap::SetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWarpVectorWrap *wrapper = ObjectWrap::Unwrap<VtkWarpVectorWrap>(info.Holder());
	vtkWarpVector *native = (vtkWarpVector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScaleFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
