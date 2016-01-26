/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkCursor3DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCursor3DWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkCursor3DWrap::ptpl;

VtkCursor3DWrap::VtkCursor3DWrap()
{ }

VtkCursor3DWrap::VtkCursor3DWrap(vtkSmartPointer<vtkCursor3D> _native)
{ native = _native; }

VtkCursor3DWrap::~VtkCursor3DWrap()
{ }

void VtkCursor3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCursor3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Cursor3D").ToLocalChecked(), ConstructorGetter);
}

void VtkCursor3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCursor3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCursor3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AllOff", AllOff);
	Nan::SetPrototypeMethod(tpl, "allOff", AllOff);

	Nan::SetPrototypeMethod(tpl, "AllOn", AllOn);
	Nan::SetPrototypeMethod(tpl, "allOn", AllOn);

	Nan::SetPrototypeMethod(tpl, "AxesOff", AxesOff);
	Nan::SetPrototypeMethod(tpl, "axesOff", AxesOff);

	Nan::SetPrototypeMethod(tpl, "AxesOn", AxesOn);
	Nan::SetPrototypeMethod(tpl, "axesOn", AxesOn);

	Nan::SetPrototypeMethod(tpl, "GetAxes", GetAxes);
	Nan::SetPrototypeMethod(tpl, "getAxes", GetAxes);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFocus", GetFocus);
	Nan::SetPrototypeMethod(tpl, "getFocus", GetFocus);

	Nan::SetPrototypeMethod(tpl, "GetOutline", GetOutline);
	Nan::SetPrototypeMethod(tpl, "getOutline", GetOutline);

	Nan::SetPrototypeMethod(tpl, "GetTranslationMode", GetTranslationMode);
	Nan::SetPrototypeMethod(tpl, "getTranslationMode", GetTranslationMode);

	Nan::SetPrototypeMethod(tpl, "GetWrap", GetWrap);
	Nan::SetPrototypeMethod(tpl, "getWrap", GetWrap);

	Nan::SetPrototypeMethod(tpl, "GetXShadows", GetXShadows);
	Nan::SetPrototypeMethod(tpl, "getXShadows", GetXShadows);

	Nan::SetPrototypeMethod(tpl, "GetYShadows", GetYShadows);
	Nan::SetPrototypeMethod(tpl, "getYShadows", GetYShadows);

	Nan::SetPrototypeMethod(tpl, "GetZShadows", GetZShadows);
	Nan::SetPrototypeMethod(tpl, "getZShadows", GetZShadows);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OutlineOff", OutlineOff);
	Nan::SetPrototypeMethod(tpl, "outlineOff", OutlineOff);

	Nan::SetPrototypeMethod(tpl, "OutlineOn", OutlineOn);
	Nan::SetPrototypeMethod(tpl, "outlineOn", OutlineOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAxes", SetAxes);
	Nan::SetPrototypeMethod(tpl, "setAxes", SetAxes);

	Nan::SetPrototypeMethod(tpl, "SetFocalPoint", SetFocalPoint);
	Nan::SetPrototypeMethod(tpl, "setFocalPoint", SetFocalPoint);

	Nan::SetPrototypeMethod(tpl, "SetModelBounds", SetModelBounds);
	Nan::SetPrototypeMethod(tpl, "setModelBounds", SetModelBounds);

	Nan::SetPrototypeMethod(tpl, "SetOutline", SetOutline);
	Nan::SetPrototypeMethod(tpl, "setOutline", SetOutline);

	Nan::SetPrototypeMethod(tpl, "SetTranslationMode", SetTranslationMode);
	Nan::SetPrototypeMethod(tpl, "setTranslationMode", SetTranslationMode);

	Nan::SetPrototypeMethod(tpl, "SetWrap", SetWrap);
	Nan::SetPrototypeMethod(tpl, "setWrap", SetWrap);

	Nan::SetPrototypeMethod(tpl, "SetXShadows", SetXShadows);
	Nan::SetPrototypeMethod(tpl, "setXShadows", SetXShadows);

	Nan::SetPrototypeMethod(tpl, "SetYShadows", SetYShadows);
	Nan::SetPrototypeMethod(tpl, "setYShadows", SetYShadows);

	Nan::SetPrototypeMethod(tpl, "SetZShadows", SetZShadows);
	Nan::SetPrototypeMethod(tpl, "setZShadows", SetZShadows);

	Nan::SetPrototypeMethod(tpl, "TranslationModeOff", TranslationModeOff);
	Nan::SetPrototypeMethod(tpl, "translationModeOff", TranslationModeOff);

	Nan::SetPrototypeMethod(tpl, "TranslationModeOn", TranslationModeOn);
	Nan::SetPrototypeMethod(tpl, "translationModeOn", TranslationModeOn);

	Nan::SetPrototypeMethod(tpl, "WrapOff", WrapOff);
	Nan::SetPrototypeMethod(tpl, "wrapOff", WrapOff);

	Nan::SetPrototypeMethod(tpl, "WrapOn", WrapOn);
	Nan::SetPrototypeMethod(tpl, "wrapOn", WrapOn);

	Nan::SetPrototypeMethod(tpl, "XShadowsOff", XShadowsOff);
	Nan::SetPrototypeMethod(tpl, "xShadowsOff", XShadowsOff);

	Nan::SetPrototypeMethod(tpl, "XShadowsOn", XShadowsOn);
	Nan::SetPrototypeMethod(tpl, "xShadowsOn", XShadowsOn);

	Nan::SetPrototypeMethod(tpl, "YShadowsOff", YShadowsOff);
	Nan::SetPrototypeMethod(tpl, "yShadowsOff", YShadowsOff);

	Nan::SetPrototypeMethod(tpl, "YShadowsOn", YShadowsOn);
	Nan::SetPrototypeMethod(tpl, "yShadowsOn", YShadowsOn);

	Nan::SetPrototypeMethod(tpl, "ZShadowsOff", ZShadowsOff);
	Nan::SetPrototypeMethod(tpl, "zShadowsOff", ZShadowsOff);

	Nan::SetPrototypeMethod(tpl, "ZShadowsOn", ZShadowsOn);
	Nan::SetPrototypeMethod(tpl, "zShadowsOn", ZShadowsOn);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkCursor3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCursor3D> native = vtkSmartPointer<vtkCursor3D>::New();
		VtkCursor3DWrap* obj = new VtkCursor3DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCursor3DWrap::AllOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AllOff();
}

