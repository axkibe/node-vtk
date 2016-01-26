/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkScalarsToColorsWrap.h"
#include "vtkLookupTableWrap.h"
#include "vtkObjectWrap.h"
#include "vtkUnsignedCharArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkLookupTableWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkLookupTableWrap::ptpl;

VtkLookupTableWrap::VtkLookupTableWrap()
{ }

VtkLookupTableWrap::VtkLookupTableWrap(vtkSmartPointer<vtkLookupTable> _native)
{ native = _native; }

VtkLookupTableWrap::~VtkLookupTableWrap()
{ }

void VtkLookupTableWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkLookupTable").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("LookupTable").ToLocalChecked(), ConstructorGetter);
}

void VtkLookupTableWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkLookupTableWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkScalarsToColorsWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkScalarsToColorsWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkLookupTableWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Allocate", Allocate);
	Nan::SetPrototypeMethod(tpl, "allocate", Allocate);

	Nan::SetPrototypeMethod(tpl, "Build", Build);
	Nan::SetPrototypeMethod(tpl, "build", Build);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "ForceBuild", ForceBuild);
	Nan::SetPrototypeMethod(tpl, "forceBuild", ForceBuild);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOpacity", GetOpacity);
	Nan::SetPrototypeMethod(tpl, "getOpacity", GetOpacity);

	Nan::SetPrototypeMethod(tpl, "GetRamp", GetRamp);
	Nan::SetPrototypeMethod(tpl, "getRamp", GetRamp);

	Nan::SetPrototypeMethod(tpl, "GetScale", GetScale);
	Nan::SetPrototypeMethod(tpl, "getScale", GetScale);

	Nan::SetPrototypeMethod(tpl, "GetTable", GetTable);
	Nan::SetPrototypeMethod(tpl, "getTable", GetTable);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsOpaque", IsOpaque);
	Nan::SetPrototypeMethod(tpl, "isOpaque", IsOpaque);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAlphaRange", SetAlphaRange);
	Nan::SetPrototypeMethod(tpl, "setAlphaRange", SetAlphaRange);

	Nan::SetPrototypeMethod(tpl, "SetHueRange", SetHueRange);
	Nan::SetPrototypeMethod(tpl, "setHueRange", SetHueRange);

	Nan::SetPrototypeMethod(tpl, "SetNanColor", SetNanColor);
	Nan::SetPrototypeMethod(tpl, "setNanColor", SetNanColor);

	Nan::SetPrototypeMethod(tpl, "SetRamp", SetRamp);
	Nan::SetPrototypeMethod(tpl, "setRamp", SetRamp);

	Nan::SetPrototypeMethod(tpl, "SetRampToLinear", SetRampToLinear);
	Nan::SetPrototypeMethod(tpl, "setRampToLinear", SetRampToLinear);

	Nan::SetPrototypeMethod(tpl, "SetRampToSCurve", SetRampToSCurve);
	Nan::SetPrototypeMethod(tpl, "setRampToSCurve", SetRampToSCurve);

	Nan::SetPrototypeMethod(tpl, "SetRampToSQRT", SetRampToSQRT);
	Nan::SetPrototypeMethod(tpl, "setRampToSQRT", SetRampToSQRT);

	Nan::SetPrototypeMethod(tpl, "SetRange", SetRange);
	Nan::SetPrototypeMethod(tpl, "setRange", SetRange);

	Nan::SetPrototypeMethod(tpl, "SetSaturationRange", SetSaturationRange);
	Nan::SetPrototypeMethod(tpl, "setSaturationRange", SetSaturationRange);

	Nan::SetPrototypeMethod(tpl, "SetScale", SetScale);
	Nan::SetPrototypeMethod(tpl, "setScale", SetScale);

	Nan::SetPrototypeMethod(tpl, "SetScaleToLinear", SetScaleToLinear);
	Nan::SetPrototypeMethod(tpl, "setScaleToLinear", SetScaleToLinear);

	Nan::SetPrototypeMethod(tpl, "SetScaleToLog10", SetScaleToLog10);
	Nan::SetPrototypeMethod(tpl, "setScaleToLog10", SetScaleToLog10);

	Nan::SetPrototypeMethod(tpl, "SetTable", SetTable);
	Nan::SetPrototypeMethod(tpl, "setTable", SetTable);

	Nan::SetPrototypeMethod(tpl, "SetTableRange", SetTableRange);
	Nan::SetPrototypeMethod(tpl, "setTableRange", SetTableRange);

	Nan::SetPrototypeMethod(tpl, "SetValueRange", SetValueRange);
	Nan::SetPrototypeMethod(tpl, "setValueRange", SetValueRange);

	Nan::SetPrototypeMethod(tpl, "UsingLogScale", UsingLogScale);
	Nan::SetPrototypeMethod(tpl, "usingLogScale", UsingLogScale);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkLookupTableWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLookupTable> native = vtkSmartPointer<vtkLookupTable>::New();
		VtkLookupTableWrap* obj = new VtkLookupTableWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkLookupTableWrap::Allocate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->Allocate(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLookupTableWrap::Build(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Build();
}

void VtkLookupTableWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
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

void VtkLookupTableWrap::ForceBuild(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ForceBuild();
}

void VtkLookupTableWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLookupTableWrap::GetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
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

void VtkLookupTableWrap::GetRamp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRamp();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLookupTableWrap::GetScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScale();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLookupTableWrap::GetTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	vtkUnsignedCharArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTable();
		VtkUnsignedCharArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkUnsignedCharArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnsignedCharArrayWrap *w = new VtkUnsignedCharArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLookupTableWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkLookupTableWrap::IsOpaque(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsOpaque();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLookupTableWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	vtkLookupTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkLookupTableWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLookupTableWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLookupTableWrap *w = new VtkLookupTableWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLookupTableWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLookupTable * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkLookupTableWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkLookupTableWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLookupTableWrap *w = new VtkLookupTableWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLookupTableWrap::SetAlphaRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetAlphaRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLookupTableWrap::SetHueRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetHueRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLookupTableWrap::SetNanColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
					native->SetNanColor(
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

void VtkLookupTableWrap::SetRamp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRamp(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLookupTableWrap::SetRampToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRampToLinear();
}

void VtkLookupTableWrap::SetRampToSCurve(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRampToSCurve();
}

void VtkLookupTableWrap::SetRampToSQRT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRampToSQRT();
}

void VtkLookupTableWrap::SetRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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

void VtkLookupTableWrap::SetSaturationRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetSaturationRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLookupTableWrap::SetScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScale(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLookupTableWrap::SetScaleToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScaleToLinear();
}

void VtkLookupTableWrap::SetScaleToLog10(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScaleToLog10();
}

void VtkLookupTableWrap::SetTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkUnsignedCharArrayWrap *a0 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTable(
			(vtkUnsignedCharArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLookupTableWrap::SetTableRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetTableRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLookupTableWrap::SetValueRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetValueRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLookupTableWrap::UsingLogScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLookupTableWrap *wrapper = ObjectWrap::Unwrap<VtkLookupTableWrap>(info.Holder());
	vtkLookupTable *native = (vtkLookupTable *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->UsingLogScale();
	info.GetReturnValue().Set(Nan::New(r));
}

