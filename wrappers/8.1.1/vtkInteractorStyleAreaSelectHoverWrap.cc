/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkInteractorStyleRubberBand2DWrap.h"
#include "vtkInteractorStyleAreaSelectHoverWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAreaLayoutWrap.h"
#include "vtkRenderWindowInteractorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorStyleAreaSelectHoverWrap::ptpl;

VtkInteractorStyleAreaSelectHoverWrap::VtkInteractorStyleAreaSelectHoverWrap()
{ }

VtkInteractorStyleAreaSelectHoverWrap::VtkInteractorStyleAreaSelectHoverWrap(vtkSmartPointer<vtkInteractorStyleAreaSelectHover> _native)
{ native = _native; }

VtkInteractorStyleAreaSelectHoverWrap::~VtkInteractorStyleAreaSelectHoverWrap()
{ }

void VtkInteractorStyleAreaSelectHoverWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInteractorStyleAreaSelectHover").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InteractorStyleAreaSelectHover").ToLocalChecked(), ConstructorGetter);
}

void VtkInteractorStyleAreaSelectHoverWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInteractorStyleAreaSelectHoverWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleRubberBand2DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleRubberBand2DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInteractorStyleAreaSelectHoverWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetHighLightWidth", GetHighLightWidth);
	Nan::SetPrototypeMethod(tpl, "getHighLightWidth", GetHighLightWidth);

	Nan::SetPrototypeMethod(tpl, "GetLabelField", GetLabelField);
	Nan::SetPrototypeMethod(tpl, "getLabelField", GetLabelField);

	Nan::SetPrototypeMethod(tpl, "GetLayout", GetLayout);
	Nan::SetPrototypeMethod(tpl, "getLayout", GetLayout);

	Nan::SetPrototypeMethod(tpl, "GetUseRectangularCoordinates", GetUseRectangularCoordinates);
	Nan::SetPrototypeMethod(tpl, "getUseRectangularCoordinates", GetUseRectangularCoordinates);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OnMouseMove", OnMouseMove);
	Nan::SetPrototypeMethod(tpl, "onMouseMove", OnMouseMove);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetHighLightColor", SetHighLightColor);
	Nan::SetPrototypeMethod(tpl, "setHighLightColor", SetHighLightColor);

	Nan::SetPrototypeMethod(tpl, "SetHighLightWidth", SetHighLightWidth);
	Nan::SetPrototypeMethod(tpl, "setHighLightWidth", SetHighLightWidth);

	Nan::SetPrototypeMethod(tpl, "SetInteractor", SetInteractor);
	Nan::SetPrototypeMethod(tpl, "setInteractor", SetInteractor);

	Nan::SetPrototypeMethod(tpl, "SetLabelField", SetLabelField);
	Nan::SetPrototypeMethod(tpl, "setLabelField", SetLabelField);

	Nan::SetPrototypeMethod(tpl, "SetLayout", SetLayout);
	Nan::SetPrototypeMethod(tpl, "setLayout", SetLayout);

	Nan::SetPrototypeMethod(tpl, "SetUseRectangularCoordinates", SetUseRectangularCoordinates);
	Nan::SetPrototypeMethod(tpl, "setUseRectangularCoordinates", SetUseRectangularCoordinates);

	Nan::SetPrototypeMethod(tpl, "UseRectangularCoordinatesOff", UseRectangularCoordinatesOff);
	Nan::SetPrototypeMethod(tpl, "useRectangularCoordinatesOff", UseRectangularCoordinatesOff);

	Nan::SetPrototypeMethod(tpl, "UseRectangularCoordinatesOn", UseRectangularCoordinatesOn);
	Nan::SetPrototypeMethod(tpl, "useRectangularCoordinatesOn", UseRectangularCoordinatesOn);

#ifdef VTK_NODE_PLUS_VTKINTERACTORSTYLEAREASELECTHOVERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKINTERACTORSTYLEAREASELECTHOVERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkInteractorStyleAreaSelectHoverWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyleAreaSelectHover> native = vtkSmartPointer<vtkInteractorStyleAreaSelectHover>::New();
		VtkInteractorStyleAreaSelectHoverWrap* obj = new VtkInteractorStyleAreaSelectHoverWrap(native);
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

