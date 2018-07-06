/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkEarthSourceWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkEarthSourceWrap::ptpl;

VtkEarthSourceWrap::VtkEarthSourceWrap()
{ }

VtkEarthSourceWrap::VtkEarthSourceWrap(vtkSmartPointer<vtkEarthSource> _native)
{ native = _native; }

VtkEarthSourceWrap::~VtkEarthSourceWrap()
{ }

void VtkEarthSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkEarthSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("EarthSource").ToLocalChecked(), ConstructorGetter);
}

void VtkEarthSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkEarthSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkEarthSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetOnRatio", GetOnRatio);
	Nan::SetPrototypeMethod(tpl, "getOnRatio", GetOnRatio);

	Nan::SetPrototypeMethod(tpl, "GetOnRatioMaxValue", GetOnRatioMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOnRatioMaxValue", GetOnRatioMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOnRatioMinValue", GetOnRatioMinValue);
	Nan::SetPrototypeMethod(tpl, "getOnRatioMinValue", GetOnRatioMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOutline", GetOutline);
	Nan::SetPrototypeMethod(tpl, "getOutline", GetOutline);

	Nan::SetPrototypeMethod(tpl, "GetRadius", GetRadius);
	Nan::SetPrototypeMethod(tpl, "getRadius", GetRadius);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMaxValue", GetRadiusMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMaxValue", GetRadiusMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMinValue", GetRadiusMinValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMinValue", GetRadiusMinValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OutlineOff", OutlineOff);
	Nan::SetPrototypeMethod(tpl, "outlineOff", OutlineOff);

	Nan::SetPrototypeMethod(tpl, "OutlineOn", OutlineOn);
	Nan::SetPrototypeMethod(tpl, "outlineOn", OutlineOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOnRatio", SetOnRatio);
	Nan::SetPrototypeMethod(tpl, "setOnRatio", SetOnRatio);

	Nan::SetPrototypeMethod(tpl, "SetOutline", SetOutline);
	Nan::SetPrototypeMethod(tpl, "setOutline", SetOutline);

	Nan::SetPrototypeMethod(tpl, "SetRadius", SetRadius);
	Nan::SetPrototypeMethod(tpl, "setRadius", SetRadius);

#ifdef VTK_NODE_PLUS_VTKEARTHSOURCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKEARTHSOURCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkEarthSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkEarthSource> native = vtkSmartPointer<vtkEarthSource>::New();
		VtkEarthSourceWrap* obj = new VtkEarthSourceWrap(native);
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

void VtkEarthSourceWrap::GetOnRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEarthSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEarthSourceWrap>(info.Holder());
	vtkEarthSource *native = (vtkEarthSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOnRatio();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEarthSourceWrap::GetOnRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEarthSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEarthSourceWrap>(info.Holder());
	vtkEarthSource *native = (vtkEarthSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOnRatioMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEarthSourceWrap::GetOnRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEarthSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEarthSourceWrap>(info.Holder());
	vtkEarthSource *native = (vtkEarthSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOnRatioMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEarthSourceWrap::GetOutline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEarthSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEarthSourceWrap>(info.Holder());
	vtkEarthSource *native = (vtkEarthSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutline();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEarthSourceWrap::GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEarthSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEarthSourceWrap>(info.Holder());
	vtkEarthSource *native = (vtkEarthSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEarthSourceWrap::GetRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEarthSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEarthSourceWrap>(info.Holder());
	vtkEarthSource *native = (vtkEarthSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEarthSourceWrap::GetRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEarthSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEarthSourceWrap>(info.Holder());
	vtkEarthSource *native = (vtkEarthSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkEarthSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEarthSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEarthSourceWrap>(info.Holder());
	vtkEarthSource *native = (vtkEarthSource *)wrapper->native.GetPointer();
	vtkEarthSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkEarthSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkEarthSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkEarthSourceWrap *w = new VtkEarthSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkEarthSourceWrap::OutlineOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEarthSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEarthSourceWrap>(info.Holder());
	vtkEarthSource *native = (vtkEarthSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineOff();
}

void VtkEarthSourceWrap::OutlineOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEarthSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEarthSourceWrap>(info.Holder());
	vtkEarthSource *native = (vtkEarthSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineOn();
}

void VtkEarthSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEarthSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEarthSourceWrap>(info.Holder());
	vtkEarthSource *native = (vtkEarthSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkEarthSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkEarthSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkEarthSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkEarthSourceWrap *w = new VtkEarthSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEarthSourceWrap::SetOnRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEarthSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEarthSourceWrap>(info.Holder());
	vtkEarthSource *native = (vtkEarthSource *)wrapper->native.GetPointer();
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

void VtkEarthSourceWrap::SetOutline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEarthSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEarthSourceWrap>(info.Holder());
	vtkEarthSource *native = (vtkEarthSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutline(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkEarthSourceWrap::SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkEarthSourceWrap *wrapper = ObjectWrap::Unwrap<VtkEarthSourceWrap>(info.Holder());
	vtkEarthSource *native = (vtkEarthSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

