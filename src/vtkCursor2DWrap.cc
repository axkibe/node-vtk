/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkCursor2DWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCursor2DWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkCursor2DWrap::ptpl;

VtkCursor2DWrap::VtkCursor2DWrap()
{ }

VtkCursor2DWrap::VtkCursor2DWrap(vtkSmartPointer<vtkCursor2D> _native)
{ native = _native; }

VtkCursor2DWrap::~VtkCursor2DWrap()
{ }

void VtkCursor2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCursor2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Cursor2D").ToLocalChecked(), ConstructorGetter);
}

void VtkCursor2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCursor2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCursor2DWrap").ToLocalChecked());
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

	Nan::SetPrototypeMethod(tpl, "GetOutline", GetOutline);
	Nan::SetPrototypeMethod(tpl, "getOutline", GetOutline);

	Nan::SetPrototypeMethod(tpl, "GetPoint", GetPoint);
	Nan::SetPrototypeMethod(tpl, "getPoint", GetPoint);

	Nan::SetPrototypeMethod(tpl, "GetRadius", GetRadius);
	Nan::SetPrototypeMethod(tpl, "getRadius", GetRadius);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMaxValue", GetRadiusMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMaxValue", GetRadiusMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMinValue", GetRadiusMinValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMinValue", GetRadiusMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTranslationMode", GetTranslationMode);
	Nan::SetPrototypeMethod(tpl, "getTranslationMode", GetTranslationMode);

	Nan::SetPrototypeMethod(tpl, "GetWrap", GetWrap);
	Nan::SetPrototypeMethod(tpl, "getWrap", GetWrap);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OutlineOff", OutlineOff);
	Nan::SetPrototypeMethod(tpl, "outlineOff", OutlineOff);

	Nan::SetPrototypeMethod(tpl, "OutlineOn", OutlineOn);
	Nan::SetPrototypeMethod(tpl, "outlineOn", OutlineOn);

	Nan::SetPrototypeMethod(tpl, "PointOff", PointOff);
	Nan::SetPrototypeMethod(tpl, "pointOff", PointOff);

	Nan::SetPrototypeMethod(tpl, "PointOn", PointOn);
	Nan::SetPrototypeMethod(tpl, "pointOn", PointOn);

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

	Nan::SetPrototypeMethod(tpl, "SetPoint", SetPoint);
	Nan::SetPrototypeMethod(tpl, "setPoint", SetPoint);

	Nan::SetPrototypeMethod(tpl, "SetRadius", SetRadius);
	Nan::SetPrototypeMethod(tpl, "setRadius", SetRadius);

	Nan::SetPrototypeMethod(tpl, "SetTranslationMode", SetTranslationMode);
	Nan::SetPrototypeMethod(tpl, "setTranslationMode", SetTranslationMode);

	Nan::SetPrototypeMethod(tpl, "SetWrap", SetWrap);
	Nan::SetPrototypeMethod(tpl, "setWrap", SetWrap);

	Nan::SetPrototypeMethod(tpl, "TranslationModeOff", TranslationModeOff);
	Nan::SetPrototypeMethod(tpl, "translationModeOff", TranslationModeOff);

	Nan::SetPrototypeMethod(tpl, "TranslationModeOn", TranslationModeOn);
	Nan::SetPrototypeMethod(tpl, "translationModeOn", TranslationModeOn);

	Nan::SetPrototypeMethod(tpl, "WrapOff", WrapOff);
	Nan::SetPrototypeMethod(tpl, "wrapOff", WrapOff);

	Nan::SetPrototypeMethod(tpl, "WrapOn", WrapOn);
	Nan::SetPrototypeMethod(tpl, "wrapOn", WrapOn);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkCursor2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCursor2D> native = vtkSmartPointer<vtkCursor2D>::New();
		VtkCursor2DWrap* obj = new VtkCursor2DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCursor2DWrap::AllOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AllOff();
}

void VtkCursor2DWrap::AllOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AllOn();
}

void VtkCursor2DWrap::AxesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AxesOff();
}

void VtkCursor2DWrap::AxesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AxesOn();
}

void VtkCursor2DWrap::GetAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAxes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCursor2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCursor2DWrap::GetOutline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutline();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCursor2DWrap::GetPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoint();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCursor2DWrap::GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCursor2DWrap::GetRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCursor2DWrap::GetRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCursor2DWrap::GetTranslationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTranslationMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCursor2DWrap::GetWrap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWrap();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCursor2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
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

void VtkCursor2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	vtkCursor2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCursor2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCursor2DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCursor2DWrap *w = new VtkCursor2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCursor2DWrap::OutlineOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineOff();
}

void VtkCursor2DWrap::OutlineOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineOn();
}

void VtkCursor2DWrap::PointOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PointOff();
}

void VtkCursor2DWrap::PointOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PointOn();
}

void VtkCursor2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCursor2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCursor2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkCursor2DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCursor2DWrap *w = new VtkCursor2DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCursor2DWrap::SetAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
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

void VtkCursor2DWrap::SetFocalPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
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

void VtkCursor2DWrap::SetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
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

void VtkCursor2DWrap::SetOutline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
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

void VtkCursor2DWrap::SetPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPoint(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCursor2DWrap::SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
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

void VtkCursor2DWrap::SetTranslationMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
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

void VtkCursor2DWrap::SetWrap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
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

void VtkCursor2DWrap::TranslationModeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TranslationModeOff();
}

void VtkCursor2DWrap::TranslationModeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TranslationModeOn();
}

void VtkCursor2DWrap::WrapOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WrapOff();
}

void VtkCursor2DWrap::WrapOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCursor2DWrap *wrapper = ObjectWrap::Unwrap<VtkCursor2DWrap>(info.Holder());
	vtkCursor2D *native = (vtkCursor2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WrapOn();
}

