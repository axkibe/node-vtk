/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "vtkVectorDotWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkVectorDotWrap::ptpl;

VtkVectorDotWrap::VtkVectorDotWrap()
{ }

VtkVectorDotWrap::VtkVectorDotWrap(vtkSmartPointer<vtkVectorDot> _native)
{ native = _native; }

VtkVectorDotWrap::~VtkVectorDotWrap()
{ }

void VtkVectorDotWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkVectorDot").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("VectorDot").ToLocalChecked(), ConstructorGetter);
}

void VtkVectorDotWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkVectorDotWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkVectorDotWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetActualRange", GetActualRange);
	Nan::SetPrototypeMethod(tpl, "getActualRange", GetActualRange);

	Nan::SetPrototypeMethod(tpl, "GetMapScalars", GetMapScalars);
	Nan::SetPrototypeMethod(tpl, "getMapScalars", GetMapScalars);

	Nan::SetPrototypeMethod(tpl, "GetScalarRange", GetScalarRange);
	Nan::SetPrototypeMethod(tpl, "getScalarRange", GetScalarRange);

	Nan::SetPrototypeMethod(tpl, "MapScalarsOff", MapScalarsOff);
	Nan::SetPrototypeMethod(tpl, "mapScalarsOff", MapScalarsOff);

	Nan::SetPrototypeMethod(tpl, "MapScalarsOn", MapScalarsOn);
	Nan::SetPrototypeMethod(tpl, "mapScalarsOn", MapScalarsOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMapScalars", SetMapScalars);
	Nan::SetPrototypeMethod(tpl, "setMapScalars", SetMapScalars);

	Nan::SetPrototypeMethod(tpl, "SetScalarRange", SetScalarRange);
	Nan::SetPrototypeMethod(tpl, "setScalarRange", SetScalarRange);

#ifdef VTK_NODE_PLUS_VTKVECTORDOTWRAP_INITPTPL
	VTK_NODE_PLUS_VTKVECTORDOTWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkVectorDotWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkVectorDot> native = vtkSmartPointer<vtkVectorDot>::New();
		VtkVectorDotWrap* obj = new VtkVectorDotWrap(native);
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

void VtkVectorDotWrap::GetActualRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorDotWrap *wrapper = ObjectWrap::Unwrap<VtkVectorDotWrap>(info.Holder());
	vtkVectorDot *native = (vtkVectorDot *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActualRange();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkVectorDotWrap::GetMapScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorDotWrap *wrapper = ObjectWrap::Unwrap<VtkVectorDotWrap>(info.Holder());
	vtkVectorDot *native = (vtkVectorDot *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMapScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVectorDotWrap::GetScalarRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorDotWrap *wrapper = ObjectWrap::Unwrap<VtkVectorDotWrap>(info.Holder());
	vtkVectorDot *native = (vtkVectorDot *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarRange();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkVectorDotWrap::MapScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorDotWrap *wrapper = ObjectWrap::Unwrap<VtkVectorDotWrap>(info.Holder());
	vtkVectorDot *native = (vtkVectorDot *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MapScalarsOff();
}

void VtkVectorDotWrap::MapScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorDotWrap *wrapper = ObjectWrap::Unwrap<VtkVectorDotWrap>(info.Holder());
	vtkVectorDot *native = (vtkVectorDot *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MapScalarsOn();
}

void VtkVectorDotWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorDotWrap *wrapper = ObjectWrap::Unwrap<VtkVectorDotWrap>(info.Holder());
	vtkVectorDot *native = (vtkVectorDot *)wrapper->native.GetPointer();
	vtkVectorDot * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkVectorDotWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVectorDotWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVectorDotWrap *w = new VtkVectorDotWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVectorDotWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorDotWrap *wrapper = ObjectWrap::Unwrap<VtkVectorDotWrap>(info.Holder());
	vtkVectorDot *native = (vtkVectorDot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkVectorDot * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkVectorDotWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkVectorDotWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVectorDotWrap *w = new VtkVectorDotWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVectorDotWrap::SetMapScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorDotWrap *wrapper = ObjectWrap::Unwrap<VtkVectorDotWrap>(info.Holder());
	vtkVectorDot *native = (vtkVectorDot *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMapScalars(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVectorDotWrap::SetScalarRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVectorDotWrap *wrapper = ObjectWrap::Unwrap<VtkVectorDotWrap>(info.Holder());
	vtkVectorDot *native = (vtkVectorDot *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarRange(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->SetScalarRange(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetScalarRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

