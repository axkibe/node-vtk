/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkChartXYWrap.h"
#include "vtkChartHistogram2DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkScalarsToColorsWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkChartHistogram2DWrap::ptpl;

VtkChartHistogram2DWrap::VtkChartHistogram2DWrap()
{ }

VtkChartHistogram2DWrap::VtkChartHistogram2DWrap(vtkSmartPointer<vtkChartHistogram2D> _native)
{ native = _native; }

VtkChartHistogram2DWrap::~VtkChartHistogram2DWrap()
{ }

void VtkChartHistogram2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkChartHistogram2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ChartHistogram2D").ToLocalChecked(), ConstructorGetter);
}

void VtkChartHistogram2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkChartHistogram2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkChartXYWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkChartXYWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkChartHistogram2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetTransferFunction", SetTransferFunction);
	Nan::SetPrototypeMethod(tpl, "setTransferFunction", SetTransferFunction);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

#ifdef VTK_NODE_PLUS_VTKCHARTHISTOGRAM2DWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCHARTHISTOGRAM2DWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkChartHistogram2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkChartHistogram2D> native = vtkSmartPointer<vtkChartHistogram2D>::New();
		VtkChartHistogram2DWrap* obj = new VtkChartHistogram2DWrap(native);
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

void VtkChartHistogram2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkChartHistogram2DWrap>(info.Holder());
	vtkChartHistogram2D *native = (vtkChartHistogram2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkChartHistogram2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkChartHistogram2DWrap>(info.Holder());
	vtkChartHistogram2D *native = (vtkChartHistogram2D *)wrapper->native.GetPointer();
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

void VtkChartHistogram2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkChartHistogram2DWrap>(info.Holder());
	vtkChartHistogram2D *native = (vtkChartHistogram2D *)wrapper->native.GetPointer();
	vtkChartHistogram2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkChartHistogram2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkChartHistogram2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkChartHistogram2DWrap *w = new VtkChartHistogram2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkChartHistogram2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkChartHistogram2DWrap>(info.Holder());
	vtkChartHistogram2D *native = (vtkChartHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkChartHistogram2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkChartHistogram2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkChartHistogram2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkChartHistogram2DWrap *w = new VtkChartHistogram2DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartHistogram2DWrap::SetTransferFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkChartHistogram2DWrap>(info.Holder());
	vtkChartHistogram2D *native = (vtkChartHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkScalarsToColorsWrap::ptpl))->HasInstance(info[0]))
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

void VtkChartHistogram2DWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkChartHistogram2DWrap>(info.Holder());
	vtkChartHistogram2D *native = (vtkChartHistogram2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

