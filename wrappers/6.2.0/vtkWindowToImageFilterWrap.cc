/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAlgorithmWrap.h"
#include "vtkWindowToImageFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkWindowWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkWindowToImageFilterWrap::ptpl;

VtkWindowToImageFilterWrap::VtkWindowToImageFilterWrap()
{ }

VtkWindowToImageFilterWrap::VtkWindowToImageFilterWrap(vtkSmartPointer<vtkWindowToImageFilter> _native)
{ native = _native; }

VtkWindowToImageFilterWrap::~VtkWindowToImageFilterWrap()
{ }

void VtkWindowToImageFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkWindowToImageFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("WindowToImageFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkWindowToImageFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkWindowToImageFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkWindowToImageFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "FixBoundaryOff", FixBoundaryOff);
	Nan::SetPrototypeMethod(tpl, "fixBoundaryOff", FixBoundaryOff);

	Nan::SetPrototypeMethod(tpl, "FixBoundaryOn", FixBoundaryOn);
	Nan::SetPrototypeMethod(tpl, "fixBoundaryOn", FixBoundaryOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFixBoundary", GetFixBoundary);
	Nan::SetPrototypeMethod(tpl, "getFixBoundary", GetFixBoundary);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetInputBufferType", GetInputBufferType);
	Nan::SetPrototypeMethod(tpl, "getInputBufferType", GetInputBufferType);

	Nan::SetPrototypeMethod(tpl, "GetMagnification", GetMagnification);
	Nan::SetPrototypeMethod(tpl, "getMagnification", GetMagnification);

	Nan::SetPrototypeMethod(tpl, "GetMagnificationMaxValue", GetMagnificationMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMagnificationMaxValue", GetMagnificationMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMagnificationMinValue", GetMagnificationMinValue);
	Nan::SetPrototypeMethod(tpl, "getMagnificationMinValue", GetMagnificationMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "GetReadFrontBuffer", GetReadFrontBuffer);
	Nan::SetPrototypeMethod(tpl, "getReadFrontBuffer", GetReadFrontBuffer);

	Nan::SetPrototypeMethod(tpl, "GetShouldRerender", GetShouldRerender);
	Nan::SetPrototypeMethod(tpl, "getShouldRerender", GetShouldRerender);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReadFrontBufferOff", ReadFrontBufferOff);
	Nan::SetPrototypeMethod(tpl, "readFrontBufferOff", ReadFrontBufferOff);

	Nan::SetPrototypeMethod(tpl, "ReadFrontBufferOn", ReadFrontBufferOn);
	Nan::SetPrototypeMethod(tpl, "readFrontBufferOn", ReadFrontBufferOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFixBoundary", SetFixBoundary);
	Nan::SetPrototypeMethod(tpl, "setFixBoundary", SetFixBoundary);

	Nan::SetPrototypeMethod(tpl, "SetInput", SetInput);
	Nan::SetPrototypeMethod(tpl, "setInput", SetInput);

	Nan::SetPrototypeMethod(tpl, "SetInputBufferType", SetInputBufferType);
	Nan::SetPrototypeMethod(tpl, "setInputBufferType", SetInputBufferType);

	Nan::SetPrototypeMethod(tpl, "SetInputBufferTypeToRGB", SetInputBufferTypeToRGB);
	Nan::SetPrototypeMethod(tpl, "setInputBufferTypeToRGB", SetInputBufferTypeToRGB);

	Nan::SetPrototypeMethod(tpl, "SetInputBufferTypeToRGBA", SetInputBufferTypeToRGBA);
	Nan::SetPrototypeMethod(tpl, "setInputBufferTypeToRGBA", SetInputBufferTypeToRGBA);

	Nan::SetPrototypeMethod(tpl, "SetInputBufferTypeToZBuffer", SetInputBufferTypeToZBuffer);
	Nan::SetPrototypeMethod(tpl, "setInputBufferTypeToZBuffer", SetInputBufferTypeToZBuffer);

	Nan::SetPrototypeMethod(tpl, "SetMagnification", SetMagnification);
	Nan::SetPrototypeMethod(tpl, "setMagnification", SetMagnification);

	Nan::SetPrototypeMethod(tpl, "SetReadFrontBuffer", SetReadFrontBuffer);
	Nan::SetPrototypeMethod(tpl, "setReadFrontBuffer", SetReadFrontBuffer);

	Nan::SetPrototypeMethod(tpl, "SetShouldRerender", SetShouldRerender);
	Nan::SetPrototypeMethod(tpl, "setShouldRerender", SetShouldRerender);

	Nan::SetPrototypeMethod(tpl, "SetViewport", SetViewport);
	Nan::SetPrototypeMethod(tpl, "setViewport", SetViewport);

	Nan::SetPrototypeMethod(tpl, "ShouldRerenderOff", ShouldRerenderOff);
	Nan::SetPrototypeMethod(tpl, "shouldRerenderOff", ShouldRerenderOff);

	Nan::SetPrototypeMethod(tpl, "ShouldRerenderOn", ShouldRerenderOn);
	Nan::SetPrototypeMethod(tpl, "shouldRerenderOn", ShouldRerenderOn);

	ptpl.Reset( tpl );
}

void VtkWindowToImageFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkWindowToImageFilter> native = vtkSmartPointer<vtkWindowToImageFilter>::New();
		VtkWindowToImageFilterWrap* obj = new VtkWindowToImageFilterWrap(native);
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

void VtkWindowToImageFilterWrap::FixBoundaryOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FixBoundaryOff();
}

void VtkWindowToImageFilterWrap::FixBoundaryOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FixBoundaryOn();
}

void VtkWindowToImageFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkWindowToImageFilterWrap::GetFixBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFixBoundary();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowToImageFilterWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	vtkWindow * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
		VtkWindowWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkWindowWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkWindowWrap *w = new VtkWindowWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWindowToImageFilterWrap::GetInputBufferType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputBufferType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowToImageFilterWrap::GetMagnification(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMagnification();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowToImageFilterWrap::GetMagnificationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMagnificationMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowToImageFilterWrap::GetMagnificationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMagnificationMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowToImageFilterWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
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

void VtkWindowToImageFilterWrap::GetReadFrontBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReadFrontBuffer();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowToImageFilterWrap::GetShouldRerender(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShouldRerender();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowToImageFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
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

void VtkWindowToImageFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	vtkWindowToImageFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkWindowToImageFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkWindowToImageFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkWindowToImageFilterWrap *w = new VtkWindowToImageFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWindowToImageFilterWrap::ReadFrontBufferOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadFrontBufferOff();
}

void VtkWindowToImageFilterWrap::ReadFrontBufferOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadFrontBufferOn();
}

void VtkWindowToImageFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkWindowToImageFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkWindowToImageFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkWindowToImageFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkWindowToImageFilterWrap *w = new VtkWindowToImageFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowToImageFilterWrap::SetFixBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFixBoundary(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowToImageFilterWrap::SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkWindowWrap *a0 = ObjectWrap::Unwrap<VtkWindowWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput(
			(vtkWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowToImageFilterWrap::SetInputBufferType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputBufferType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowToImageFilterWrap::SetInputBufferTypeToRGB(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInputBufferTypeToRGB();
}

void VtkWindowToImageFilterWrap::SetInputBufferTypeToRGBA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInputBufferTypeToRGBA();
}

void VtkWindowToImageFilterWrap::SetInputBufferTypeToZBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetInputBufferTypeToZBuffer();
}

void VtkWindowToImageFilterWrap::SetMagnification(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMagnification(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowToImageFilterWrap::SetReadFrontBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReadFrontBuffer(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowToImageFilterWrap::SetShouldRerender(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShouldRerender(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowToImageFilterWrap::SetViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetViewport(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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
		native->SetViewport(
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
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetViewport(
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

void VtkWindowToImageFilterWrap::ShouldRerenderOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ShouldRerenderOff();
}

void VtkWindowToImageFilterWrap::ShouldRerenderOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowToImageFilterWrap *wrapper = ObjectWrap::Unwrap<VtkWindowToImageFilterWrap>(info.Holder());
	vtkWindowToImageFilter *native = (vtkWindowToImageFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ShouldRerenderOn();
}

