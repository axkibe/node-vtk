/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataObjectWrap.h"
#include "vtkAnnotationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkSelectionWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"
#include "vtkInformationStringKeyWrap.h"
#include "vtkInformationDoubleVectorKeyWrap.h"
#include "vtkInformationDoubleKeyWrap.h"
#include "vtkInformationIntegerKeyWrap.h"
#include "vtkInformationDataObjectKeyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAnnotationWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkAnnotationWrap::ptpl;

VtkAnnotationWrap::VtkAnnotationWrap()
{ }

VtkAnnotationWrap::VtkAnnotationWrap(vtkSmartPointer<vtkAnnotation> _native)
{ native = _native; }

VtkAnnotationWrap::~VtkAnnotationWrap()
{ }

void VtkAnnotationWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkAnnotationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkAnnotation").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("Annotation").ToLocalChecked(),tpl->GetFunction());
}

void VtkAnnotationWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "COLOR", COLOR);

	Nan::SetPrototypeMethod(tpl, "DATA", DATA);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "ENABLE", ENABLE);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetSelection", GetSelection);
	Nan::SetPrototypeMethod(tpl, "getSelection", GetSelection);

	Nan::SetPrototypeMethod(tpl, "HIDE", HIDE);

	Nan::SetPrototypeMethod(tpl, "ICON_INDEX", ICON_INDEX);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

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
		VtkAnnotationWrap* obj = new VtkAnnotationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationDoubleVectorKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationDoubleVectorKeyWrap *w = new VtkInformationDoubleVectorKeyWrap();
	w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationDataObjectKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationDataObjectKeyWrap *w = new VtkInformationDataObjectKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAnnotationWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationIntegerKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAnnotationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAnnotationWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::Function>(VtkAnnotationWrap::constructor);
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkAnnotationWrap *w = new VtkAnnotationWrap();
			w->native.TakeReference(r);
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
		vtkAnnotation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkAnnotationWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAnnotationWrap *w = new VtkAnnotationWrap();
		w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSelectionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSelectionWrap *w = new VtkSelectionWrap();
	w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationIntegerKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationIntegerKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
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

void VtkAnnotationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationStringKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationStringKeyWrap *w = new VtkInformationStringKeyWrap();
	w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAnnotationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAnnotationWrap *w = new VtkAnnotationWrap();
	w->native.TakeReference(r);
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationDoubleKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationDoubleKeyWrap *w = new VtkInformationDoubleKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAnnotationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationWrap>(info.Holder());
	vtkAnnotation *native = (vtkAnnotation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAnnotation * r;
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
			Nan::New<v8::Function>(VtkAnnotationWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAnnotationWrap *w = new VtkAnnotationWrap();
		w->native.TakeReference(r);
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
	if(info.Length() > 0 && info[0]->IsObject())
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
	if(info.Length() > 0 && info[0]->IsObject())
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

