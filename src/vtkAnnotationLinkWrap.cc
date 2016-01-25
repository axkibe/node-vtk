/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAnnotationLayersAlgorithmWrap.h"
#include "vtkAnnotationLinkWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAnnotationLayersWrap.h"
#include "vtkSelectionWrap.h"
#include "vtkTableWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAnnotationLinkWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkAnnotationLinkWrap::ptpl;

VtkAnnotationLinkWrap::VtkAnnotationLinkWrap()
{ }

VtkAnnotationLinkWrap::VtkAnnotationLinkWrap(vtkSmartPointer<vtkAnnotationLink> _native)
{ native = _native; }

VtkAnnotationLinkWrap::~VtkAnnotationLinkWrap()
{ }

void VtkAnnotationLinkWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAnnotationLayersAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAnnotationLayersAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkAnnotationLinkWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkAnnotationLink").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("AnnotationLink").ToLocalChecked(),tpl->GetFunction());
}

void VtkAnnotationLinkWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddDomainMap", AddDomainMap);
	Nan::SetPrototypeMethod(tpl, "addDomainMap", AddDomainMap);

	Nan::SetPrototypeMethod(tpl, "GetAnnotationLayers", GetAnnotationLayers);
	Nan::SetPrototypeMethod(tpl, "getAnnotationLayers", GetAnnotationLayers);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCurrentSelection", GetCurrentSelection);
	Nan::SetPrototypeMethod(tpl, "getCurrentSelection", GetCurrentSelection);

	Nan::SetPrototypeMethod(tpl, "GetDomainMap", GetDomainMap);
	Nan::SetPrototypeMethod(tpl, "getDomainMap", GetDomainMap);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfDomainMaps", GetNumberOfDomainMaps);
	Nan::SetPrototypeMethod(tpl, "getNumberOfDomainMaps", GetNumberOfDomainMaps);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllDomainMaps", RemoveAllDomainMaps);
	Nan::SetPrototypeMethod(tpl, "removeAllDomainMaps", RemoveAllDomainMaps);

	Nan::SetPrototypeMethod(tpl, "RemoveDomainMap", RemoveDomainMap);
	Nan::SetPrototypeMethod(tpl, "removeDomainMap", RemoveDomainMap);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAnnotationLayers", SetAnnotationLayers);
	Nan::SetPrototypeMethod(tpl, "setAnnotationLayers", SetAnnotationLayers);

	Nan::SetPrototypeMethod(tpl, "SetCurrentSelection", SetCurrentSelection);
	Nan::SetPrototypeMethod(tpl, "setCurrentSelection", SetCurrentSelection);

}

void VtkAnnotationLinkWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAnnotationLink> native = vtkSmartPointer<vtkAnnotationLink>::New();
		VtkAnnotationLinkWrap* obj = new VtkAnnotationLinkWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAnnotationLinkWrap::AddDomainMap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLinkWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLinkWrap>(info.Holder());
	vtkAnnotationLink *native = (vtkAnnotationLink *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTableWrap *a0 = ObjectWrap::Unwrap<VtkTableWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddDomainMap(
			(vtkTable *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnnotationLinkWrap::GetAnnotationLayers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLinkWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLinkWrap>(info.Holder());
	vtkAnnotationLink *native = (vtkAnnotationLink *)wrapper->native.GetPointer();
	vtkAnnotationLayers * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAnnotationLayers();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAnnotationLayersWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAnnotationLayersWrap *w = new VtkAnnotationLayersWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAnnotationLinkWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLinkWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLinkWrap>(info.Holder());
	vtkAnnotationLink *native = (vtkAnnotationLink *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAnnotationLinkWrap::GetCurrentSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLinkWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLinkWrap>(info.Holder());
	vtkAnnotationLink *native = (vtkAnnotationLink *)wrapper->native.GetPointer();
	vtkSelection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentSelection();
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

void VtkAnnotationLinkWrap::GetDomainMap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLinkWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLinkWrap>(info.Holder());
	vtkAnnotationLink *native = (vtkAnnotationLink *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkTable * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetDomainMap(
			info[0]->Int32Value()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkTableWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTableWrap *w = new VtkTableWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnnotationLinkWrap::GetNumberOfDomainMaps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLinkWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLinkWrap>(info.Holder());
	vtkAnnotationLink *native = (vtkAnnotationLink *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfDomainMaps();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAnnotationLinkWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLinkWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLinkWrap>(info.Holder());
	vtkAnnotationLink *native = (vtkAnnotationLink *)wrapper->native.GetPointer();
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

void VtkAnnotationLinkWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLinkWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLinkWrap>(info.Holder());
	vtkAnnotationLink *native = (vtkAnnotationLink *)wrapper->native.GetPointer();
	vtkAnnotationLink * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAnnotationLinkWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAnnotationLinkWrap *w = new VtkAnnotationLinkWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAnnotationLinkWrap::RemoveAllDomainMaps(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLinkWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLinkWrap>(info.Holder());
	vtkAnnotationLink *native = (vtkAnnotationLink *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllDomainMaps();
}

void VtkAnnotationLinkWrap::RemoveDomainMap(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLinkWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLinkWrap>(info.Holder());
	vtkAnnotationLink *native = (vtkAnnotationLink *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTableWrap *a0 = ObjectWrap::Unwrap<VtkTableWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveDomainMap(
			(vtkTable *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnnotationLinkWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLinkWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLinkWrap>(info.Holder());
	vtkAnnotationLink *native = (vtkAnnotationLink *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAnnotationLink * r;
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
			Nan::New<v8::Function>(VtkAnnotationLinkWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAnnotationLinkWrap *w = new VtkAnnotationLinkWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnnotationLinkWrap::SetAnnotationLayers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLinkWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLinkWrap>(info.Holder());
	vtkAnnotationLink *native = (vtkAnnotationLink *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAnnotationLayersWrap *a0 = ObjectWrap::Unwrap<VtkAnnotationLayersWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAnnotationLayers(
			(vtkAnnotationLayers *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnnotationLinkWrap::SetCurrentSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnnotationLinkWrap *wrapper = ObjectWrap::Unwrap<VtkAnnotationLinkWrap>(info.Holder());
	vtkAnnotationLink *native = (vtkAnnotationLink *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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
