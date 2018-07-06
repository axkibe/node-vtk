/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkLinearExtrusionFilterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkLinearExtrusionFilterWrap::ptpl;

VtkLinearExtrusionFilterWrap::VtkLinearExtrusionFilterWrap()
{ }

VtkLinearExtrusionFilterWrap::VtkLinearExtrusionFilterWrap(vtkSmartPointer<vtkLinearExtrusionFilter> _native)
{ native = _native; }

VtkLinearExtrusionFilterWrap::~VtkLinearExtrusionFilterWrap()
{ }

void VtkLinearExtrusionFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkLinearExtrusionFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("LinearExtrusionFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkLinearExtrusionFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkLinearExtrusionFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkLinearExtrusionFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CappingOff", CappingOff);
	Nan::SetPrototypeMethod(tpl, "cappingOff", CappingOff);

	Nan::SetPrototypeMethod(tpl, "CappingOn", CappingOn);
	Nan::SetPrototypeMethod(tpl, "cappingOn", CappingOn);

	Nan::SetPrototypeMethod(tpl, "GetCapping", GetCapping);
	Nan::SetPrototypeMethod(tpl, "getCapping", GetCapping);

	Nan::SetPrototypeMethod(tpl, "GetExtrusionPoint", GetExtrusionPoint);
	Nan::SetPrototypeMethod(tpl, "getExtrusionPoint", GetExtrusionPoint);

	Nan::SetPrototypeMethod(tpl, "GetExtrusionType", GetExtrusionType);
	Nan::SetPrototypeMethod(tpl, "getExtrusionType", GetExtrusionType);

	Nan::SetPrototypeMethod(tpl, "GetExtrusionTypeMaxValue", GetExtrusionTypeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getExtrusionTypeMaxValue", GetExtrusionTypeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetExtrusionTypeMinValue", GetExtrusionTypeMinValue);
	Nan::SetPrototypeMethod(tpl, "getExtrusionTypeMinValue", GetExtrusionTypeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetScaleFactor", GetScaleFactor);
	Nan::SetPrototypeMethod(tpl, "getScaleFactor", GetScaleFactor);

	Nan::SetPrototypeMethod(tpl, "GetVector", GetVector);
	Nan::SetPrototypeMethod(tpl, "getVector", GetVector);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCapping", SetCapping);
	Nan::SetPrototypeMethod(tpl, "setCapping", SetCapping);

	Nan::SetPrototypeMethod(tpl, "SetExtrusionPoint", SetExtrusionPoint);
	Nan::SetPrototypeMethod(tpl, "setExtrusionPoint", SetExtrusionPoint);

	Nan::SetPrototypeMethod(tpl, "SetExtrusionType", SetExtrusionType);
	Nan::SetPrototypeMethod(tpl, "setExtrusionType", SetExtrusionType);

	Nan::SetPrototypeMethod(tpl, "SetExtrusionTypeToNormalExtrusion", SetExtrusionTypeToNormalExtrusion);
	Nan::SetPrototypeMethod(tpl, "setExtrusionTypeToNormalExtrusion", SetExtrusionTypeToNormalExtrusion);

	Nan::SetPrototypeMethod(tpl, "SetExtrusionTypeToPointExtrusion", SetExtrusionTypeToPointExtrusion);
	Nan::SetPrototypeMethod(tpl, "setExtrusionTypeToPointExtrusion", SetExtrusionTypeToPointExtrusion);

	Nan::SetPrototypeMethod(tpl, "SetExtrusionTypeToVectorExtrusion", SetExtrusionTypeToVectorExtrusion);
	Nan::SetPrototypeMethod(tpl, "setExtrusionTypeToVectorExtrusion", SetExtrusionTypeToVectorExtrusion);

	Nan::SetPrototypeMethod(tpl, "SetScaleFactor", SetScaleFactor);
	Nan::SetPrototypeMethod(tpl, "setScaleFactor", SetScaleFactor);

	Nan::SetPrototypeMethod(tpl, "SetVector", SetVector);
	Nan::SetPrototypeMethod(tpl, "setVector", SetVector);

#ifdef VTK_NODE_PLUS_VTKLINEAREXTRUSIONFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKLINEAREXTRUSIONFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkLinearExtrusionFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLinearExtrusionFilter> native = vtkSmartPointer<vtkLinearExtrusionFilter>::New();
		VtkLinearExtrusionFilterWrap* obj = new VtkLinearExtrusionFilterWrap(native);
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

void VtkLinearExtrusionFilterWrap::CappingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CappingOff();
}

void VtkLinearExtrusionFilterWrap::CappingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CappingOn();
}

void VtkLinearExtrusionFilterWrap::GetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCapping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLinearExtrusionFilterWrap::GetExtrusionPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtrusionPoint();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkLinearExtrusionFilterWrap::GetExtrusionType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtrusionType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLinearExtrusionFilterWrap::GetExtrusionTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtrusionTypeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLinearExtrusionFilterWrap::GetExtrusionTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtrusionTypeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLinearExtrusionFilterWrap::GetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLinearExtrusionFilterWrap::GetVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVector();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkLinearExtrusionFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
	vtkLinearExtrusionFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkLinearExtrusionFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLinearExtrusionFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLinearExtrusionFilterWrap *w = new VtkLinearExtrusionFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLinearExtrusionFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkLinearExtrusionFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkLinearExtrusionFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkLinearExtrusionFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLinearExtrusionFilterWrap *w = new VtkLinearExtrusionFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLinearExtrusionFilterWrap::SetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCapping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLinearExtrusionFilterWrap::SetExtrusionPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExtrusionPoint(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->SetExtrusionPoint(
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
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetExtrusionPoint(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLinearExtrusionFilterWrap::SetExtrusionType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExtrusionType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLinearExtrusionFilterWrap::SetExtrusionTypeToNormalExtrusion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetExtrusionTypeToNormalExtrusion();
}

void VtkLinearExtrusionFilterWrap::SetExtrusionTypeToPointExtrusion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetExtrusionTypeToPointExtrusion();
}

void VtkLinearExtrusionFilterWrap::SetExtrusionTypeToVectorExtrusion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetExtrusionTypeToVectorExtrusion();
}

void VtkLinearExtrusionFilterWrap::SetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
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

void VtkLinearExtrusionFilterWrap::SetVector(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearExtrusionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkLinearExtrusionFilterWrap>(info.Holder());
	vtkLinearExtrusionFilter *native = (vtkLinearExtrusionFilter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVector(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->SetVector(
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
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetVector(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

