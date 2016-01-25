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
Nan::Persistent<v8::Function> VtkImageMapperWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkImageMapperWrap::ptpl;

VtkImageMapperWrap::VtkImageMapperWrap()
{ }

VtkImageMapperWrap::VtkImageMapperWrap(vtkSmartPointer<vtkImageMapper> _native)
{ native = _native; }

VtkImageMapperWrap::~VtkImageMapperWrap()
{ }

void VtkImageMapperWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMapper2DWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMapper2DWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkImageMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkImageMapper").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageMapper").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageMapperWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
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

	Nan::SetPrototypeMethod(tpl, "RenderData", RenderData);
	Nan::SetPrototypeMethod(tpl, "renderData", RenderData);

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
		VtkImageMapperWrap* obj = new VtkImageMapperWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageMapperWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageMapperWrap *w = new VtkImageMapperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageMapperWrap::RenderData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkImageDataWrap *a1 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject())
			{
				VtkActor2DWrap *a2 = ObjectWrap::Unwrap<VtkActor2DWrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->RenderData(
					(vtkViewport *) a0->native.GetPointer(),
					(vtkImageData *) a1->native.GetPointer(),
					(vtkActor2D *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageMapperWrap::RenderStart(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
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
	if(info.Length() > 0 && info[0]->IsObject())
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
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkImageMapperWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageMapperWrap *w = new VtkImageMapperWrap();
		w->native.TakeReference(r);
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

void VtkImageMapperWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageMapperWrap *wrapper = ObjectWrap::Unwrap<VtkImageMapperWrap>(info.Holder());
	vtkImageMapper *native = (vtkImageMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

