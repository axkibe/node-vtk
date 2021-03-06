/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkHyperTreeGridAlgorithmWrap.h"
#include "vtkHyperTreeGridAxisClipWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkQuadricWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHyperTreeGridAxisClipWrap::ptpl;

VtkHyperTreeGridAxisClipWrap::VtkHyperTreeGridAxisClipWrap()
{ }

VtkHyperTreeGridAxisClipWrap::VtkHyperTreeGridAxisClipWrap(vtkSmartPointer<vtkHyperTreeGridAxisClip> _native)
{ native = _native; }

VtkHyperTreeGridAxisClipWrap::~VtkHyperTreeGridAxisClipWrap()
{ }

void VtkHyperTreeGridAxisClipWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHyperTreeGridAxisClip").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HyperTreeGridAxisClip").ToLocalChecked(), ConstructorGetter);
}

void VtkHyperTreeGridAxisClipWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHyperTreeGridAxisClipWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkHyperTreeGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkHyperTreeGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHyperTreeGridAxisClipWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetClipType", GetClipType);
	Nan::SetPrototypeMethod(tpl, "getClipType", GetClipType);

	Nan::SetPrototypeMethod(tpl, "GetClipTypeMaxValue", GetClipTypeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getClipTypeMaxValue", GetClipTypeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetClipTypeMinValue", GetClipTypeMinValue);
	Nan::SetPrototypeMethod(tpl, "getClipTypeMinValue", GetClipTypeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetInsideOut", GetInsideOut);
	Nan::SetPrototypeMethod(tpl, "getInsideOut", GetInsideOut);

	Nan::SetPrototypeMethod(tpl, "GetMaximumBounds", GetMaximumBounds);
	Nan::SetPrototypeMethod(tpl, "getMaximumBounds", GetMaximumBounds);

	Nan::SetPrototypeMethod(tpl, "GetMinimumBounds", GetMinimumBounds);
	Nan::SetPrototypeMethod(tpl, "getMinimumBounds", GetMinimumBounds);

	Nan::SetPrototypeMethod(tpl, "GetPlaneNormalAxis", GetPlaneNormalAxis);
	Nan::SetPrototypeMethod(tpl, "getPlaneNormalAxis", GetPlaneNormalAxis);

	Nan::SetPrototypeMethod(tpl, "GetPlaneNormalAxisMaxValue", GetPlaneNormalAxisMaxValue);
	Nan::SetPrototypeMethod(tpl, "getPlaneNormalAxisMaxValue", GetPlaneNormalAxisMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetPlaneNormalAxisMinValue", GetPlaneNormalAxisMinValue);
	Nan::SetPrototypeMethod(tpl, "getPlaneNormalAxisMinValue", GetPlaneNormalAxisMinValue);

	Nan::SetPrototypeMethod(tpl, "GetPlanePosition", GetPlanePosition);
	Nan::SetPrototypeMethod(tpl, "getPlanePosition", GetPlanePosition);

	Nan::SetPrototypeMethod(tpl, "GetQuadric", GetQuadric);
	Nan::SetPrototypeMethod(tpl, "getQuadric", GetQuadric);

	Nan::SetPrototypeMethod(tpl, "GetQuadricCoefficients", GetQuadricCoefficients);
	Nan::SetPrototypeMethod(tpl, "getQuadricCoefficients", GetQuadricCoefficients);

	Nan::SetPrototypeMethod(tpl, "InsideOutOff", InsideOutOff);
	Nan::SetPrototypeMethod(tpl, "insideOutOff", InsideOutOff);

	Nan::SetPrototypeMethod(tpl, "InsideOutOn", InsideOutOn);
	Nan::SetPrototypeMethod(tpl, "insideOutOn", InsideOutOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBounds", SetBounds);
	Nan::SetPrototypeMethod(tpl, "setBounds", SetBounds);

	Nan::SetPrototypeMethod(tpl, "SetClipType", SetClipType);
	Nan::SetPrototypeMethod(tpl, "setClipType", SetClipType);

	Nan::SetPrototypeMethod(tpl, "SetClipTypeToBox", SetClipTypeToBox);
	Nan::SetPrototypeMethod(tpl, "setClipTypeToBox", SetClipTypeToBox);

	Nan::SetPrototypeMethod(tpl, "SetClipTypeToPlane", SetClipTypeToPlane);
	Nan::SetPrototypeMethod(tpl, "setClipTypeToPlane", SetClipTypeToPlane);

	Nan::SetPrototypeMethod(tpl, "SetClipTypeToQuadric", SetClipTypeToQuadric);
	Nan::SetPrototypeMethod(tpl, "setClipTypeToQuadric", SetClipTypeToQuadric);

	Nan::SetPrototypeMethod(tpl, "SetInsideOut", SetInsideOut);
	Nan::SetPrototypeMethod(tpl, "setInsideOut", SetInsideOut);

	Nan::SetPrototypeMethod(tpl, "SetPlaneNormalAxis", SetPlaneNormalAxis);
	Nan::SetPrototypeMethod(tpl, "setPlaneNormalAxis", SetPlaneNormalAxis);

	Nan::SetPrototypeMethod(tpl, "SetPlanePosition", SetPlanePosition);
	Nan::SetPrototypeMethod(tpl, "setPlanePosition", SetPlanePosition);

	Nan::SetPrototypeMethod(tpl, "SetQuadric", SetQuadric);
	Nan::SetPrototypeMethod(tpl, "setQuadric", SetQuadric);

	Nan::SetPrototypeMethod(tpl, "SetQuadricCoefficients", SetQuadricCoefficients);
	Nan::SetPrototypeMethod(tpl, "setQuadricCoefficients", SetQuadricCoefficients);

#ifdef VTK_NODE_PLUS_VTKHYPERTREEGRIDAXISCLIPWRAP_INITPTPL
	VTK_NODE_PLUS_VTKHYPERTREEGRIDAXISCLIPWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkHyperTreeGridAxisClipWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHyperTreeGridAxisClip> native = vtkSmartPointer<vtkHyperTreeGridAxisClip>::New();
		VtkHyperTreeGridAxisClipWrap* obj = new VtkHyperTreeGridAxisClipWrap(native);
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

void VtkHyperTreeGridAxisClipWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBounds();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkHyperTreeGridAxisClipWrap::GetClipType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClipType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperTreeGridAxisClipWrap::GetClipTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClipTypeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperTreeGridAxisClipWrap::GetClipTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClipTypeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperTreeGridAxisClipWrap::GetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInsideOut();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperTreeGridAxisClipWrap::GetMaximumBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
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
		native->GetMaximumBounds(
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
		native->GetMaximumBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridAxisClipWrap::GetMinimumBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
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
		native->GetMinimumBounds(
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
		native->GetMinimumBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridAxisClipWrap::GetPlaneNormalAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlaneNormalAxis();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperTreeGridAxisClipWrap::GetPlaneNormalAxisMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlaneNormalAxisMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperTreeGridAxisClipWrap::GetPlaneNormalAxisMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlaneNormalAxisMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperTreeGridAxisClipWrap::GetPlanePosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlanePosition();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperTreeGridAxisClipWrap::GetQuadric(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	vtkQuadric * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetQuadric();
	VtkQuadricWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkQuadricWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkQuadricWrap *w = new VtkQuadricWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridAxisClipWrap::GetQuadricCoefficients(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 10 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetQuadricCoefficients(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[10];
		if( a0->Length() < 10 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 10; i++ )
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
		native->GetQuadricCoefficients(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridAxisClipWrap::InsideOutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOff();
}

void VtkHyperTreeGridAxisClipWrap::InsideOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOn();
}

void VtkHyperTreeGridAxisClipWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	vtkHyperTreeGridAxisClip * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkHyperTreeGridAxisClipWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHyperTreeGridAxisClipWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperTreeGridAxisClipWrap *w = new VtkHyperTreeGridAxisClipWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridAxisClipWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkHyperTreeGridAxisClip * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkHyperTreeGridAxisClipWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHyperTreeGridAxisClipWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperTreeGridAxisClipWrap *w = new VtkHyperTreeGridAxisClipWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridAxisClipWrap::SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
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
		native->SetBounds(
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
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
														if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetBounds(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridAxisClipWrap::SetClipType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClipType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridAxisClipWrap::SetClipTypeToBox(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetClipTypeToBox();
}

void VtkHyperTreeGridAxisClipWrap::SetClipTypeToPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetClipTypeToPlane();
}

void VtkHyperTreeGridAxisClipWrap::SetClipTypeToQuadric(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetClipTypeToQuadric();
}

void VtkHyperTreeGridAxisClipWrap::SetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInsideOut(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridAxisClipWrap::SetPlaneNormalAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlaneNormalAxis(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridAxisClipWrap::SetPlanePosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlanePosition(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridAxisClipWrap::SetQuadric(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkQuadricWrap::ptpl))->HasInstance(info[0]))
	{
		VtkQuadricWrap *a0 = ObjectWrap::Unwrap<VtkQuadricWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetQuadric(
			(vtkQuadric *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridAxisClipWrap::SetQuadricCoefficients(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisClipWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisClipWrap>(info.Holder());
	vtkHyperTreeGridAxisClip *native = (vtkHyperTreeGridAxisClip *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 10 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetQuadricCoefficients(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[10];
		if( a0->Length() < 10 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 10; i++ )
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
		native->SetQuadricCoefficients(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

