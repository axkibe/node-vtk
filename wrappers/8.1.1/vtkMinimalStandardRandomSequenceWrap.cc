/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkRandomSequenceWrap.h"
#include "vtkMinimalStandardRandomSequenceWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMinimalStandardRandomSequenceWrap::ptpl;

VtkMinimalStandardRandomSequenceWrap::VtkMinimalStandardRandomSequenceWrap()
{ }

VtkMinimalStandardRandomSequenceWrap::VtkMinimalStandardRandomSequenceWrap(vtkSmartPointer<vtkMinimalStandardRandomSequence> _native)
{ native = _native; }

VtkMinimalStandardRandomSequenceWrap::~VtkMinimalStandardRandomSequenceWrap()
{ }

void VtkMinimalStandardRandomSequenceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMinimalStandardRandomSequence").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MinimalStandardRandomSequence").ToLocalChecked(), ConstructorGetter);
}

void VtkMinimalStandardRandomSequenceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMinimalStandardRandomSequenceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRandomSequenceWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRandomSequenceWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMinimalStandardRandomSequenceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetRangeValue", GetRangeValue);
	Nan::SetPrototypeMethod(tpl, "getRangeValue", GetRangeValue);

	Nan::SetPrototypeMethod(tpl, "GetSeed", GetSeed);
	Nan::SetPrototypeMethod(tpl, "getSeed", GetSeed);

	Nan::SetPrototypeMethod(tpl, "GetValue", GetValue);
	Nan::SetPrototypeMethod(tpl, "getValue", GetValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Next", Next);
	Nan::SetPrototypeMethod(tpl, "next", Next);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetSeed", SetSeed);
	Nan::SetPrototypeMethod(tpl, "setSeed", SetSeed);

	Nan::SetPrototypeMethod(tpl, "SetSeedOnly", SetSeedOnly);
	Nan::SetPrototypeMethod(tpl, "setSeedOnly", SetSeedOnly);

#ifdef VTK_NODE_PLUS_VTKMINIMALSTANDARDRANDOMSEQUENCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKMINIMALSTANDARDRANDOMSEQUENCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkMinimalStandardRandomSequenceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMinimalStandardRandomSequence> native = vtkSmartPointer<vtkMinimalStandardRandomSequence>::New();
		VtkMinimalStandardRandomSequenceWrap* obj = new VtkMinimalStandardRandomSequenceWrap(native);
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

void VtkMinimalStandardRandomSequenceWrap::GetRangeValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMinimalStandardRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkMinimalStandardRandomSequenceWrap>(info.Holder());
	vtkMinimalStandardRandomSequence *native = (vtkMinimalStandardRandomSequence *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			double r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetRangeValue(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMinimalStandardRandomSequenceWrap::GetSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMinimalStandardRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkMinimalStandardRandomSequenceWrap>(info.Holder());
	vtkMinimalStandardRandomSequence *native = (vtkMinimalStandardRandomSequence *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSeed();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMinimalStandardRandomSequenceWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMinimalStandardRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkMinimalStandardRandomSequenceWrap>(info.Holder());
	vtkMinimalStandardRandomSequence *native = (vtkMinimalStandardRandomSequence *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMinimalStandardRandomSequenceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMinimalStandardRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkMinimalStandardRandomSequenceWrap>(info.Holder());
	vtkMinimalStandardRandomSequence *native = (vtkMinimalStandardRandomSequence *)wrapper->native.GetPointer();
	vtkMinimalStandardRandomSequence * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkMinimalStandardRandomSequenceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMinimalStandardRandomSequenceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMinimalStandardRandomSequenceWrap *w = new VtkMinimalStandardRandomSequenceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMinimalStandardRandomSequenceWrap::Next(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMinimalStandardRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkMinimalStandardRandomSequenceWrap>(info.Holder());
	vtkMinimalStandardRandomSequence *native = (vtkMinimalStandardRandomSequence *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Next();
}

void VtkMinimalStandardRandomSequenceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMinimalStandardRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkMinimalStandardRandomSequenceWrap>(info.Holder());
	vtkMinimalStandardRandomSequence *native = (vtkMinimalStandardRandomSequence *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkMinimalStandardRandomSequence * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkMinimalStandardRandomSequenceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMinimalStandardRandomSequenceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMinimalStandardRandomSequenceWrap *w = new VtkMinimalStandardRandomSequenceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMinimalStandardRandomSequenceWrap::SetSeed(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMinimalStandardRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkMinimalStandardRandomSequenceWrap>(info.Holder());
	vtkMinimalStandardRandomSequence *native = (vtkMinimalStandardRandomSequence *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSeed(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMinimalStandardRandomSequenceWrap::SetSeedOnly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMinimalStandardRandomSequenceWrap *wrapper = ObjectWrap::Unwrap<VtkMinimalStandardRandomSequenceWrap>(info.Holder());
	vtkMinimalStandardRandomSequence *native = (vtkMinimalStandardRandomSequence *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSeedOnly(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

