/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkTimeSourceExampleWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTimeSourceExampleWrap::ptpl;

VtkTimeSourceExampleWrap::VtkTimeSourceExampleWrap()
{ }

VtkTimeSourceExampleWrap::VtkTimeSourceExampleWrap(vtkSmartPointer<vtkTimeSourceExample> _native)
{ native = _native; }

VtkTimeSourceExampleWrap::~VtkTimeSourceExampleWrap()
{ }

void VtkTimeSourceExampleWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTimeSourceExample").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TimeSourceExample").ToLocalChecked(), ConstructorGetter);
}

void VtkTimeSourceExampleWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTimeSourceExampleWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTimeSourceExampleWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AnalyticOff", AnalyticOff);
	Nan::SetPrototypeMethod(tpl, "analyticOff", AnalyticOff);

	Nan::SetPrototypeMethod(tpl, "AnalyticOn", AnalyticOn);
	Nan::SetPrototypeMethod(tpl, "analyticOn", AnalyticOn);

	Nan::SetPrototypeMethod(tpl, "GetAnalytic", GetAnalytic);
	Nan::SetPrototypeMethod(tpl, "getAnalytic", GetAnalytic);

	Nan::SetPrototypeMethod(tpl, "GetAnalyticMaxValue", GetAnalyticMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAnalyticMaxValue", GetAnalyticMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAnalyticMinValue", GetAnalyticMinValue);
	Nan::SetPrototypeMethod(tpl, "getAnalyticMinValue", GetAnalyticMinValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGrowing", GetGrowing);
	Nan::SetPrototypeMethod(tpl, "getGrowing", GetGrowing);

	Nan::SetPrototypeMethod(tpl, "GetGrowingMaxValue", GetGrowingMaxValue);
	Nan::SetPrototypeMethod(tpl, "getGrowingMaxValue", GetGrowingMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetGrowingMinValue", GetGrowingMinValue);
	Nan::SetPrototypeMethod(tpl, "getGrowingMinValue", GetGrowingMinValue);

	Nan::SetPrototypeMethod(tpl, "GetXAmplitude", GetXAmplitude);
	Nan::SetPrototypeMethod(tpl, "getXAmplitude", GetXAmplitude);

	Nan::SetPrototypeMethod(tpl, "GetYAmplitude", GetYAmplitude);
	Nan::SetPrototypeMethod(tpl, "getYAmplitude", GetYAmplitude);

	Nan::SetPrototypeMethod(tpl, "GrowingOff", GrowingOff);
	Nan::SetPrototypeMethod(tpl, "growingOff", GrowingOff);

	Nan::SetPrototypeMethod(tpl, "GrowingOn", GrowingOn);
	Nan::SetPrototypeMethod(tpl, "growingOn", GrowingOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAnalytic", SetAnalytic);
	Nan::SetPrototypeMethod(tpl, "setAnalytic", SetAnalytic);

	Nan::SetPrototypeMethod(tpl, "SetGrowing", SetGrowing);
	Nan::SetPrototypeMethod(tpl, "setGrowing", SetGrowing);

	Nan::SetPrototypeMethod(tpl, "SetXAmplitude", SetXAmplitude);
	Nan::SetPrototypeMethod(tpl, "setXAmplitude", SetXAmplitude);

	Nan::SetPrototypeMethod(tpl, "SetYAmplitude", SetYAmplitude);
	Nan::SetPrototypeMethod(tpl, "setYAmplitude", SetYAmplitude);

	ptpl.Reset( tpl );
}

void VtkTimeSourceExampleWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTimeSourceExample> native = vtkSmartPointer<vtkTimeSourceExample>::New();
		VtkTimeSourceExampleWrap* obj = new VtkTimeSourceExampleWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTimeSourceExampleWrap::AnalyticOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AnalyticOff();
}

void VtkTimeSourceExampleWrap::AnalyticOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AnalyticOn();
}

void VtkTimeSourceExampleWrap::GetAnalytic(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAnalytic();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTimeSourceExampleWrap::GetAnalyticMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAnalyticMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTimeSourceExampleWrap::GetAnalyticMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAnalyticMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTimeSourceExampleWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTimeSourceExampleWrap::GetGrowing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGrowing();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTimeSourceExampleWrap::GetGrowingMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGrowingMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTimeSourceExampleWrap::GetGrowingMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGrowingMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTimeSourceExampleWrap::GetXAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXAmplitude();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTimeSourceExampleWrap::GetYAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYAmplitude();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTimeSourceExampleWrap::GrowingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GrowingOff();
}

void VtkTimeSourceExampleWrap::GrowingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GrowingOn();
}

void VtkTimeSourceExampleWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
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

void VtkTimeSourceExampleWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	vtkTimeSourceExample * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTimeSourceExampleWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTimeSourceExampleWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTimeSourceExampleWrap *w = new VtkTimeSourceExampleWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTimeSourceExampleWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTimeSourceExample * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTimeSourceExampleWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTimeSourceExampleWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTimeSourceExampleWrap *w = new VtkTimeSourceExampleWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTimeSourceExampleWrap::SetAnalytic(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAnalytic(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTimeSourceExampleWrap::SetGrowing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGrowing(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTimeSourceExampleWrap::SetXAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXAmplitude(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTimeSourceExampleWrap::SetYAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTimeSourceExampleWrap *wrapper = ObjectWrap::Unwrap<VtkTimeSourceExampleWrap>(info.Holder());
	vtkTimeSourceExample *native = (vtkTimeSourceExample *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYAmplitude(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

