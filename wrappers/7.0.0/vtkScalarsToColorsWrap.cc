/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkScalarsToColorsWrap.h"
#include "vtkUnsignedCharArrayWrap.h"
#include "vtkDataArrayWrap.h"
#include "vtkAbstractArrayWrap.h"
#include "vtkStringArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkScalarsToColorsWrap::ptpl;

VtkScalarsToColorsWrap::VtkScalarsToColorsWrap()
{ }

VtkScalarsToColorsWrap::VtkScalarsToColorsWrap(vtkSmartPointer<vtkScalarsToColors> _native)
{ native = _native; }

VtkScalarsToColorsWrap::~VtkScalarsToColorsWrap()
{ }

void VtkScalarsToColorsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkScalarsToColors").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ScalarsToColors").ToLocalChecked(), ConstructorGetter);
}

void VtkScalarsToColorsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkScalarsToColorsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkScalarsToColorsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Build", Build);
	Nan::SetPrototypeMethod(tpl, "build", Build);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetAlpha", GetAlpha);
	Nan::SetPrototypeMethod(tpl, "getAlpha", GetAlpha);

	Nan::SetPrototypeMethod(tpl, "GetAnnotatedValues", GetAnnotatedValues);
	Nan::SetPrototypeMethod(tpl, "getAnnotatedValues", GetAnnotatedValues);

	Nan::SetPrototypeMethod(tpl, "GetAnnotations", GetAnnotations);
	Nan::SetPrototypeMethod(tpl, "getAnnotations", GetAnnotations);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColor", GetColor);
	Nan::SetPrototypeMethod(tpl, "getColor", GetColor);

	Nan::SetPrototypeMethod(tpl, "GetIndexedLookup", GetIndexedLookup);
	Nan::SetPrototypeMethod(tpl, "getIndexedLookup", GetIndexedLookup);

	Nan::SetPrototypeMethod(tpl, "GetLuminance", GetLuminance);
	Nan::SetPrototypeMethod(tpl, "getLuminance", GetLuminance);

	Nan::SetPrototypeMethod(tpl, "GetOpacity", GetOpacity);
	Nan::SetPrototypeMethod(tpl, "getOpacity", GetOpacity);

	Nan::SetPrototypeMethod(tpl, "GetRange", GetRange);
	Nan::SetPrototypeMethod(tpl, "getRange", GetRange);

	Nan::SetPrototypeMethod(tpl, "GetVectorComponent", GetVectorComponent);
	Nan::SetPrototypeMethod(tpl, "getVectorComponent", GetVectorComponent);

	Nan::SetPrototypeMethod(tpl, "GetVectorMode", GetVectorMode);
	Nan::SetPrototypeMethod(tpl, "getVectorMode", GetVectorMode);

	Nan::SetPrototypeMethod(tpl, "GetVectorSize", GetVectorSize);
	Nan::SetPrototypeMethod(tpl, "getVectorSize", GetVectorSize);

	Nan::SetPrototypeMethod(tpl, "IndexedLookupOff", IndexedLookupOff);
	Nan::SetPrototypeMethod(tpl, "indexedLookupOff", IndexedLookupOff);

	Nan::SetPrototypeMethod(tpl, "IndexedLookupOn", IndexedLookupOn);
	Nan::SetPrototypeMethod(tpl, "indexedLookupOn", IndexedLookupOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsOpaque", IsOpaque);
	Nan::SetPrototypeMethod(tpl, "isOpaque", IsOpaque);

	Nan::SetPrototypeMethod(tpl, "MapScalars", MapScalars);
	Nan::SetPrototypeMethod(tpl, "mapScalars", MapScalars);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ResetAnnotations", ResetAnnotations);
	Nan::SetPrototypeMethod(tpl, "resetAnnotations", ResetAnnotations);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAlpha", SetAlpha);
	Nan::SetPrototypeMethod(tpl, "setAlpha", SetAlpha);

	Nan::SetPrototypeMethod(tpl, "SetAnnotations", SetAnnotations);
	Nan::SetPrototypeMethod(tpl, "setAnnotations", SetAnnotations);

	Nan::SetPrototypeMethod(tpl, "SetIndexedLookup", SetIndexedLookup);
	Nan::SetPrototypeMethod(tpl, "setIndexedLookup", SetIndexedLookup);

	Nan::SetPrototypeMethod(tpl, "SetRange", SetRange);
	Nan::SetPrototypeMethod(tpl, "setRange", SetRange);

	Nan::SetPrototypeMethod(tpl, "SetVectorComponent", SetVectorComponent);
	Nan::SetPrototypeMethod(tpl, "setVectorComponent", SetVectorComponent);

	Nan::SetPrototypeMethod(tpl, "SetVectorMode", SetVectorMode);
	Nan::SetPrototypeMethod(tpl, "setVectorMode", SetVectorMode);

	Nan::SetPrototypeMethod(tpl, "SetVectorModeToComponent", SetVectorModeToComponent);
	Nan::SetPrototypeMethod(tpl, "setVectorModeToComponent", SetVectorModeToComponent);

	Nan::SetPrototypeMethod(tpl, "SetVectorModeToMagnitude", SetVectorModeToMagnitude);
	Nan::SetPrototypeMethod(tpl, "setVectorModeToMagnitude", SetVectorModeToMagnitude);

	Nan::SetPrototypeMethod(tpl, "SetVectorModeToRGBColors", SetVectorModeToRGBColors);
	Nan::SetPrototypeMethod(tpl, "setVectorModeToRGBColors", SetVectorModeToRGBColors);

	Nan::SetPrototypeMethod(tpl, "SetVectorSize", SetVectorSize);
	Nan::SetPrototypeMethod(tpl, "setVectorSize", SetVectorSize);

	Nan::SetPrototypeMethod(tpl, "UsingLogScale", UsingLogScale);
	Nan::SetPrototypeMethod(tpl, "usingLogScale", UsingLogScale);

	ptpl.Reset( tpl );
}

void VtkScalarsToColorsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkScalarsToColors> native = vtkSmartPointer<vtkScalarsToColors>::New();
		VtkScalarsToColorsWrap* obj = new VtkScalarsToColorsWrap(native);
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

void VtkScalarsToColorsWrap::Build(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Build();
}

void VtkScalarsToColorsWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkScalarsToColorsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkScalarsToColorsWrap *a0 = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkScalarsToColors *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsWrap::GetAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlpha();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkScalarsToColorsWrap::GetAnnotatedValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	vtkAbstractArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAnnotatedValues();
	VtkAbstractArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractArrayWrap *w = new VtkAbstractArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsWrap::GetAnnotations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAnnotations();
	VtkStringArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkScalarsToColorsWrap::GetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetColor(
				info[0]->NumberValue(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetColor(
				info[0]->NumberValue(),
				b1
			);
			return;
		}
		double const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetColor(
			info[0]->NumberValue()
		);
		Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
		Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
		memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
		info.GetReturnValue().Set(at);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsWrap::GetIndexedLookup(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIndexedLookup();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkScalarsToColorsWrap::GetLuminance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetLuminance(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsWrap::GetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOpacity(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsWrap::GetRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRange();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkScalarsToColorsWrap::GetVectorComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVectorComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkScalarsToColorsWrap::GetVectorMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVectorMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkScalarsToColorsWrap::GetVectorSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVectorSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkScalarsToColorsWrap::IndexedLookupOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IndexedLookupOff();
}

void VtkScalarsToColorsWrap::IndexedLookupOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IndexedLookupOn();
}

void VtkScalarsToColorsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsWrap::IsOpaque(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsOpaque();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkScalarsToColorsWrap::MapScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractArrayWrap *a0 = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				vtkUnsignedCharArray * r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->MapScalars(
					(vtkAbstractArray *) a0->native.GetPointer(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				VtkUnsignedCharArrayWrap::InitPtpl();
				v8::Local<v8::Value> argv[1] =
					{ Nan::New(vtkNodeJsNoWrap) };
				v8::Local<v8::Function> cons =
					Nan::New<v8::FunctionTemplate>(VtkUnsignedCharArrayWrap::ptpl)->GetFunction();
				v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
				VtkUnsignedCharArrayWrap *w = new VtkUnsignedCharArrayWrap();
				w->native = r;
				w->Wrap(wo);
				info.GetReturnValue().Set(wo);
				return;
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				vtkUnsignedCharArray * r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->MapScalars(
					(vtkDataArray *) a0->native.GetPointer(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				VtkUnsignedCharArrayWrap::InitPtpl();
				v8::Local<v8::Value> argv[1] =
					{ Nan::New(vtkNodeJsNoWrap) };
				v8::Local<v8::Function> cons =
					Nan::New<v8::FunctionTemplate>(VtkUnsignedCharArrayWrap::ptpl)->GetFunction();
				v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
				VtkUnsignedCharArrayWrap *w = new VtkUnsignedCharArrayWrap();
				w->native = r;
				w->Wrap(wo);
				info.GetReturnValue().Set(wo);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	vtkScalarsToColors * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkScalarsToColorsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkScalarsToColorsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarsToColorsWrap *w = new VtkScalarsToColorsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsWrap::ResetAnnotations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetAnnotations();
}

void VtkScalarsToColorsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkScalarsToColors * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkScalarsToColorsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkScalarsToColorsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkScalarsToColorsWrap *w = new VtkScalarsToColorsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsWrap::SetAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAlpha(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsWrap::SetAnnotations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractArrayWrap *a0 = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkStringArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkStringArrayWrap *a1 = ObjectWrap::Unwrap<VtkStringArrayWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetAnnotations(
				(vtkAbstractArray *) a0->native.GetPointer(),
				(vtkStringArray *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsWrap::SetIndexedLookup(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIndexedLookup(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsWrap::SetRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
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
		native->SetRange(
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
		native->SetRange(
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
			native->SetRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsWrap::SetVectorComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVectorComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsWrap::SetVectorMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVectorMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsWrap::SetVectorModeToComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetVectorModeToComponent();
}

void VtkScalarsToColorsWrap::SetVectorModeToMagnitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetVectorModeToMagnitude();
}

void VtkScalarsToColorsWrap::SetVectorModeToRGBColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetVectorModeToRGBColors();
}

void VtkScalarsToColorsWrap::SetVectorSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVectorSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsWrap::UsingLogScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info.Holder());
	vtkScalarsToColors *native = (vtkScalarsToColors *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->UsingLogScale();
	info.GetReturnValue().Set(Nan::New(r));
}

