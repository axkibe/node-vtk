/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkHyperTreeGridAlgorithmWrap.h"
#include "vtkHyperTreeGridPlaneCutterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHyperTreeGridPlaneCutterWrap::ptpl;

VtkHyperTreeGridPlaneCutterWrap::VtkHyperTreeGridPlaneCutterWrap()
{ }

VtkHyperTreeGridPlaneCutterWrap::VtkHyperTreeGridPlaneCutterWrap(vtkSmartPointer<vtkHyperTreeGridPlaneCutter> _native)
{ native = _native; }

VtkHyperTreeGridPlaneCutterWrap::~VtkHyperTreeGridPlaneCutterWrap()
{ }

void VtkHyperTreeGridPlaneCutterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHyperTreeGridPlaneCutter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HyperTreeGridPlaneCutter").ToLocalChecked(), ConstructorGetter);
}

void VtkHyperTreeGridPlaneCutterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHyperTreeGridPlaneCutterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkHyperTreeGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkHyperTreeGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHyperTreeGridPlaneCutterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DualOff", DualOff);
	Nan::SetPrototypeMethod(tpl, "dualOff", DualOff);

	Nan::SetPrototypeMethod(tpl, "DualOn", DualOn);
	Nan::SetPrototypeMethod(tpl, "dualOn", DualOn);

	Nan::SetPrototypeMethod(tpl, "GetDual", GetDual);
	Nan::SetPrototypeMethod(tpl, "getDual", GetDual);

	Nan::SetPrototypeMethod(tpl, "GetPlane", GetPlane);
	Nan::SetPrototypeMethod(tpl, "getPlane", GetPlane);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDual", SetDual);
	Nan::SetPrototypeMethod(tpl, "setDual", SetDual);

	Nan::SetPrototypeMethod(tpl, "SetPlane", SetPlane);
	Nan::SetPrototypeMethod(tpl, "setPlane", SetPlane);

#ifdef VTK_NODE_PLUS_VTKHYPERTREEGRIDPLANECUTTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKHYPERTREEGRIDPLANECUTTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkHyperTreeGridPlaneCutterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHyperTreeGridPlaneCutter> native = vtkSmartPointer<vtkHyperTreeGridPlaneCutter>::New();
		VtkHyperTreeGridPlaneCutterWrap* obj = new VtkHyperTreeGridPlaneCutterWrap(native);
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

void VtkHyperTreeGridPlaneCutterWrap::DualOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridPlaneCutterWrap>(info.Holder());
	vtkHyperTreeGridPlaneCutter *native = (vtkHyperTreeGridPlaneCutter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DualOff();
}

void VtkHyperTreeGridPlaneCutterWrap::DualOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridPlaneCutterWrap>(info.Holder());
	vtkHyperTreeGridPlaneCutter *native = (vtkHyperTreeGridPlaneCutter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DualOn();
}

void VtkHyperTreeGridPlaneCutterWrap::GetDual(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridPlaneCutterWrap>(info.Holder());
	vtkHyperTreeGridPlaneCutter *native = (vtkHyperTreeGridPlaneCutter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDual();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperTreeGridPlaneCutterWrap::GetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridPlaneCutterWrap>(info.Holder());
	vtkHyperTreeGridPlaneCutter *native = (vtkHyperTreeGridPlaneCutter *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlane();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 4 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 4);
	memcpy(ab->GetContents().Data(), r, 4 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkHyperTreeGridPlaneCutterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridPlaneCutterWrap>(info.Holder());
	vtkHyperTreeGridPlaneCutter *native = (vtkHyperTreeGridPlaneCutter *)wrapper->native.GetPointer();
	vtkHyperTreeGridPlaneCutter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkHyperTreeGridPlaneCutterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHyperTreeGridPlaneCutterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperTreeGridPlaneCutterWrap *w = new VtkHyperTreeGridPlaneCutterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridPlaneCutterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridPlaneCutterWrap>(info.Holder());
	vtkHyperTreeGridPlaneCutter *native = (vtkHyperTreeGridPlaneCutter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkHyperTreeGridPlaneCutter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkHyperTreeGridPlaneCutterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHyperTreeGridPlaneCutterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperTreeGridPlaneCutterWrap *w = new VtkHyperTreeGridPlaneCutterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridPlaneCutterWrap::SetDual(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridPlaneCutterWrap>(info.Holder());
	vtkHyperTreeGridPlaneCutter *native = (vtkHyperTreeGridPlaneCutter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDual(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridPlaneCutterWrap::SetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridPlaneCutterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridPlaneCutterWrap>(info.Holder());
	vtkHyperTreeGridPlaneCutter *native = (vtkHyperTreeGridPlaneCutter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlane(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlane(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetPlane(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

