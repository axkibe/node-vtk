/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkRuledSurfaceFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRuledSurfaceFilterWrap::ptpl;

VtkRuledSurfaceFilterWrap::VtkRuledSurfaceFilterWrap()
{ }

VtkRuledSurfaceFilterWrap::VtkRuledSurfaceFilterWrap(vtkSmartPointer<vtkRuledSurfaceFilter> _native)
{ native = _native; }

VtkRuledSurfaceFilterWrap::~VtkRuledSurfaceFilterWrap()
{ }

void VtkRuledSurfaceFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRuledSurfaceFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RuledSurfaceFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkRuledSurfaceFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRuledSurfaceFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRuledSurfaceFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CloseSurfaceOff", CloseSurfaceOff);
	Nan::SetPrototypeMethod(tpl, "closeSurfaceOff", CloseSurfaceOff);

	Nan::SetPrototypeMethod(tpl, "CloseSurfaceOn", CloseSurfaceOn);
	Nan::SetPrototypeMethod(tpl, "closeSurfaceOn", CloseSurfaceOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCloseSurface", GetCloseSurface);
	Nan::SetPrototypeMethod(tpl, "getCloseSurface", GetCloseSurface);

	Nan::SetPrototypeMethod(tpl, "GetDistanceFactor", GetDistanceFactor);
	Nan::SetPrototypeMethod(tpl, "getDistanceFactor", GetDistanceFactor);

	Nan::SetPrototypeMethod(tpl, "GetDistanceFactorMaxValue", GetDistanceFactorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getDistanceFactorMaxValue", GetDistanceFactorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetDistanceFactorMinValue", GetDistanceFactorMinValue);
	Nan::SetPrototypeMethod(tpl, "getDistanceFactorMinValue", GetDistanceFactorMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOffset", GetOffset);
	Nan::SetPrototypeMethod(tpl, "getOffset", GetOffset);

	Nan::SetPrototypeMethod(tpl, "GetOffsetMaxValue", GetOffsetMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOffsetMaxValue", GetOffsetMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOffsetMinValue", GetOffsetMinValue);
	Nan::SetPrototypeMethod(tpl, "getOffsetMinValue", GetOffsetMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOnRatio", GetOnRatio);
	Nan::SetPrototypeMethod(tpl, "getOnRatio", GetOnRatio);

	Nan::SetPrototypeMethod(tpl, "GetOnRatioMaxValue", GetOnRatioMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOnRatioMaxValue", GetOnRatioMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOnRatioMinValue", GetOnRatioMinValue);
	Nan::SetPrototypeMethod(tpl, "getOnRatioMinValue", GetOnRatioMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOrientLoops", GetOrientLoops);
	Nan::SetPrototypeMethod(tpl, "getOrientLoops", GetOrientLoops);

	Nan::SetPrototypeMethod(tpl, "GetPassLines", GetPassLines);
	Nan::SetPrototypeMethod(tpl, "getPassLines", GetPassLines);

	Nan::SetPrototypeMethod(tpl, "GetRuledMode", GetRuledMode);
	Nan::SetPrototypeMethod(tpl, "getRuledMode", GetRuledMode);

	Nan::SetPrototypeMethod(tpl, "GetRuledModeAsString", GetRuledModeAsString);
	Nan::SetPrototypeMethod(tpl, "getRuledModeAsString", GetRuledModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetRuledModeMaxValue", GetRuledModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRuledModeMaxValue", GetRuledModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRuledModeMinValue", GetRuledModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getRuledModeMinValue", GetRuledModeMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OrientLoopsOff", OrientLoopsOff);
	Nan::SetPrototypeMethod(tpl, "orientLoopsOff", OrientLoopsOff);

	Nan::SetPrototypeMethod(tpl, "OrientLoopsOn", OrientLoopsOn);
	Nan::SetPrototypeMethod(tpl, "orientLoopsOn", OrientLoopsOn);

	Nan::SetPrototypeMethod(tpl, "PassLinesOff", PassLinesOff);
	Nan::SetPrototypeMethod(tpl, "passLinesOff", PassLinesOff);

	Nan::SetPrototypeMethod(tpl, "PassLinesOn", PassLinesOn);
	Nan::SetPrototypeMethod(tpl, "passLinesOn", PassLinesOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCloseSurface", SetCloseSurface);
	Nan::SetPrototypeMethod(tpl, "setCloseSurface", SetCloseSurface);

	Nan::SetPrototypeMethod(tpl, "SetDistanceFactor", SetDistanceFactor);
	Nan::SetPrototypeMethod(tpl, "setDistanceFactor", SetDistanceFactor);

	Nan::SetPrototypeMethod(tpl, "SetOffset", SetOffset);
	Nan::SetPrototypeMethod(tpl, "setOffset", SetOffset);

	Nan::SetPrototypeMethod(tpl, "SetOnRatio", SetOnRatio);
	Nan::SetPrototypeMethod(tpl, "setOnRatio", SetOnRatio);

	Nan::SetPrototypeMethod(tpl, "SetOrientLoops", SetOrientLoops);
	Nan::SetPrototypeMethod(tpl, "setOrientLoops", SetOrientLoops);

	Nan::SetPrototypeMethod(tpl, "SetPassLines", SetPassLines);
	Nan::SetPrototypeMethod(tpl, "setPassLines", SetPassLines);

	Nan::SetPrototypeMethod(tpl, "SetResolution", SetResolution);
	Nan::SetPrototypeMethod(tpl, "setResolution", SetResolution);

	Nan::SetPrototypeMethod(tpl, "SetRuledMode", SetRuledMode);
	Nan::SetPrototypeMethod(tpl, "setRuledMode", SetRuledMode);

	Nan::SetPrototypeMethod(tpl, "SetRuledModeToPointWalk", SetRuledModeToPointWalk);
	Nan::SetPrototypeMethod(tpl, "setRuledModeToPointWalk", SetRuledModeToPointWalk);

	Nan::SetPrototypeMethod(tpl, "SetRuledModeToResample", SetRuledModeToResample);
	Nan::SetPrototypeMethod(tpl, "setRuledModeToResample", SetRuledModeToResample);

	ptpl.Reset( tpl );
}

void VtkRuledSurfaceFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRuledSurfaceFilter> native = vtkSmartPointer<vtkRuledSurfaceFilter>::New();
		VtkRuledSurfaceFilterWrap* obj = new VtkRuledSurfaceFilterWrap(native);
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

void VtkRuledSurfaceFilterWrap::CloseSurfaceOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CloseSurfaceOff();
}

void VtkRuledSurfaceFilterWrap::CloseSurfaceOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CloseSurfaceOn();
}

void VtkRuledSurfaceFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRuledSurfaceFilterWrap::GetCloseSurface(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCloseSurface();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRuledSurfaceFilterWrap::GetDistanceFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistanceFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRuledSurfaceFilterWrap::GetDistanceFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistanceFactorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRuledSurfaceFilterWrap::GetDistanceFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDistanceFactorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRuledSurfaceFilterWrap::GetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffset();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRuledSurfaceFilterWrap::GetOffsetMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffsetMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRuledSurfaceFilterWrap::GetOffsetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffsetMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRuledSurfaceFilterWrap::GetOnRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOnRatio();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRuledSurfaceFilterWrap::GetOnRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOnRatioMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRuledSurfaceFilterWrap::GetOnRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOnRatioMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRuledSurfaceFilterWrap::GetOrientLoops(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientLoops();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRuledSurfaceFilterWrap::GetPassLines(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassLines();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRuledSurfaceFilterWrap::GetRuledMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRuledMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRuledSurfaceFilterWrap::GetRuledModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRuledModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRuledSurfaceFilterWrap::GetRuledModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRuledModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRuledSurfaceFilterWrap::GetRuledModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRuledModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRuledSurfaceFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
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

void VtkRuledSurfaceFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	vtkRuledSurfaceFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkRuledSurfaceFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRuledSurfaceFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRuledSurfaceFilterWrap *w = new VtkRuledSurfaceFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRuledSurfaceFilterWrap::OrientLoopsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OrientLoopsOff();
}

void VtkRuledSurfaceFilterWrap::OrientLoopsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OrientLoopsOn();
}

void VtkRuledSurfaceFilterWrap::PassLinesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassLinesOff();
}

void VtkRuledSurfaceFilterWrap::PassLinesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassLinesOn();
}

void VtkRuledSurfaceFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRuledSurfaceFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkRuledSurfaceFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRuledSurfaceFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRuledSurfaceFilterWrap *w = new VtkRuledSurfaceFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRuledSurfaceFilterWrap::SetCloseSurface(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCloseSurface(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRuledSurfaceFilterWrap::SetDistanceFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDistanceFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRuledSurfaceFilterWrap::SetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOffset(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRuledSurfaceFilterWrap::SetOnRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOnRatio(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRuledSurfaceFilterWrap::SetOrientLoops(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrientLoops(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRuledSurfaceFilterWrap::SetPassLines(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassLines(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRuledSurfaceFilterWrap::SetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
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
		native->SetResolution(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetResolution(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetResolution(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRuledSurfaceFilterWrap::SetRuledMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRuledMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRuledSurfaceFilterWrap::SetRuledModeToPointWalk(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRuledModeToPointWalk();
}

void VtkRuledSurfaceFilterWrap::SetRuledModeToResample(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRuledSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRuledSurfaceFilterWrap>(info.Holder());
	vtkRuledSurfaceFilter *native = (vtkRuledSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetRuledModeToResample();
}

