/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPlotWrap.h"
#include "vtkPlotHistogram2DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkContext2DWrap.h"
#include "vtkTableWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkScalarsToColorsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPlotHistogram2DWrap::ptpl;

VtkPlotHistogram2DWrap::VtkPlotHistogram2DWrap()
{ }

VtkPlotHistogram2DWrap::VtkPlotHistogram2DWrap(vtkSmartPointer<vtkPlotHistogram2D> _native)
{ native = _native; }

VtkPlotHistogram2DWrap::~VtkPlotHistogram2DWrap()
{ }

void VtkPlotHistogram2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPlotHistogram2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PlotHistogram2D").ToLocalChecked(), ConstructorGetter);
}

void VtkPlotHistogram2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPlotHistogram2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPlotWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPlotWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPlotHistogram2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

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

	Nan::SetPrototypeMethod(tpl, "Paint", Paint);
	Nan::SetPrototypeMethod(tpl, "paint", Paint);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetTransferFunction", SetTransferFunction);
	Nan::SetPrototypeMethod(tpl, "setTransferFunction", SetTransferFunction);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	ptpl.Reset( tpl );
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
		VtkPlotHistogram2DWrap* obj = new VtkPlotHistogram2DWrap(native);
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

void VtkPlotHistogram2DWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPlotHistogram2DWrap>(info.Holder());
	vtkPlotHistogram2D *native = (vtkPlotHistogram2D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
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
		native->GetBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
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
		VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native = r;
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

void VtkPlotHistogram2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPlotHistogram2DWrap>(info.Holder());
	vtkPlotHistogram2D *native = (vtkPlotHistogram2D *)wrapper->native.GetPointer();
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
		VtkPlotHistogram2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlotHistogram2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlotHistogram2DWrap *w = new VtkPlotHistogram2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotHistogram2DWrap::Paint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPlotHistogram2DWrap>(info.Holder());
	vtkPlotHistogram2D *native = (vtkPlotHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkContext2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkContext2DWrap *a0 = ObjectWrap::Unwrap<VtkContext2DWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Paint(
			(vtkContext2D *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotHistogram2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotHistogram2DWrap *wrapper = ObjectWrap::Unwrap<VtkPlotHistogram2DWrap>(info.Holder());
	vtkPlotHistogram2D *native = (vtkPlotHistogram2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
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
			VtkPlotHistogram2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPlotHistogram2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlotHistogram2DWrap *w = new VtkPlotHistogram2DWrap();
		w->native = r;
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTableWrap::ptpl))->HasInstance(info[0]))
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

