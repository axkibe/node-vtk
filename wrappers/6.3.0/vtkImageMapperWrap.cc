/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMapper2DWrap.h"
#include "vtkImageMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkViewportWrap.h"
#include "vtkActor2DWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageMapperWrap::ptpl;

VtkImageMapperWrap::VtkImageMapperWrap()
{ }

VtkImageMapperWrap::VtkImageMapperWrap(vtkSmartPointer<vtkImageMapper> _native)
{ native = _native; }

VtkImageMapperWrap::~VtkImageMapperWrap()
{ }

void VtkImageMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkImageMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMapper2DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMapper2DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColorLevel", GetColorLevel);
	Nan::SetPrototypeMethod(tpl, "getColorLevel", GetColorLevel);

	Nan::SetPrototypeMethod(tpl, "GetColorScale", GetColorScale);
	Nan::SetPrototypeMethod(tpl, "getColorScale", GetColorScale);

	Nan::SetPrototypeMethod(tpl, "GetColorShift", GetColorShift);
	Nan::SetPrototypeMethod(tpl, "getColorShift", GetColorShift);

	Nan::SetPrototypeMethod(tpl, "GetColorWindow", GetColorWindow);
	Nan::SetPrototypeMethod(tpl, "getColorWindow", GetColorWindow);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetRenderToRectangle", GetRenderToRectangle);
	Nan::SetPrototypeMethod(tpl, "getRenderToRectangle", GetRenderToRectangle);

	Nan::SetPrototypeMethod(tpl, "GetUseCustomExtents", GetUseCustomExtents);
	Nan::SetPrototypeMethod(tpl, "getUseCustomExtents", GetUseCustomExtents);

	Nan::SetPrototypeMethod(tpl, "GetWholeZMax", GetWholeZMax);
	Nan::SetPrototypeMethod(tpl, "getWholeZMax", GetWholeZMax);

	Nan::SetPrototypeMethod(tpl, "GetWholeZMin", GetWholeZMin);
	Nan::SetPrototypeMethod(tpl, "getWholeZMin", GetWholeZMin);

	Nan::SetPrototypeMethod(tpl, "GetZSlice", GetZSlice);
	Nan::SetPrototypeMethod(tpl, "getZSlice", GetZSlice);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RenderStart", RenderStart);
	Nan::SetPrototypeMethod(tpl, "renderStart", RenderStart);

	Nan::SetPrototypeMethod(tpl, "RenderToRectangleOff", RenderToRectangleOff);
	Nan::SetPrototypeMethod(tpl, "renderToRectangleOff", RenderToRectangleOff);

	Nan::SetPrototypeMethod(tpl, "RenderToRectangleOn", RenderToRectangleOn);
	Nan::SetPrototypeMethod(tpl, "renderToRectangleOn", RenderToRectangleOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColorLevel", SetColorLevel);
	Nan::SetPrototypeMethod(tpl, "setColorLevel", SetColorLevel);

	Nan::SetPrototypeMethod(tpl, "SetColorWindow", SetColorWindow);
	Nan::SetPrototypeMethod(tpl, "setColorWindow", SetColorWindow);

	Nan::SetPrototypeMethod(tpl, "SetCustomDisplayExtents", SetCustomDisplayExtents);
	Nan::SetPrototypeMethod(tpl, "setCustomDisplayExtents", SetCustomDisplayExtents);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetRenderToRectangle", SetRenderToRectangle);
	Nan::SetPrototypeMethod(tpl, "setRenderToRectangle", SetRenderToRectangle);

	Nan::SetPrototypeMethod(tpl, "SetUseCustomExtents", SetUseCustomExtents);
	Nan::SetPrototypeMethod(tpl, "setUseCustomExtents", SetUseCustomExtents);

	Nan::SetPrototypeMethod(tpl, "SetZSlice", SetZSlice);
	Nan::SetPrototypeMethod(tpl, "setZSlice", SetZSlice);

	Nan::SetPrototypeMethod(tpl, "UseCustomExtentsOff", UseCustomExtentsOff);
	Nan::SetPrototypeMethod(tpl, "useCustomExtentsOff", UseCustomExtentsOff);

	Nan::SetPrototypeMethod(tpl, "UseCustomExtentsOn", UseCustomExtentsOn);
	Nan::SetPrototypeMethod(tpl, "useCustomExtentsOn", UseCustomExtentsOn);

	ptpl.Reset( tpl );
}

void VtkImageMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageMapper> native = vtkSmartPointer<vtkImageMapper>::New();
		VtkImageMapperWrap* obj = new VtkImageMapperWrap(native);
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

void VtkImageMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageMapperWrap::GetColorLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMapperWrap::GetColorScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorScale();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMapperWrap::GetColorShift(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorShift();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMapperWrap::GetColorWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorWindow();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMapperWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
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

void VtkImageMapperWrap::GetRenderToRectangle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderToRectangle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMapperWrap::GetUseCustomExtents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseCustomExtents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMapperWrap::GetWholeZMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWholeZMax();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMapperWrap::GetWholeZMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWholeZMin();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMapperWrap::GetZSlice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZSlice();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
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

void VtkImageMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	vtkImageMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageMapperWrap *w = new VtkImageMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageMapperWrap::RenderStart(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkActor2DWrap::ptpl))->HasInstance(info[1]))
		{
			VtkActor2DWrap *a1 = ObjectWrap::Unwrap<VtkActor2DWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->RenderStart(
				(vtkViewport *) a0->native.GetPointer(),
				(vtkActor2D *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapperWrap::RenderToRectangleOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RenderToRectangleOff();
}

void VtkImageMapperWrap::RenderToRectangleOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RenderToRectangleOn();
}

void VtkImageMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageMapperWrap *w = new VtkImageMapperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapperWrap::SetColorLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColorLevel(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapperWrap::SetColorWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColorWindow(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapperWrap::SetCustomDisplayExtents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
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
		native->SetCustomDisplayExtents(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
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
		native->SetCustomDisplayExtents(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapperWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapperWrap::SetRenderToRectangle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderToRectangle(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapperWrap::SetUseCustomExtents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseCustomExtents(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapperWrap::SetZSlice(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZSlice(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapperWrap::UseCustomExtentsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseCustomExtentsOff();
}

void VtkImageMapperWrap::UseCustomExtentsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseCustomExtentsOn();
}

