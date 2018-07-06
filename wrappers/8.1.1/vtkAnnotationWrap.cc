/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataObjectWrap.h"
#include "vtkAnnotationWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkSelectionWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"
#include "vtkInformationStringKeyWrap.h"
#include "vtkInformationDoubleVectorKeyWrap.h"
#include "vtkInformationDoubleKeyWrap.h"
#include "vtkInformationIntegerKeyWrap.h"
#include "vtkInformationDataObjectKeyWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAnnotationWrap::ptpl;

VtkAnnotationWrap::VtkAnnotationWrap()
{ }

VtkAnnotationWrap::VtkAnnotationWrap(vtkSmartPointer<vtkAnnotation> _native)
{ native = _native; }

VtkAnnotationWrap::~VtkAnnotationWrap()
{ }

void VtkAnnotationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAnnotation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Annotation").ToLocalChecked(), ConstructorGetter);
}

void VtkAnnotationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAnnotationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAnnotationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "COLOR", COLOR);

	Nan::SetPrototypeMethod(tpl, "DATA", DATA);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "ENABLE", ENABLE);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetSelection", GetSelection);
	Nan::SetPrototypeMethod(tpl, "getSelection", GetSelection);

	Nan::SetPrototypeMethod(tpl, "HIDE", HIDE);

	Nan::SetPrototypeMethod(tpl, "ICON_INDEX", ICON_INDEX);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "LABEL", LABEL);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OPACITY", OPACITY);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetSelection", SetSelection);
	Nan::SetPrototypeMethod(tpl, "setSelection", SetSelection);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

#ifdef VTK_NODE_PLUS_VTKANNOTATIONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKANNOTATIONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkAnnotationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAnnotation> native = vtkSmartPointer<vtkAnnotation>::New();
		VtkAnnotationWrap* obj = new VtkAnnotationWrap(native);
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

void VtkAnnotationWrap::COLOR(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
	vtkInformationDoubleVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->COLOR();
	VtkInformationDoubleVectorKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationDoubleVectorKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationDoubleVectorKeyWrap *w = new VtkInformationDoubleVectorKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAnnotationWrap::DATA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
	vtkInformationDataObjectKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->DATA();
	VtkInformationDataObjectKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationDataObjectKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationDataObjectKeyWrap *w = new VtkInformationDataObjectKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAnnotationWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnnotationWrap::ENABLE(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->ENABLE();
	VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAnnotationWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationVectorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkAnnotation * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			VtkAnnotationWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkAnnotationWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkAnnotationWrap *w = new VtkAnnotationWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		vtkAnnotation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
		VtkAnnotationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAnnotationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAnnotationWrap *w = new VtkAnnotationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnnotationWrap::GetSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
	vtkSelection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelection();
	VtkSelectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSelectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSelectionWrap *w = new VtkSelectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAnnotationWrap::HIDE(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HIDE();
	VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAnnotationWrap::ICON_INDEX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->ICON_INDEX();
	VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAnnotationWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkAnnotationWrap::LABEL(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
	vtkInformationStringKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->LABEL();
	VtkInformationStringKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationStringKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationStringKeyWrap *w = new VtkInformationStringKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAnnotationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
	vtkAnnotation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkAnnotationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAnnotationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAnnotationWrap *w = new VtkAnnotationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAnnotationWrap::OPACITY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
	vtkInformationDoubleKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->OPACITY();
	VtkInformationDoubleKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationDoubleKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationDoubleKeyWrap *w = new VtkInformationDoubleKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAnnotationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkAnnotation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkAnnotationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAnnotationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAnnotationWrap *w = new VtkAnnotationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnnotationWrap::SetSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionWrap *a0 = ObjectWrap::Unwrap<VtkSelectionWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelection(
			(vtkSelection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnnotationWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

