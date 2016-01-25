/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkGenericAttributeCollectionWrap.h"
#include "vtkGenericAttributeWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkGenericAttributeCollectionWrap::constructor;

VtkGenericAttributeCollectionWrap::VtkGenericAttributeCollectionWrap()
{ }

VtkGenericAttributeCollectionWrap::VtkGenericAttributeCollectionWrap(vtkSmartPointer<vtkGenericAttributeCollection> _native)
{ native = _native; }

VtkGenericAttributeCollectionWrap::~VtkGenericAttributeCollectionWrap()
{ }

void VtkGenericAttributeCollectionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkGenericAttributeCollectionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkGenericAttributeCollection").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("GenericAttributeCollection").ToLocalChecked(),tpl->GetFunction());
}

void VtkGenericAttributeCollectionWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "FindAttribute", FindAttribute);
	Nan::SetPrototypeMethod(tpl, "findAttribute", FindAttribute);

	Nan::SetPrototypeMethod(tpl, "GetActiveAttribute", GetActiveAttribute);
	Nan::SetPrototypeMethod(tpl, "getActiveAttribute", GetActiveAttribute);

	Nan::SetPrototypeMethod(tpl, "GetActiveComponent", GetActiveComponent);
	Nan::SetPrototypeMethod(tpl, "getActiveComponent", GetActiveComponent);

	Nan::SetPrototypeMethod(tpl, "GetAttribute", GetAttribute);
	Nan::SetPrototypeMethod(tpl, "getAttribute", GetAttribute);

	Nan::SetPrototypeMethod(tpl, "GetAttributeIndex", GetAttributeIndex);
	Nan::SetPrototypeMethod(tpl, "getAttributeIndex", GetAttributeIndex);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMaxNumberOfComponents", GetMaxNumberOfComponents);
	Nan::SetPrototypeMethod(tpl, "getMaxNumberOfComponents", GetMaxNumberOfComponents);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfAttributes", GetNumberOfAttributes);
	Nan::SetPrototypeMethod(tpl, "getNumberOfAttributes", GetNumberOfAttributes);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfAttributesToInterpolate", GetNumberOfAttributesToInterpolate);
	Nan::SetPrototypeMethod(tpl, "getNumberOfAttributesToInterpolate", GetNumberOfAttributesToInterpolate);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfComponents", GetNumberOfComponents);
	Nan::SetPrototypeMethod(tpl, "getNumberOfComponents", GetNumberOfComponents);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPointCenteredComponents", GetNumberOfPointCenteredComponents);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPointCenteredComponents", GetNumberOfPointCenteredComponents);

	Nan::SetPrototypeMethod(tpl, "InsertAttribute", InsertAttribute);
	Nan::SetPrototypeMethod(tpl, "insertAttribute", InsertAttribute);

	Nan::SetPrototypeMethod(tpl, "InsertNextAttribute", InsertNextAttribute);
	Nan::SetPrototypeMethod(tpl, "insertNextAttribute", InsertNextAttribute);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsEmpty", IsEmpty);
	Nan::SetPrototypeMethod(tpl, "isEmpty", IsEmpty);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAttribute", RemoveAttribute);
	Nan::SetPrototypeMethod(tpl, "removeAttribute", RemoveAttribute);

	Nan::SetPrototypeMethod(tpl, "Reset", Reset);
	Nan::SetPrototypeMethod(tpl, "reset", Reset);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetActiveAttribute", SetActiveAttribute);
	Nan::SetPrototypeMethod(tpl, "setActiveAttribute", SetActiveAttribute);

	Nan::SetPrototypeMethod(tpl, "SetAttributesToInterpolateToAll", SetAttributesToInterpolateToAll);
	Nan::SetPrototypeMethod(tpl, "setAttributesToInterpolateToAll", SetAttributesToInterpolateToAll);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

}

void VtkGenericAttributeCollectionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGenericAttributeCollection> native = vtkSmartPointer<vtkGenericAttributeCollection>::New();
		VtkGenericAttributeCollectionWrap* obj = new VtkGenericAttributeCollectionWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGenericAttributeCollectionWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkGenericAttributeCollectionWrap *a0 = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkGenericAttributeCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAttributeCollectionWrap::FindAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->FindAttribute(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAttributeCollectionWrap::GetActiveAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActiveAttribute();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericAttributeCollectionWrap::GetActiveComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActiveComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericAttributeCollectionWrap::GetAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkGenericAttribute * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetAttribute(
			info[0]->Int32Value()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkGenericAttributeWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericAttributeWrap *w = new VtkGenericAttributeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAttributeCollectionWrap::GetAttributeIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetAttributeIndex(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAttributeCollectionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGenericAttributeCollectionWrap::GetMaxNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxNumberOfComponents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericAttributeCollectionWrap::GetNumberOfAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfAttributes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericAttributeCollectionWrap::GetNumberOfAttributesToInterpolate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfAttributesToInterpolate();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericAttributeCollectionWrap::GetNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfComponents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericAttributeCollectionWrap::GetNumberOfPointCenteredComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPointCenteredComponents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericAttributeCollectionWrap::InsertAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkGenericAttributeWrap *a1 = ObjectWrap::Unwrap<VtkGenericAttributeWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InsertAttribute(
				info[0]->Int32Value(),
				(vtkGenericAttribute *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAttributeCollectionWrap::InsertNextAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkGenericAttributeWrap *a0 = ObjectWrap::Unwrap<VtkGenericAttributeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->InsertNextAttribute(
			(vtkGenericAttribute *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAttributeCollectionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
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

void VtkGenericAttributeCollectionWrap::IsEmpty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsEmpty();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericAttributeCollectionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	vtkGenericAttributeCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGenericAttributeCollectionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericAttributeCollectionWrap *w = new VtkGenericAttributeCollectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericAttributeCollectionWrap::RemoveAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveAttribute(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAttributeCollectionWrap::Reset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Reset();
}

void VtkGenericAttributeCollectionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGenericAttributeCollection * r;
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
			Nan::New<v8::Function>(VtkGenericAttributeCollectionWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericAttributeCollectionWrap *w = new VtkGenericAttributeCollectionWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAttributeCollectionWrap::SetActiveAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetActiveAttribute(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAttributeCollectionWrap::SetAttributesToInterpolateToAll(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAttributesToInterpolateToAll();
}

void VtkGenericAttributeCollectionWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAttributeCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info.Holder());
	vtkGenericAttributeCollection *native = (vtkGenericAttributeCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkGenericAttributeCollectionWrap *a0 = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkGenericAttributeCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

