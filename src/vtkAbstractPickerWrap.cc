/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkAbstractPickerWrap.h"
#include "vtkRendererWrap.h"
#include "vtkPropWrap.h"
#include "vtkPropCollectionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAbstractPickerWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkAbstractPickerWrap::ptpl;

VtkAbstractPickerWrap::VtkAbstractPickerWrap()
{ }

VtkAbstractPickerWrap::VtkAbstractPickerWrap(vtkSmartPointer<vtkAbstractPicker> _native)
{ native = _native; }

VtkAbstractPickerWrap::~VtkAbstractPickerWrap()
{ }

void VtkAbstractPickerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAbstractPicker").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AbstractPicker").ToLocalChecked(), ConstructorGetter);
}

void VtkAbstractPickerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAbstractPickerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAbstractPickerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddPickList", AddPickList);
	Nan::SetPrototypeMethod(tpl, "addPickList", AddPickList);

	Nan::SetPrototypeMethod(tpl, "DeletePickList", DeletePickList);
	Nan::SetPrototypeMethod(tpl, "deletePickList", DeletePickList);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPickFromList", GetPickFromList);
	Nan::SetPrototypeMethod(tpl, "getPickFromList", GetPickFromList);

	Nan::SetPrototypeMethod(tpl, "GetPickList", GetPickList);
	Nan::SetPrototypeMethod(tpl, "getPickList", GetPickList);

	Nan::SetPrototypeMethod(tpl, "GetRenderer", GetRenderer);
	Nan::SetPrototypeMethod(tpl, "getRenderer", GetRenderer);

	Nan::SetPrototypeMethod(tpl, "InitializePickList", InitializePickList);
	Nan::SetPrototypeMethod(tpl, "initializePickList", InitializePickList);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Pick", Pick);
	Nan::SetPrototypeMethod(tpl, "pick", Pick);

	Nan::SetPrototypeMethod(tpl, "PickFromListOff", PickFromListOff);
	Nan::SetPrototypeMethod(tpl, "pickFromListOff", PickFromListOff);

	Nan::SetPrototypeMethod(tpl, "PickFromListOn", PickFromListOn);
	Nan::SetPrototypeMethod(tpl, "pickFromListOn", PickFromListOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPickFromList", SetPickFromList);
	Nan::SetPrototypeMethod(tpl, "setPickFromList", SetPickFromList);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkAbstractPickerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAbstractPickerWrap::AddPickList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPickerWrap>(info.Holder());
	vtkAbstractPicker *native = (vtkAbstractPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddPickList(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractPickerWrap::DeletePickList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPickerWrap>(info.Holder());
	vtkAbstractPicker *native = (vtkAbstractPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeletePickList(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractPickerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPickerWrap>(info.Holder());
	vtkAbstractPicker *native = (vtkAbstractPicker *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractPickerWrap::GetPickFromList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPickerWrap>(info.Holder());
	vtkAbstractPicker *native = (vtkAbstractPicker *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickFromList();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractPickerWrap::GetPickList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPickerWrap>(info.Holder());
	vtkAbstractPicker *native = (vtkAbstractPicker *)wrapper->native.GetPointer();
	vtkPropCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPickList();
		VtkPropCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPropCollectionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropCollectionWrap *w = new VtkPropCollectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPickerWrap::GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPickerWrap>(info.Holder());
	vtkAbstractPicker *native = (vtkAbstractPicker *)wrapper->native.GetPointer();
	vtkRenderer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderer();
		VtkRendererWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRendererWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRendererWrap *w = new VtkRendererWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPickerWrap::InitializePickList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPickerWrap>(info.Holder());
	vtkAbstractPicker *native = (vtkAbstractPicker *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitializePickList();
}

void VtkAbstractPickerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPickerWrap>(info.Holder());
	vtkAbstractPicker *native = (vtkAbstractPicker *)wrapper->native.GetPointer();
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

void VtkAbstractPickerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPickerWrap>(info.Holder());
	vtkAbstractPicker *native = (vtkAbstractPicker *)wrapper->native.GetPointer();
	vtkAbstractPicker * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAbstractPickerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAbstractPickerWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractPickerWrap *w = new VtkAbstractPickerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractPickerWrap::Pick(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPickerWrap>(info.Holder());
	vtkAbstractPicker *native = (vtkAbstractPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[3]))
				{
					VtkRendererWrap *a3 = ObjectWrap::Unwrap<VtkRendererWrap>(info[3]->ToObject());
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->Pick(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						(vtkRenderer *) a3->native.GetPointer()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractPickerWrap::PickFromListOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPickerWrap>(info.Holder());
	vtkAbstractPicker *native = (vtkAbstractPicker *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PickFromListOff();
}

void VtkAbstractPickerWrap::PickFromListOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPickerWrap>(info.Holder());
	vtkAbstractPicker *native = (vtkAbstractPicker *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PickFromListOn();
}

void VtkAbstractPickerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPickerWrap>(info.Holder());
	vtkAbstractPicker *native = (vtkAbstractPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAbstractPicker * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAbstractPickerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkAbstractPickerWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAbstractPickerWrap *w = new VtkAbstractPickerWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractPickerWrap::SetPickFromList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractPickerWrap>(info.Holder());
	vtkAbstractPicker *native = (vtkAbstractPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPickFromList(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

