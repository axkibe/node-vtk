/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataObjectWrap.h"
#include "vtkAnnotationLayersWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAnnotationWrap.h"
#include "vtkSelectionWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAnnotationLayersWrap::ptpl;

VtkAnnotationLayersWrap::VtkAnnotationLayersWrap()
{ }

VtkAnnotationLayersWrap::VtkAnnotationLayersWrap(vtkSmartPointer<vtkAnnotationLayers> _native)
{ native = _native; }

VtkAnnotationLayersWrap::~VtkAnnotationLayersWrap()
{ }

void VtkAnnotationLayersWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAnnotationLayers").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AnnotationLayers").ToLocalChecked(), ConstructorGetter);
}

void VtkAnnotationLayersWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAnnotationLayersWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAnnotationLayersWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddAnnotation", AddAnnotation);
	Nan::SetPrototypeMethod(tpl, "addAnnotation", AddAnnotation);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCurrentAnnotation", GetCurrentAnnotation);
	Nan::SetPrototypeMethod(tpl, "getCurrentAnnotation", GetCurrentAnnotation);

	Nan::SetPrototypeMethod(tpl, "GetCurrentSelection", GetCurrentSelection);
	Nan::SetPrototypeMethod(tpl, "getCurrentSelection", GetCurrentSelection);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAnnotation", RemoveAnnotation);
	Nan::SetPrototypeMethod(tpl, "removeAnnotation", RemoveAnnotation);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCurrentAnnotation", SetCurrentAnnotation);
	Nan::SetPrototypeMethod(tpl, "setCurrentAnnotation", SetCurrentAnnotation);

	Nan::SetPrototypeMethod(tpl, "SetCurrentSelection", SetCurrentSelection);
	Nan::SetPrototypeMethod(tpl, "setCurrentSelection", SetCurrentSelection);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkAnnotationLayersWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAnnotationLayers> native = vtkSmartPointer<vtkAnnotationLayers>::New();
		VtkAnnotationLayersWrap* obj = new VtkAnnotationLayersWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAnnotationLayersWrap::AddAnnotation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLayersWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLayersWrap>(info.Holder());
	vtkAnnotationLayers *native = (vtkAnnotationLayers *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAnnotationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAnnotationWrap *a0 = ObjectWrap::Unwrap<VtkAnnotationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddAnnotation(
			(vtkAnnotation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnnotationLayersWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLayersWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLayersWrap>(info.Holder());
	vtkAnnotationLayers *native = (vtkAnnotationLayers *)wrapper->native.GetPointer();
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

void VtkAnnotationLayersWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLayersWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLayersWrap>(info.Holder());
	vtkAnnotationLayers *native = (vtkAnnotationLayers *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAnnotationLayersWrap::GetCurrentAnnotation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLayersWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLayersWrap>(info.Holder());
	vtkAnnotationLayers *native = (vtkAnnotationLayers *)wrapper->native.GetPointer();
	vtkAnnotation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentAnnotation();
		VtkAnnotationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAnnotationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAnnotationWrap *w = new VtkAnnotationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAnnotationLayersWrap::GetCurrentSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLayersWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLayersWrap>(info.Holder());
	vtkAnnotationLayers *native = (vtkAnnotationLayers *)wrapper->native.GetPointer();
	vtkSelection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentSelection();
		VtkSelectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSelectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSelectionWrap *w = new VtkSelectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAnnotationLayersWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLayersWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLayersWrap>(info.Holder());
	vtkAnnotationLayers *native = (vtkAnnotationLayers *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationVectorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkAnnotationLayers * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
				VtkAnnotationLayersWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkAnnotationLayersWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkAnnotationLayersWrap *w = new VtkAnnotationLayersWrap();
			w->native.TakeReference(r);
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
		vtkAnnotationLayers * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
			VtkAnnotationLayersWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAnnotationLayersWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAnnotationLayersWrap *w = new VtkAnnotationLayersWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnnotationLayersWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLayersWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLayersWrap>(info.Holder());
	vtkAnnotationLayers *native = (vtkAnnotationLayers *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkAnnotationLayersWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLayersWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLayersWrap>(info.Holder());
	vtkAnnotationLayers *native = (vtkAnnotationLayers *)wrapper->native.GetPointer();
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

void VtkAnnotationLayersWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLayersWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLayersWrap>(info.Holder());
	vtkAnnotationLayers *native = (vtkAnnotationLayers *)wrapper->native.GetPointer();
	vtkAnnotationLayers * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAnnotationLayersWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAnnotationLayersWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAnnotationLayersWrap *w = new VtkAnnotationLayersWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAnnotationLayersWrap::RemoveAnnotation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLayersWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLayersWrap>(info.Holder());
	vtkAnnotationLayers *native = (vtkAnnotationLayers *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAnnotationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAnnotationWrap *a0 = ObjectWrap::Unwrap<VtkAnnotationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveAnnotation(
			(vtkAnnotation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnnotationLayersWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLayersWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLayersWrap>(info.Holder());
	vtkAnnotationLayers *native = (vtkAnnotationLayers *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAnnotationLayers * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAnnotationLayersWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAnnotationLayersWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAnnotationLayersWrap *w = new VtkAnnotationLayersWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnnotationLayersWrap::SetCurrentAnnotation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLayersWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLayersWrap>(info.Holder());
	vtkAnnotationLayers *native = (vtkAnnotationLayers *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAnnotationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAnnotationWrap *a0 = ObjectWrap::Unwrap<VtkAnnotationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCurrentAnnotation(
			(vtkAnnotation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnnotationLayersWrap::SetCurrentSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLayersWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLayersWrap>(info.Holder());
	vtkAnnotationLayers *native = (vtkAnnotationLayers *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionWrap *a0 = ObjectWrap::Unwrap<VtkSelectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCurrentSelection(
			(vtkSelection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnnotationLayersWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLayersWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLayersWrap>(info.Holder());
	vtkAnnotationLayers *native = (vtkAnnotationLayers *)wrapper->native.GetPointer();
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

