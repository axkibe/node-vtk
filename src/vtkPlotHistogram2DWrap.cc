/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPlotWrap.h"
#include "vtkPlotHistogram2DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTableWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkScalarsToColorsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPlotHistogram2DWrap::constructor;

VtkPlotHistogram2DWrap::VtkPlotHistogram2DWrap()
{ }

VtkPlotHistogram2DWrap::VtkPlotHistogram2DWrap(vtkSmartPointer<vtkPlotHistogram2D> _native)
{ native = _native; }

VtkPlotHistogram2DWrap::~VtkPlotHistogram2DWrap()
{ }

void VtkPlotHistogram2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkPlotHistogram2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAbstractContextItemWrap::InitTpl(tpl);
	VtkContextItemWrap::InitTpl(tpl);
	VtkPlotWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkPlotHistogram2D").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("PlotHistogram2D").ToLocalChecked(),tpl->GetFunction());
}

void VtkPlotHistogram2DWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInputImageData", GetInputImageData);
	Nan::SetPrototypeMethod(tpl, "getInputImageData", GetInputImageData);

	Nan::SetPrototypeMethod(tpl, "GetTransferFunction", GetTransferFunction);
	Nan::SetPrototypeMethod(tpl, "getTransferFunction", GetTransferFunction);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetTransferFunction", SetTransferFunction);
	Nan::SetPrototypeMethod(tpl, "setTransferFunction", SetTransferFunction);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

}

void VtkPlotHistogram2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPlotHistogram2D> native = vtkSmartPointer<vtkPlotHistogram2D>::New();
		VtkPlotHistogram2DWrap* obj = new VtkPlotHistogram2DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPlotHistogram2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPlotHistogram2DWrap>(info.Holder());
	vtkPlotHistogram2D *native = (vtkPlotHistogram2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPlotHistogram2DWrap::GetInputImageData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPlotHistogram2DWrap>(info.Holder());
	vtkPlotHistogram2D *native = (vtkPlotHistogram2D *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputImageData();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotHistogram2DWrap::GetTransferFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPlotHistogram2DWrap>(info.Holder());
	vtkPlotHistogram2D *native = (vtkPlotHistogram2D *)wrapper->native.GetPointer();
	vtkScalarsToColors * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransferFunction();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkScalarsToColorsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarsToColorsWrap *w = new VtkScalarsToColorsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotHistogram2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPlotHistogram2DWrap>(info.Holder());
	vtkPlotHistogram2D *native = (vtkPlotHistogram2D *)wrapper->native.GetPointer();
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

void VtkPlotHistogram2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPlotHistogram2DWrap>(info.Holder());
	vtkPlotHistogram2D *native = (vtkPlotHistogram2D *)wrapper->native.GetPointer();
	vtkPlotHistogram2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPlotHistogram2DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlotHistogram2DWrap *w = new VtkPlotHistogram2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotHistogram2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPlotHistogram2DWrap>(info.Holder());
	vtkPlotHistogram2D *native = (vtkPlotHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPlotHistogram2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkPlotHistogram2DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlotHistogram2DWrap *w = new VtkPlotHistogram2DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotHistogram2DWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPlotHistogram2DWrap>(info.Holder());
	vtkPlotHistogram2D *native = (vtkPlotHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTableWrap *a0 = ObjectWrap::Unwrap<VtkTableWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkTable *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotHistogram2DWrap::SetTransferFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPlotHistogram2DWrap>(info.Holder());
	vtkPlotHistogram2D *native = (vtkPlotHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkScalarsToColorsWrap *a0 = ObjectWrap::Unwrap<VtkScalarsToColorsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTransferFunction(
			(vtkScalarsToColors *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotHistogram2DWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPlotHistogram2DWrap>(info.Holder());
	vtkPlotHistogram2D *native = (vtkPlotHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

