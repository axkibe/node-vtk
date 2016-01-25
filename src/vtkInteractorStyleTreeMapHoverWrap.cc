/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInteractorStyleImageWrap.h"
#include "vtkInteractorStyleTreeMapHoverWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTreeMapLayoutWrap.h"
#include "vtkTreeMapToPolyDataWrap.h"
#include "vtkRenderWindowInteractorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkInteractorStyleTreeMapHoverWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkInteractorStyleTreeMapHoverWrap::ptpl;

VtkInteractorStyleTreeMapHoverWrap::VtkInteractorStyleTreeMapHoverWrap()
{ }

VtkInteractorStyleTreeMapHoverWrap::VtkInteractorStyleTreeMapHoverWrap(vtkSmartPointer<vtkInteractorStyleTreeMapHover> _native)
{ native = _native; }

VtkInteractorStyleTreeMapHoverWrap::~VtkInteractorStyleTreeMapHoverWrap()
{ }

void VtkInteractorStyleTreeMapHoverWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInteractorStyleImageWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInteractorStyleImageWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkInteractorStyleTreeMapHoverWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkInteractorStyleTreeMapHover").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("InteractorStyleTreeMapHover").ToLocalChecked(),tpl->GetFunction());
}

void VtkInteractorStyleTreeMapHoverWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHighLightWidth", GetHighLightWidth);
	Nan::SetPrototypeMethod(tpl, "getHighLightWidth", GetHighLightWidth);

	Nan::SetPrototypeMethod(tpl, "GetLabelField", GetLabelField);
	Nan::SetPrototypeMethod(tpl, "getLabelField", GetLabelField);

	Nan::SetPrototypeMethod(tpl, "GetLayout", GetLayout);
	Nan::SetPrototypeMethod(tpl, "getLayout", GetLayout);

	Nan::SetPrototypeMethod(tpl, "GetSelectionWidth", GetSelectionWidth);
	Nan::SetPrototypeMethod(tpl, "getSelectionWidth", GetSelectionWidth);

	Nan::SetPrototypeMethod(tpl, "GetTreeMapToPolyData", GetTreeMapToPolyData);
	Nan::SetPrototypeMethod(tpl, "getTreeMapToPolyData", GetTreeMapToPolyData);

	Nan::SetPrototypeMethod(tpl, "HighLightCurrentSelectedItem", HighLightCurrentSelectedItem);
	Nan::SetPrototypeMethod(tpl, "highLightCurrentSelectedItem", HighLightCurrentSelectedItem);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OnLeftButtonUp", OnLeftButtonUp);
	Nan::SetPrototypeMethod(tpl, "onLeftButtonUp", OnLeftButtonUp);

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

	Nan::SetPrototypeMethod(tpl, "SetSelectionLightColor", SetSelectionLightColor);
	Nan::SetPrototypeMethod(tpl, "setSelectionLightColor", SetSelectionLightColor);

	Nan::SetPrototypeMethod(tpl, "SetSelectionWidth", SetSelectionWidth);
	Nan::SetPrototypeMethod(tpl, "setSelectionWidth", SetSelectionWidth);

	Nan::SetPrototypeMethod(tpl, "SetTreeMapToPolyData", SetTreeMapToPolyData);
	Nan::SetPrototypeMethod(tpl, "setTreeMapToPolyData", SetTreeMapToPolyData);

}

void VtkInteractorStyleTreeMapHoverWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyleTreeMapHover> native = vtkSmartPointer<vtkInteractorStyleTreeMapHover>::New();
		VtkInteractorStyleTreeMapHoverWrap* obj = new VtkInteractorStyleTreeMapHoverWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkInteractorStyleTreeMapHoverWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleTreeMapHoverWrap::GetHighLightWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHighLightWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleTreeMapHoverWrap::GetLabelField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelField();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleTreeMapHoverWrap::GetLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
	vtkTreeMapLayout * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLayout();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTreeMapLayoutWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeMapLayoutWrap *w = new VtkTreeMapLayoutWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleTreeMapHoverWrap::GetSelectionWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleTreeMapHoverWrap::GetTreeMapToPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
	vtkTreeMapToPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTreeMapToPolyData();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTreeMapToPolyDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeMapToPolyDataWrap *w = new VtkTreeMapToPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleTreeMapHoverWrap::HighLightCurrentSelectedItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->HighLightCurrentSelectedItem();
}

void VtkInteractorStyleTreeMapHoverWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
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

void VtkInteractorStyleTreeMapHoverWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
	vtkInteractorStyleTreeMapHover * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInteractorStyleTreeMapHoverWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleTreeMapHoverWrap *w = new VtkInteractorStyleTreeMapHoverWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleTreeMapHoverWrap::OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonUp();
}

void VtkInteractorStyleTreeMapHoverWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkInteractorStyleTreeMapHoverWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInteractorStyleTreeMapHover * r;
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
			Nan::New<v8::Function>(VtkInteractorStyleTreeMapHoverWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyleTreeMapHoverWrap *w = new VtkInteractorStyleTreeMapHoverWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleTreeMapHoverWrap::SetHighLightColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
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

void VtkInteractorStyleTreeMapHoverWrap::SetHighLightWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
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

void VtkInteractorStyleTreeMapHoverWrap::SetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkInteractorStyleTreeMapHoverWrap::SetLabelField(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkInteractorStyleTreeMapHoverWrap::SetLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTreeMapLayoutWrap *a0 = ObjectWrap::Unwrap<VtkTreeMapLayoutWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLayout(
			(vtkTreeMapLayout *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleTreeMapHoverWrap::SetSelectionLightColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
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
				native->SetSelectionLightColor(
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

void VtkInteractorStyleTreeMapHoverWrap::SetSelectionWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionWidth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleTreeMapHoverWrap::SetTreeMapToPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTreeMapHoverWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTreeMapHoverWrap>(info.Holder());
	vtkInteractorStyleTreeMapHover *native = (vtkInteractorStyleTreeMapHover *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTreeMapToPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkTreeMapToPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTreeMapToPolyData(
			(vtkTreeMapToPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