void VtkInteractorStyleAreaSelectHoverWrap::GetHighLightWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleAreaSelectHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleAreaSelectHoverWrap>(info.Holder());
	vtkInteractorStyleAreaSelectHover *native = (vtkInteractorStyleAreaSelectHover *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHighLightWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleAreaSelectHoverWrap::GetLabelField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleAreaSelectHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleAreaSelectHoverWrap>(info.Holder());
	vtkInteractorStyleAreaSelectHover *native = (vtkInteractorStyleAreaSelectHover *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelField();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleAreaSelectHoverWrap::GetLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleAreaSelectHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleAreaSelectHoverWrap>(info.Holder());
	vtkInteractorStyleAreaSelectHover *native = (vtkInteractorStyleAreaSelectHover *)wrapper->native.GetPointer();
	vtkAreaLayout * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLayout();
	VtkAreaLayoutWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAreaLayoutWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAreaLayoutWrap *w = new VtkAreaLayoutWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleAreaSelectHoverWrap::GetUseRectangularCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleAreaSelectHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleAreaSelectHoverWrap>(info.Holder());
	vtkInteractorStyleAreaSelectHover *native = (vtkInteractorStyleAreaSelectHover *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseRectangularCoordinates();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleAreaSelectHoverWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleAreaSelectHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleAreaSelectHoverWrap>(info.Holder());
	vtkInteractorStyleAreaSelectHover *native = (vtkInteractorStyleAreaSelectHover *)wrapper->native.GetPointer();
	vtkInteractorStyleAreaSelectHover * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkInteractorStyleAreaSelectHoverWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInteractorStyleAreaSelectHoverWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleAreaSelectHoverWrap *w = new VtkInteractorStyleAreaSelectHoverWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleAreaSelectHoverWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleAreaSelectHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleAreaSelectHoverWrap>(info.Holder());
	vtkInteractorStyleAreaSelectHover *native = (vtkInteractorStyleAreaSelectHover *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkInteractorStyleAreaSelectHoverWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleAreaSelectHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleAreaSelectHoverWrap>(info.Holder());
	vtkInteractorStyleAreaSelectHover *native = (vtkInteractorStyleAreaSelectHover *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkInteractorStyleAreaSelectHover * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkInteractorStyleAreaSelectHoverWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInteractorStyleAreaSelectHoverWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyleAreaSelectHoverWrap *w = new VtkInteractorStyleAreaSelectHoverWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleAreaSelectHoverWrap::SetHighLightColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleAreaSelectHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleAreaSelectHoverWrap>(info.Holder());
	vtkInteractorStyleAreaSelectHover *native = (vtkInteractorStyleAreaSelectHover *)wrapper->native.GetPointer();
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
				native->SetHighLightColor(
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

void VtkInteractorStyleAreaSelectHoverWrap::SetHighLightWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleAreaSelectHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleAreaSelectHoverWrap>(info.Holder());
	vtkInteractorStyleAreaSelectHover *native = (vtkInteractorStyleAreaSelectHover *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHighLightWidth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleAreaSelectHoverWrap::SetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleAreaSelectHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleAreaSelectHoverWrap>(info.Holder());
	vtkInteractorStyleAreaSelectHover *native = (vtkInteractorStyleAreaSelectHover *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderWindowInteractorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderWindowInteractorWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowInteractorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInteractor(
			(vtkRenderWindowInteractor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleAreaSelectHoverWrap::SetLabelField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleAreaSelectHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleAreaSelectHoverWrap>(info.Holder());
	vtkInteractorStyleAreaSelectHover *native = (vtkInteractorStyleAreaSelectHover *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelField(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleAreaSelectHoverWrap::SetLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleAreaSelectHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleAreaSelectHoverWrap>(info.Holder());
	vtkInteractorStyleAreaSelectHover *native = (vtkInteractorStyleAreaSelectHover *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAreaLayoutWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAreaLayoutWrap *a0 = ObjectWrap::Unwrap<VtkAreaLayoutWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLayout(
			(vtkAreaLayout *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleAreaSelectHoverWrap::SetUseRectangularCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleAreaSelectHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleAreaSelectHoverWrap>(info.Holder());
	vtkInteractorStyleAreaSelectHover *native = (vtkInteractorStyleAreaSelectHover *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseRectangularCoordinates(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleAreaSelectHoverWrap::UseRectangularCoordinatesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleAreaSelectHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleAreaSelectHoverWrap>(info.Holder());
	vtkInteractorStyleAreaSelectHover *native = (vtkInteractorStyleAreaSelectHover *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseRectangularCoordinatesOff();
}

void VtkInteractorStyleAreaSelectHoverWrap::UseRectangularCoordinatesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleAreaSelectHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleAreaSelectHoverWrap>(info.Holder());
	vtkInteractorStyleAreaSelectHover *native = (vtkInteractorStyleAreaSelectHover *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseRectangularCoordinatesOn();
}