void VtkCursor3DWrap::AllOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AllOn();
}

void VtkCursor3DWrap::AxesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AxesOff();
}

void VtkCursor3DWrap::AxesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AxesOn();
}

void VtkCursor3DWrap::GetAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAxes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCursor3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCursor3DWrap::GetFocus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFocus();
		VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolyDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCursor3DWrap::GetOutline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutline();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCursor3DWrap::GetTranslationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTranslationMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCursor3DWrap::GetWrap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWrap();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCursor3DWrap::GetXShadows(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXShadows();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCursor3DWrap::GetYShadows(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYShadows();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCursor3DWrap::GetZShadows(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZShadows();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCursor3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
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

void VtkCursor3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	vtkCursor3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCursor3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCursor3DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCursor3DWrap *w = new VtkCursor3DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCursor3DWrap::OutlineOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineOff();
}

void VtkCursor3DWrap::OutlineOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineOn();
}

void VtkCursor3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCursor3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCursor3DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkCursor3DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCursor3DWrap *w = new VtkCursor3DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCursor3DWrap::SetAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAxes(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCursor3DWrap::SetFocalPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetFocalPoint(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCursor3DWrap::SetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetModelBounds(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCursor3DWrap::SetOutline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
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

void VtkCursor3DWrap::SetTranslationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTranslationMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCursor3DWrap::SetWrap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWrap(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCursor3DWrap::SetXShadows(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXShadows(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCursor3DWrap::SetYShadows(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYShadows(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCursor3DWrap::SetZShadows(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZShadows(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCursor3DWrap::TranslationModeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TranslationModeOff();
}

void VtkCursor3DWrap::TranslationModeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TranslationModeOn();
}

void VtkCursor3DWrap::WrapOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WrapOff();
}

void VtkCursor3DWrap::WrapOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WrapOn();
}

void VtkCursor3DWrap::XShadowsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->XShadowsOff();
}

void VtkCursor3DWrap::XShadowsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->XShadowsOn();
}

void VtkCursor3DWrap::YShadowsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->YShadowsOff();
}

void VtkCursor3DWrap::YShadowsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->YShadowsOn();
}

void VtkCursor3DWrap::ZShadowsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ZShadowsOff();
}

void VtkCursor3DWrap::ZShadowsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor3DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor3DWrap>(info.Holder());
	vtkCursor3D *native = (vtkCursor3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ZShadowsOn();
}

