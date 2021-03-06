/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageResliceWrap.h"
#include "vtkImageSlabResliceWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageSlabResliceWrap::ptpl;

VtkImageSlabResliceWrap::VtkImageSlabResliceWrap()
{ }

VtkImageSlabResliceWrap::VtkImageSlabResliceWrap(vtkSmartPointer<vtkImageSlabReslice> _native)
{ native = _native; }

VtkImageSlabResliceWrap::~VtkImageSlabResliceWrap()
{ }

void VtkImageSlabResliceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageSlabReslice").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageSlabReslice").ToLocalChecked(), ConstructorGetter);
}

void VtkImageSlabResliceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageSlabResliceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageResliceWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageResliceWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageSlabResliceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBlendMode", GetBlendMode);
	Nan::SetPrototypeMethod(tpl, "getBlendMode", GetBlendMode);

	Nan::SetPrototypeMethod(tpl, "GetNumBlendSamplePoints", GetNumBlendSamplePoints);
	Nan::SetPrototypeMethod(tpl, "getNumBlendSamplePoints", GetNumBlendSamplePoints);

	Nan::SetPrototypeMethod(tpl, "GetSlabResolution", GetSlabResolution);
	Nan::SetPrototypeMethod(tpl, "getSlabResolution", GetSlabResolution);

	Nan::SetPrototypeMethod(tpl, "GetSlabThickness", GetSlabThickness);
	Nan::SetPrototypeMethod(tpl, "getSlabThickness", GetSlabThickness);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBlendMode", SetBlendMode);
	Nan::SetPrototypeMethod(tpl, "setBlendMode", SetBlendMode);

	Nan::SetPrototypeMethod(tpl, "SetBlendModeToMax", SetBlendModeToMax);
	Nan::SetPrototypeMethod(tpl, "setBlendModeToMax", SetBlendModeToMax);

	Nan::SetPrototypeMethod(tpl, "SetBlendModeToMean", SetBlendModeToMean);
	Nan::SetPrototypeMethod(tpl, "setBlendModeToMean", SetBlendModeToMean);

	Nan::SetPrototypeMethod(tpl, "SetBlendModeToMin", SetBlendModeToMin);
	Nan::SetPrototypeMethod(tpl, "setBlendModeToMin", SetBlendModeToMin);

	Nan::SetPrototypeMethod(tpl, "SetSlabResolution", SetSlabResolution);
	Nan::SetPrototypeMethod(tpl, "setSlabResolution", SetSlabResolution);

	Nan::SetPrototypeMethod(tpl, "SetSlabThickness", SetSlabThickness);
	Nan::SetPrototypeMethod(tpl, "setSlabThickness", SetSlabThickness);

#ifdef VTK_NODE_PLUS_VTKIMAGESLABRESLICEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGESLABRESLICEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImageSlabResliceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageSlabReslice> native = vtkSmartPointer<vtkImageSlabReslice>::New();
		VtkImageSlabResliceWrap* obj = new VtkImageSlabResliceWrap(native);
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

void VtkImageSlabResliceWrap::GetBlendMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabResliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabResliceWrap>(info.Holder());
	vtkImageSlabReslice *native = (vtkImageSlabReslice *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBlendMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSlabResliceWrap::GetNumBlendSamplePoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabResliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabResliceWrap>(info.Holder());
	vtkImageSlabReslice *native = (vtkImageSlabReslice *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumBlendSamplePoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSlabResliceWrap::GetSlabResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabResliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabResliceWrap>(info.Holder());
	vtkImageSlabReslice *native = (vtkImageSlabReslice *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSlabResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSlabResliceWrap::GetSlabThickness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabResliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabResliceWrap>(info.Holder());
	vtkImageSlabReslice *native = (vtkImageSlabReslice *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSlabThickness();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageSlabResliceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabResliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabResliceWrap>(info.Holder());
	vtkImageSlabReslice *native = (vtkImageSlabReslice *)wrapper->native.GetPointer();
	vtkImageSlabReslice * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageSlabResliceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageSlabResliceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageSlabResliceWrap *w = new VtkImageSlabResliceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageSlabResliceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabResliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabResliceWrap>(info.Holder());
	vtkImageSlabReslice *native = (vtkImageSlabReslice *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkImageSlabReslice * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkImageSlabResliceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageSlabResliceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageSlabResliceWrap *w = new VtkImageSlabResliceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSlabResliceWrap::SetBlendMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabResliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabResliceWrap>(info.Holder());
	vtkImageSlabReslice *native = (vtkImageSlabReslice *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBlendMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSlabResliceWrap::SetBlendModeToMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabResliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabResliceWrap>(info.Holder());
	vtkImageSlabReslice *native = (vtkImageSlabReslice *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBlendModeToMax();
}

void VtkImageSlabResliceWrap::SetBlendModeToMean(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabResliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabResliceWrap>(info.Holder());
	vtkImageSlabReslice *native = (vtkImageSlabReslice *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBlendModeToMean();
}

void VtkImageSlabResliceWrap::SetBlendModeToMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabResliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabResliceWrap>(info.Holder());
	vtkImageSlabReslice *native = (vtkImageSlabReslice *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBlendModeToMin();
}

void VtkImageSlabResliceWrap::SetSlabResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabResliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabResliceWrap>(info.Holder());
	vtkImageSlabReslice *native = (vtkImageSlabReslice *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSlabResolution(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSlabResliceWrap::SetSlabThickness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSlabResliceWrap *wrapper = ObjectWrap::Unwrap<VtkImageSlabResliceWrap>(info.Holder());
	vtkImageSlabReslice *native = (vtkImageSlabReslice *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSlabThickness(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

